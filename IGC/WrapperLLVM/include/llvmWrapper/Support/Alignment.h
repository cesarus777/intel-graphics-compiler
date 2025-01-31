/*========================== begin_copyright_notice ============================

Copyright (C) 2020-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#ifndef IGCLLVM_SUPPORT_ALIGNMENT_H
#define IGCLLVM_SUPPORT_ALIGNMENT_H

#include <cstdint>
#include <type_traits>
#include "llvm/IR/Value.h"
#include "llvm/Config/llvm-config.h"
#if LLVM_VERSION_MAJOR >= 10
#include "llvm/Support/Alignment.h"
using namespace llvm;
#endif

#if LLVM_VERSION_MAJOR >= 14
typedef uint64_t alignment_t;
#else
typedef unsigned alignment_t;
#endif

namespace IGCLLVM {
#if LLVM_VERSION_MAJOR < 10
    inline uint64_t getAlignmentValue(uint64_t Val) { return Val; }
    inline unsigned getAlign(uint64_t Val) { return (unsigned)Val; }
#else
    inline uint64_t getAlignmentValue(llvm::Align A) { return A.value(); }
    inline uint64_t getAlignmentValue(uint64_t Val) { return Val; }
    inline llvm::Align getAlign(uint64_t Val) { return llvm::Align{Val}; }
#endif

    // The transition from unsigned to llvm::Align was not completed with LLVM
    // 9->10 switch and some of functions (see IRBuilder methods) were still
    // using unsigned type. With LLVM 11 transition this was changed and now
    // IRBuilder methods are using llvm::Align. It creates a problem with
    // IGCLLVM::getAlign function, because it stopped work properly.
    // IGCLLVM::getAlignmentValueIfNeeded is a helper to getAlign function that
    // resolves such situations.
#if LLVM_VERSION_MAJOR < 10
    inline uint64_t getAlignmentValueIfNeeded(uint64_t A) { return A; }
#elif LLVM_VERSION_MAJOR == 10
    inline uint64_t getAlignmentValueIfNeeded(llvm::Align A) {
      return A.value();
    }
#else
    inline llvm::Align getAlignmentValueIfNeeded(llvm::Align A) { return A; }
#endif

    using Align =
#if LLVM_VERSION_MAJOR < 10
        unsigned;
#elif LLVM_VERSION_MAJOR == 10
        llvm::MaybeAlign;
#elif LLVM_VERSION_MAJOR >= 11
        llvm::Align;
#endif

    inline Align getCorrectAlign(alignment_t Val)
    {
#if LLVM_VERSION_MAJOR >= 11
        // llvm::Align does not accept 0 alignment.
        return llvm::assumeAligned(Val);
#else
        return Align{ Val };
#endif
    }

    // It is meant for copying alignement.
    // getAlign returns different type for different LLVM versions but
    // it can be overcome by using auto or direct usage in another LLVM
    // interface.
    template <typename TValue,
              std::enable_if_t<std::is_base_of_v<llvm::Value, TValue>, int> = 0>
    Align getAlign(const TValue &Val)
    {
#if LLVM_VERSION_MAJOR <= 9
        return Val.getAlignment();
#elif LLVM_VERSION_MAJOR <= 10
        return llvm::MaybeAlign(Val.getAlignment());
#else
        return llvm::Align(Val.getAlignment());
#endif
    }

    template <typename TValue,
              std::enable_if_t<std::is_base_of_v<llvm::Value, TValue>, int> = 0>
    Align getDestAlign(const TValue &Val) {
#if LLVM_VERSION_MAJOR <= 9
        return Val.getDestAlignment();
#elif LLVM_VERSION_MAJOR <= 10
        return Val.getDestAlign();
#else
        return Val.getDestAlign().valueOrOne();
#endif
    }

    template <typename TValue,
              std::enable_if_t<std::is_base_of_v<llvm::Value, TValue>, int> = 0>
    Align getSourceAlign(const TValue &Val) {
#if LLVM_VERSION_MAJOR <= 9
        return Val.getSourceAlignment();
#elif LLVM_VERSION_MAJOR <= 10
        return Val.getSourceAlign();
#else
        return Val.getSourceAlign().valueOrOne();
#endif
    }

} // namespace IGCLLVM

#endif
