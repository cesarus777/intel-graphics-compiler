;=========================== begin_copyright_notice ============================
;
; Copyright (C) 2022 Intel Corporation
;
; SPDX-License-Identifier: MIT
;
;============================ end_copyright_notice =============================
;
; RUN: igc_opt -igc-low-precision-opt -S < %s | FileCheck %s
; ------------------------------------------------
; LowPrecisionOpt
; ------------------------------------------------

define void @test_genx_fpext(i32 %src1, i32 %src2) {
; CHECK-LABEL: @test_genx_fpext(
; CHECK:    [[TMP1:%.*]] = call float @llvm.genx.GenISA.DCL.inputVec.f32(i32 %src1, i32 %src2)
; CHECK:    call void @use.f32(float [[TMP1]])
; CHECK:    ret void
;
  %1 = call half @llvm.genx.GenISA.DCL.inputVec.f16(i32 %src1, i32 %src2)
  %2 = fpext half %1 to float
  call void @use.f32(float %2)
  ret void
}


declare void @use.f16(half)
declare void @use.f32(float)

declare half @llvm.genx.GenISA.DCL.inputVec.f16(i32, i32)
declare float @llvm.genx.GenISA.RuntimeValue.f32(i32)

!igc.functions = !{!3}

!1 = !{!2}
!2 = !{!"function_type", i32 0}
!3 = !{void (i32,i32)* @test_genx_fpext, !1}
