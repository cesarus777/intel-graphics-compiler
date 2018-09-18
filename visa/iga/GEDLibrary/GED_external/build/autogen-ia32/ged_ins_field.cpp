/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */

#include "ged_enumerations_internal.h"
#include "ged_ins_field_internal.h"
#include "ged_ins_field.h"
GED_FIELD_TYPE fieldTypesByField[108] =
{
    0x3, // 0
    0x0, // 1
    0x8000, // 2
    0x0, // 3
    0x0, // 4
    0x103, // 5
    0x103, // 6
    0x103, // 7
    0x103, // 8
    0x103, // 9
    0x103, // 10
    0x103, // 11
    0x103, // 12
    0x102, // 13
    0x103, // 14
    0x103, // 15
    0x103, // 16
    0x103, // 17
    0x103, // 18
    0x103, // 19
    0x103, // 20
    0x103, // 21
    0x103, // 22
    0x103, // 23
    0x103, // 24
    0x100, // 25
    0x108, // 26
    0x100, // 27
    0x100, // 28
    0x102, // 29
    0x103, // 30
    0x100, // 31
    0x100, // 32
    0x108, // 33
    0x100, // 34
    0x100, // 35
    0x103, // 36
    0x103, // 37
    0x102, // 38
    0x102, // 39
    0x102, // 40
    0x100, // 41
    0x100, // 42
    0x100, // 43
    0x100, // 44
    0x108, // 45
    0x100, // 46
    0x100, // 47
    0x103, // 48
    0x103, // 49
    0x102, // 50
    0x102, // 51
    0x102, // 52
    0x124, // 53
    0x103, // 54
    0x103, // 55
    0x103, // 56
    0x103, // 57
    0x103, // 58
    0x100, // 59
    0x100, // 60
    0x100, // 61
    0x103, // 62
    0x103, // 63
    0x102, // 64
    0x103, // 65
    0x103, // 66
    0x103, // 67
    0x100, // 68
    0x100, // 69
    0x102, // 70
    0x102, // 71
    0x102, // 72
    0x120, // 73
    0x120, // 74
    0x103, // 75
    0x103, // 76
    0x108, // 77
    0x108, // 78
    0x100, // 79
    0x100, // 80
    0x100, // 81
    0x100, // 82
    0x100, // 83
    0x100, // 84
    0x103, // 85
    0x103, // 86
    0x103, // 87
    0x103, // 88
    0x103, // 89
    0x103, // 90
    0x100, // 91
    0x103, // 92
    0x103, // 93
    0x100, // 94
    0x100, // 95
    0x100, // 96
    0x100, // 97
    0x100, // 98
    0x100, // 99
    0x102, // 100
    0x100, // 101
    0x103, // 102
    0x103, // 103
    0x103, // 104
    0x124, // 105
    0x124, // 106
    0x102 // 107
}; // fieldTypesByField[]
const char** stringGettersByField[108] =
{
    OpcodeEnumeration, // 0
    NULL, // 1
    NULL, // 2
    NULL, // 3
    NULL, // 4
    AccessModeEnumeration, // 5
    MaskCtrlEnumeration, // 6
    DepCtrlEnumeration, // 7
    ExecMaskOffsetCtrlEnumeration, // 8
    ChannelOffsetEnumeration, // 9
    ThreadCtrlEnumeration, // 10
    PredCtrlEnumeration, // 11
    PredInvEnumeration, // 12
    NULL, // 13
    CondModifierEnumeration, // 14
    AccWrCtrlEnumeration, // 15
    DebugCtrlEnumeration, // 16
    SaturateEnumeration, // 17
    RegFileEnumerationDisassembly, // 18
    DataTypeEnumeration, // 19
    RegFileEnumerationDisassembly, // 20
    DataTypeEnumeration, // 21
    RegFileEnumerationDisassembly, // 22
    DataTypeEnumeration, // 23
    DstChanEnEnumeration, // 24
    NULL, // 25
    NULL, // 26
    NULL, // 27
    NULL, // 28
    NULL, // 29
    AddrModeEnumeration, // 30
    NULL, // 31
    NULL, // 32
    NULL, // 33
    NULL, // 34
    NULL, // 35
    SrcModEnumeration, // 36
    AddrModeEnumeration, // 37
    NULL, // 38
    NULL, // 39
    NULL, // 40
    NULL, // 41
    NULL, // 42
    NULL, // 43
    NULL, // 44
    NULL, // 45
    NULL, // 46
    NULL, // 47
    SrcModEnumeration, // 48
    AddrModeEnumeration, // 49
    NULL, // 50
    NULL, // 51
    NULL, // 52
    NULL, // 53
    SrcModEnumeration, // 54
    DataTypeEnumeration, // 55
    RepCtrlEnumerationDisassembly, // 56
    RepCtrlEnumerationDisassembly, // 57
    RepCtrlEnumerationDisassembly, // 58
    NULL, // 59
    NULL, // 60
    NULL, // 61
    RegFileEnumerationDisassembly, // 62
    AddrModeEnumeration, // 63
    NULL, // 64
    SFIDEnumerationDisassembly, // 65
    RegFileEnumerationDisassembly, // 66
    DataTypeEnumeration, // 67
    NULL, // 68
    NULL, // 69
    NULL, // 70
    NULL, // 71
    NULL, // 72
    NULL, // 73
    NULL, // 74
    EOTEnumeration, // 75
    MathFCEnumeration, // 76
    NULL, // 77
    NULL, // 78
    NULL, // 79
    NULL, // 80
    NULL, // 81
    NULL, // 82
    NULL, // 83
    NULL, // 84
    RegFileEnumerationDisassembly, // 85
    MathMacroExtEnumeration, // 86
    MathMacroExtEnumeration, // 87
    MathMacroExtEnumeration, // 88
    MathMacroExtEnumeration, // 89
    BranchCtrlEnumerationDisassembly, // 90
    NULL, // 91
    DataTypeEnumeration, // 92
    NoSrcDepSetEnumeration, // 93
    NULL, // 94
    NULL, // 95
    NULL, // 96
    NULL, // 97
    NULL, // 98
    NULL, // 99
    NULL, // 100
    NULL, // 101
    ChannelModeEnumeration, // 102
    MessageTypeEnumerationDisassembly, // 103
    ExecutionDataTypeEnumeration, // 104
    NULL, // 105
    NULL, // 106
    NULL // 107
}; // stringGettersByField[]
const char* fieldNameByField[108] =
{
    "Opcode", // 0
    "CmptCtrl", // 1
    "Reserved", // 2
    "NumOfSourceOperands", // 3
    "HasDestinationOperand", // 4
    "AccessMode", // 5
    "MaskCtrl", // 6
    "DepCtrl", // 7
    "ExecMaskOffsetCtrl", // 8
    "ChannelOffset", // 9
    "ThreadCtrl", // 10
    "PredCtrl", // 11
    "PredInv", // 12
    "ExecSize", // 13
    "CondModifier", // 14
    "AccWrCtrl", // 15
    "DebugCtrl", // 16
    "Saturate", // 17
    "DstRegFile", // 18
    "DstDataType", // 19
    "Src0RegFile", // 20
    "Src0DataType", // 21
    "Src1RegFile", // 22
    "Src1DataType", // 23
    "DstChanEn", // 24
    "DstSubRegNum", // 25
    "DstAddrImm", // 26
    "DstRegNum", // 27
    "DstAddrSubRegNum", // 28
    "DstHorzStride", // 29
    "DstAddrMode", // 30
    "Src0ChanSel", // 31
    "Src0SubRegNum", // 32
    "Src0AddrImm", // 33
    "Src0RegNum", // 34
    "Src0AddrSubRegNum", // 35
    "Src0SrcMod", // 36
    "Src0AddrMode", // 37
    "Src0HorzStride", // 38
    "Src0Width", // 39
    "Src0VertStride", // 40
    "FlagSubRegNum", // 41
    "FlagRegNum", // 42
    "Src1ChanSel", // 43
    "Src1SubRegNum", // 44
    "Src1AddrImm", // 45
    "Src1RegNum", // 46
    "Src1AddrSubRegNum", // 47
    "Src1SrcMod", // 48
    "Src1AddrMode", // 49
    "Src1HorzStride", // 50
    "Src1Width", // 51
    "Src1VertStride", // 52
    "Imm", // 53
    "Src2SrcMod", // 54
    "SrcDataType", // 55
    "Src0RepCtrl", // 56
    "Src1RepCtrl", // 57
    "Src2RepCtrl", // 58
    "Src2ChanSel", // 59
    "Src2SubRegNum", // 60
    "Src2RegNum", // 61
    "Src2RegFile", // 62
    "Src2AddrMode", // 63
    "Src2VertStride", // 64
    "SFID", // 65
    "DescRegFile", // 66
    "DescDataType", // 67
    "DescAddrSubRegNum", // 68
    "DescRegNum", // 69
    "DescHorzStride", // 70
    "DescWidth", // 71
    "DescVertStride", // 72
    "MsgDesc", // 73
    "ExMsgDesc", // 74
    "EOT", // 75
    "MathFC", // 76
    "JIP", // 77
    "UIP", // 78
    "ControlIndex", // 79
    "DataTypeIndex", // 80
    "SubRegIndex", // 81
    "Src0Index", // 82
    "Src1Index", // 83
    "DescIndex", // 84
    "ExDescRegFile", // 85
    "DstMathMacroExt", // 86
    "Src0MathMacroExt", // 87
    "Src1MathMacroExt", // 88
    "Src2MathMacroExt", // 89
    "BranchCtrl", // 90
    "SourceIndex", // 91
    "Src2DataType", // 92
    "NoSrcDepSet", // 93
    "ExFuncCtrl", // 94
    "ExMsgLength", // 95
    "ExDescAddrSubRegNum", // 96
    "ExDescRegNum", // 97
    "MsgDescCategory", // 98
    "MsgDescScratchAddrOffset", // 99
    "MsgDescScratchBlockSize", // 100
    "MsgDescScratchInvalidateAfterRead", // 101
    "MsgDescScratchChannelMode", // 102
    "MsgDescScratchMessageType", // 103
    "ExecutionDataType", // 104
    "Src0TernaryImm", // 105
    "Src2TernaryImm", // 106
    "Src2HorzStride" // 107
}; // fieldNameByField[]
GED_FIELD_TYPE pseudoFieldTypesByField[35] =
{
    0x103, // 0
    0x100, // 1
    0x103, // 2
    0x103, // 3
    0x103, // 4
    0x103, // 5
    0x100, // 6
    0x100, // 7
    0x103, // 8
    0x103, // 9
    0x103, // 10
    0x103, // 11
    0x103, // 12
    0x103, // 13
    0x103, // 14
    0x103, // 15
    0x103, // 16
    0x100, // 17
    0x103, // 18
    0x103, // 19
    0x103, // 20
    0x103, // 21
    0x103, // 22
    0x103, // 23
    0x103, // 24
    0x103, // 25
    0x103, // 26
    0x100, // 27
    0x120, // 28
    0x103, // 29
    0x100, // 30
    0x103, // 31
    0x103, // 32
    0x103, // 33
    0x103 // 34
}; // pseudoFieldTypesByField[]
const char** stringGettersByPseudoField[35] =
{
    ArchRegEnumeration, // 0
    NULL, // 1
    SwizzleEnumeration, // 2
    SwizzleEnumeration, // 3
    SwizzleEnumeration, // 4
    SwizzleEnumeration, // 5
    NULL, // 6
    NULL, // 7
    HeaderPresentEnumeration, // 8
    MessageTypeEnumerationDisassembly, // 9
    MessageTypeEnumerationDisassembly, // 10
    MessageTypeEnumerationDisassembly, // 11
    MessageTypeEnumerationDisassembly, // 12
    SlotGroupEnumeration, // 13
    SlotGroupEnumeration, // 14
    SIMDModeEnumeration, // 15
    SIMDModeEnumeration, // 16
    NULL, // 17
    BlockSizeEnumeration, // 18
    ChannelMaskEnumeration, // 19
    ChannelMaskEnumeration, // 20
    ChannelMaskEnumeration, // 21
    ChannelMaskEnumeration, // 22
    ReturnDataControlEnumerationDisassembly, // 23
    AtomicOperationTypeEnumeration, // 24
    AtomicOperationTypeEnumeration, // 25
    SubFuncIDEnumeration, // 26
    NULL, // 27
    NULL, // 28
    MessageTypeEnumerationDisassembly, // 29
    NULL, // 30
    MessageTypeEnumerationDisassembly, // 31
    MessageTypeEnumerationDisassembly, // 32
    MessageTypeEnumerationDisassembly, // 33
    MessageTypeEnumerationDisassembly // 34
}; // stringGettersByPseudoField[]
const char* fieldNameByPseudoField[35] =
{
    "ArchReg", // 0
    "ArchRegNum", // 1
    "SwizzleX", // 2
    "SwizzleY", // 3
    "SwizzleZ", // 4
    "SwizzleW", // 5
    "MessageLength", // 6
    "ResponseLength", // 7
    "HeaderPresent", // 8
    "MessageTypeDP_SAMPLER", // 9
    "MessageTypeDP_RC", // 10
    "MessageTypeDP_CC", // 11
    "MessageTypeDP_DC0", // 12
    "TypedSurfaceSlotGroup", // 13
    "TypedAtomicSlotGroup", // 14
    "UntypedSurfaceSIMDMode", // 15
    "UntypedAtomicSIMDMode", // 16
    "InvalidateAfterRead", // 17
    "BlockSize", // 18
    "RedChannel", // 19
    "GreenChannel", // 20
    "BlueChannel", // 21
    "AlphaChannel", // 22
    "ReturnDataControl", // 23
    "AtomicOperationType", // 24
    "AtomicCounterOperationType", // 25
    "SubFuncID", // 26
    "BindingTableIndex", // 27
    "FuncControl", // 28
    "MessageTypeDP_DC1", // 29
    "MessageTypeDP0Category", // 30
    "MessageTypeDP_DC0Legacy", // 31
    "MessageTypeDP_DC0ScratchBlock", // 32
    "MessageTypeDP_DC2", // 33
    "MessageTypeDP_DCRO" // 34
}; // fieldNameByPseudoField[]
