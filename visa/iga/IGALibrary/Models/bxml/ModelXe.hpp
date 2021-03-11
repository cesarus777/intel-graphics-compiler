/*========================== begin_copyright_notice ============================

Copyright (c) 2017-2021 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom
the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.

============================= end_copyright_notice ===========================*/

#ifndef IGA_MODELS_XE_HPP
#define IGA_MODELS_XE_HPP

// ******************** DO NOT MODIFY DIRECTLY ********************
// Auto-generated by IGA project tools

#include "../Models.hpp"

namespace iga {
    static const iga::OpSpec MODEL_XE_OPSPECS[unsigned(Op::TOTAL_OPS) + 1] {
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::ADD /* Op::1 */, Platform::XE, 0x40,
            "add",
            "Addition",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- UB,B,UW,W,UD,D
                {TYPE(Type::F),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // HF <- UB,B,UW,W,UD,D
                {TYPE(Type::HF),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::ADDC /* Op::3 */, Platform::XE, 0x4E,
            "addc",
            "Addition with Carry",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::AND /* Op::4 */, Platform::XE, 0x65,
            "and",
            "Logic And",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::ASR /* Op::5 */, Platform::XE, 0x6C,
            "asr",
            "Arithmetic Shift Right",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::AVG /* Op::6 */, Platform::XE, 0x42,
            "avg",
            "Average",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::BFE /* Op::7 */, Platform::XE, 0x78,
            "bfe",
            "Bit Field Extract",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BFI1 /* Op::8 */, Platform::XE, 0x79,
            "bfi1",
            "Bit Field Insert 1",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BFI2 /* Op::9 */, Platform::XE, 0x7A,
            "bfi2",
            "Bit Field Insert 2",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::BFREV /* Op::11 */, Platform::XE, 0x77,
            "bfrev",
            "Bit Field Reverse",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BRC /* Op::12 */, Platform::XE, 0x23,
            "brc",
            "Branch Converging",
            OpSpec::Format::JUMP_BINARY_BRC,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BRD /* Op::13 */, Platform::XE, 0x21,
            "brd",
            "Branch Diverging",
            OpSpec::Format::JUMP_UNARY_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::BREAK /* Op::14 */, Platform::XE, 0x28,
            "break",
            "Break",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CALL /* Op::15 */, Platform::XE, 0x2C,
            "call",
            "Call",
            OpSpec::Format::JUMP_UNARY_CALL_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CALLA /* Op::16 */, Platform::XE, 0x2B,
            "calla",
            "Call Absolute",
            OpSpec::Format::JUMP_UNARY_CALL_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CBIT /* Op::17 */, Platform::XE, 0x4D,
            "cbit",
            "Count Bits Set",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UB,UW,UD
                {TYPE(Type::UD),TYPE(Type::UB)|TYPE(Type::UW)|TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CMP /* Op::18 */, Platform::XE, 0x70,
            "cmp",
            "Compare",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- UB,B,UW,W,UD,D
                {TYPE(Type::F),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // HF <- UB,B,UW,W,UD,D
                {TYPE(Type::HF),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // HF,F <- HF,F
                {TYPE(Type::HF)|TYPE(Type::F),TYPE(Type::HF)|TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::CMPN /* Op::19 */, Platform::XE, 0x71,
            "cmpn",
            "Compare NaN",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- UB,B,UW,W,UD,D
                {TYPE(Type::F),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::CONT /* Op::20 */, Platform::XE, 0x29,
            "cont",
            "Continue",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::CSEL /* Op::21 */, Platform::XE, 0x72,
            "csel",
            "Conditional Select",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // W <- W
                {TYPE(Type::W),TYPE(Type::W)}
            },
            OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::DP4A /* Op::26 */, Platform::XE, 0x58,
            "dp4a",
            "Dot Product 4 Accumulate",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // UD,D <- UD,D
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::ELSE /* Op::30 */, Platform::XE, 0x24,
            "else",
            "Else",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_BRCTL
        },
        {Op::ENDIF /* Op::31 */, Platform::XE, 0x25,
            "endif",
            "End If",
            OpSpec::Format::JUMP_UNARY_IMM,
            { }, // no type mappings
            OpSpec::Attr::NONE
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::FBH /* Op::34 */, Platform::XE, 0x4B,
            "fbh",
            "Find First Bit from MSB Side",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UD,D
                {TYPE(Type::UD),TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::FBL /* Op::35 */, Platform::XE, 0x4C,
            "fbl",
            "Find First Bit from LSB Side",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::FRC /* Op::36 */, Platform::XE, 0x43,
            "frc",
            "Fraction",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::GOTO /* Op::39 */, Platform::XE, 0x2E,
            "goto",
            "Goto",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_BRCTL|OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::HALT /* Op::40 */, Platform::XE, 0x2A,
            "halt",
            "Halt",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::IF /* Op::41 */, Platform::XE, 0x22,
            "if",
            "If",
            OpSpec::Format::JUMP_BINARY_IMM_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_BRCTL|OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::ILLEGAL /* Op::42 */, Platform::XE, 0x00,
            "illegal",
            "Illegal",
            OpSpec::Format::NULLARY,
            { }, // no type mappings
            OpSpec::Attr::NONE
        },
        {Op::JMPI /* Op::43 */, Platform::XE, 0x20,
            "jmpi",
            "Jump Indexed",
            OpSpec::Format::JUMP_UNARY_REGIMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::JOIN /* Op::44 */, Platform::XE, 0x2F,
            "join",
            "Join",
            OpSpec::Format::JUMP_UNARY_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::LZD /* Op::47 */, Platform::XE, 0x4A,
            "lzd",
            "Leading Zero Detection",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UD <- UB,B,UW,W,UD,D
                {TYPE(Type::UD),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MAC /* Op::48 */, Platform::XE, 0x48,
            "mac",
            "Multiply Accumulate",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MACH /* Op::49 */, Platform::XE, 0x49,
            "mach",
            "Multiply Accumulate High",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::MAD /* Op::51 */, Platform::XE, 0x5B,
            "mad",
            "Multiply Add",
            OpSpec::Format::TERNARY_REGIMM_REG_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)},
                // W <- B
                {TYPE(Type::W),TYPE(Type::B)},
                // W,D <- W,D
                {TYPE(Type::W)|TYPE(Type::D),TYPE(Type::W)|TYPE(Type::D)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::MATH /* Op::55 */, Platform::XE, 0x38,
            "math",
            "Extended Math Function",
            OpSpec::Format::MATH_BINARY_REG_REGIMM,
            {
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // F,HF <- F,HF
                {TYPE(Type::F)|TYPE(Type::HF),TYPE(Type::F)|TYPE(Type::HF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MOV /* Op::56 */, Platform::XE, 0x61,
            "mov",
            "Move",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- UB,B,UW,W,UD,D
                {TYPE(Type::F),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // UB,B,UW,W,UD,D <- F
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::F)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- UB,B,UW,W,UD,D
                {TYPE(Type::HF),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // HF <- F
                {TYPE(Type::HF),TYPE(Type::F)},
                // UB,B,UW,W,UD,D <- HF
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::HF)},
                // F <- HF
                {TYPE(Type::F),TYPE(Type::HF)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MOVI /* Op::57 */, Platform::XE, 0x63,
            "movi",
            "Move Indexed",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // B <- B
                {TYPE(Type::B),TYPE(Type::B)},
                // UB <- UB
                {TYPE(Type::UB),TYPE(Type::UB)},
                // W <- W
                {TYPE(Type::W),TYPE(Type::W)},
                // UW <- UW
                {TYPE(Type::UW),TYPE(Type::UW)},
                // D <- D
                {TYPE(Type::D),TYPE(Type::D)},
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::MUL /* Op::58 */, Platform::XE, 0x41,
            "mul",
            "Multiply",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B <- UB,B
                {TYPE(Type::UB)|TYPE(Type::B),TYPE(Type::UB)|TYPE(Type::B)},
                // UW,W <- UB,B
                {TYPE(Type::UW)|TYPE(Type::W),TYPE(Type::UB)|TYPE(Type::B)},
                // UD,D <- UB,B
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)},
                // UW,W <- UW,W
                {TYPE(Type::UW)|TYPE(Type::W),TYPE(Type::UW)|TYPE(Type::W)},
                // UD,D <- UW,W
                {TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UW)|TYPE(Type::W)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::NOP /* Op::59 */, Platform::XE, 0x60,
            "nop",
            "No Operation",
            OpSpec::Format::NULLARY,
            { }, // no type mappings
            OpSpec::Attr::NONE
        },
        {Op::NOT /* Op::60 */, Platform::XE, 0x64,
            "not",
            "Logic Not",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::OR /* Op::61 */, Platform::XE, 0x66,
            "or",
            "Logic Or",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::RET /* Op::63 */, Platform::XE, 0x2D,
            "ret",
            "Return",
            OpSpec::Format::JUMP_UNARY_REG,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::RNDD /* Op::64 */, Platform::XE, 0x45,
            "rndd",
            "Round Down",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::RNDE /* Op::65 */, Platform::XE, 0x46,
            "rnde",
            "Round to Nearest or Even",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::RNDU /* Op::66 */, Platform::XE, 0x44,
            "rndu",
            "Round Up",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::RNDZ /* Op::67 */, Platform::XE, 0x47,
            "rndz",
            "Round to Zero",
            OpSpec::Format::BASIC_UNARY_REGIMM,
            {
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::ROL /* Op::68 */, Platform::XE, 0x6F,
            "rol",
            "Rotate Left",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UW,UD <- UW,UD
                {TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UW)|TYPE(Type::UD)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::ROR /* Op::69 */, Platform::XE, 0x6E,
            "ror",
            "Rotate Right",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UW,UD <- UW,UD
                {TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UW)|TYPE(Type::UD)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::SEL /* Op::74 */, Platform::XE, 0x62,
            "sel",
            "Select",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)},
                // F <- F
                {TYPE(Type::F),TYPE(Type::F)},
                // HF <- HF
                {TYPE(Type::HF),TYPE(Type::HF)}
            },
            OpSpec::Attr::IS_SELECT|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::SEND /* Op::75 */, Platform::XE, 0x31,
            "send",
            "Send Message",
            OpSpec::Format::SEND_BINARY,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::SENDC /* Op::76 */, Platform::XE, 0x32,
            "sendc",
            "Send Message Conditional",
            OpSpec::Format::SEND_BINARY,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::SHL /* Op::80 */, Platform::XE, 0x69,
            "shl",
            "Shift Left",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::SHR /* Op::81 */, Platform::XE, 0x68,
            "shr",
            "Shift Right",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,UW,UD <- UB,UW,UD
                {TYPE(Type::UB)|TYPE(Type::UW)|TYPE(Type::UD),TYPE(Type::UB)|TYPE(Type::UW)|TYPE(Type::UD)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION|OpSpec::Attr::SUPPORTS_SRCMODS
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::SUBB /* Op::84 */, Platform::XE, 0x4F,
            "subb",
            "Subtraction with Borrow",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UD <- UD
                {TYPE(Type::UD),TYPE(Type::UD)}
            },
            OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SATURATION
        },
        {Op::SYNC /* Op::85 */, Platform::XE, 0x01,
            "sync",
            "Synchronize",
            OpSpec::Format::SYNC_UNARY,
            {
                //  <- UB,B,UW,W,UD,D,UQ,Q,HF,F,DF
                {ENUM_BITSET_EMPTY_VALUE,TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)|TYPE(Type::UQ)|TYPE(Type::Q)|TYPE(Type::HF)|TYPE(Type::F)|TYPE(Type::DF)}
            },
            OpSpec::Attr::NONE
        },
        {Op::INVALID, Platform::XE, 0x0, nullptr, nullptr, OpSpec::Format::INVALID, {}, OpSpec::Attr::NONE,         },
        {Op::WHILE /* Op::87 */, Platform::XE, 0x27,
            "while",
            "While",
            OpSpec::Format::JUMP_UNARY_IMM,
            { }, // no type mappings
            OpSpec::Attr::SUPPORTS_PREDICATION
        },
        {Op::XOR /* Op::88 */, Platform::XE, 0x67,
            "xor",
            "Logic Xor",
            OpSpec::Format::BASIC_BINARY_REG_REGIMM,
            {
                // UB,B,UW,W,UD,D <- UB,B,UW,W,UD,D
                {TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D),TYPE(Type::UB)|TYPE(Type::B)|TYPE(Type::UW)|TYPE(Type::W)|TYPE(Type::UD)|TYPE(Type::D)}
            },
            OpSpec::Attr::IS_BITWISE|OpSpec::Attr::SUPPORTS_PREDICATION|OpSpec::Attr::SUPPORTS_FLAGMODIFIER|OpSpec::Attr::SUPPORTS_SRCMODS
        }
    }; // end MODEL_XE_OPSPECS
} // namespace iga
#endif // IGA_MODELS_XE_HPP
