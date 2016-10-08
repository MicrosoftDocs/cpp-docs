---
title: "ARM Intrinsics"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d3d7dadd-7bd5-4508-8bff-371a66913e20
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ARM Intrinsics
The Visual C++ compiler makes the following intrinsics available on the ARM architecture. For more information about ARM, see the [ARM Architecture Reference Manuals](http://go.microsoft.com/fwlink/p/?LinkId=522049) and [ARM Assembler Tools Guide](http://go.microsoft.com/fwlink/p/?LinkId=246102) on the ARM Infocenter website.  
  
##  <a name="top"></a> NEON  
 The NEON vector instruction set extensions for ARM provide Single Instruction Multiple Data (SIMD) capabilities that resemble those in the MMX and SSE vector instruction sets that are common to x86 and x64 architecture processors.  
  
 NEON intrinsics are supported, as provided in the header file `arm_neon.h`. The Visual C++ compiler support for NEON intrinsics resembles that of the ARM compiler, which is documented in Appendix G of the [ARM Compiler toolchain, Version 4.1 Compiler Reference](http://go.microsoft.com/fwlink/p/?LinkId=251083) on the ARM Infocenter website.  
  
 The primary difference between the Visual C++ compiler and the ARM compiler is that the Visual C++ compiler adds `_ex` variants of the `vldX` and `vstX` vector load and store instructions. The `_ex` variants take an additional parameter that specifies the alignment of the pointer argument but are otherwise identical to their non-`_ex` counterparts.  
  
##  <a name="A"></a> ARM-specific Intrinsics Listing  
  
|Function Name|Instruction|Function Prototype|  
|-------------------|-----------------|------------------------|  
|_arm_smlal|SMLAL|__int64 _arm_smlal(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_umlal|UMLAL|unsigned __int64 _arm_umlal(unsigned \__int64 _RdHiLo, unsigned int _Rn, unsigned int _Rm)|  
|_arm_clz|CLZ|unsigned int _arm_clz(unsigned int _Rm)|  
|_arm_qadd|QADD|int _arm_qadd(int _Rm, int _Rn)|  
|_arm_qdadd|QDADD|int _arm_qdadd(int _Rm, int _Rn)|  
|_arm_qdsub|QDSUB|int _arm_qdsub(int _Rm, int _Rn)|  
|_arm_qsub|QSUB|int _arm_qsub(int _Rm, int _Rn)|  
|_arm_smlabb|SMLABB|int _arm_smlabb(int _Rn, int _Rm, int _Ra)|  
|_arm_smlabt|SMLABT|int _arm_smlabt(int _Rn, int _Rm, int _Ra)|  
|_arm_smlatb|SMLATB|int _arm_smlatb(int _Rn, int _Rm, int _Ra)|  
|_arm_smlatt|SMLATT|int _arm_smlatt(int _Rn, int _Rm, int _Ra)|  
|_arm_smlalbb|SMLALBB|__int64 _arm_smlalbb(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlalbt|SMLALBT|__int64 _arm_smlalbt(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlaltb|SMLALTB|__int64 _arm_smlaltb(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlaltt|SMLALTT|__int64 _arm_smlaltt(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlawb|SMLAWB|int _arm_smlawb(int _Rn, int _Rm, int _Ra)|  
|_arm_smlawt|SMLAWT|int _arm_smlawt(int _Rn, int _Rm, int _Ra)|  
|_arm_smulbb|SMULBB|int _arm_smulbb(int _Rn, int _Rm)|  
|_arm_smulbt|SMULBT|int _arm_smulbt(int _Rn, int _Rm)|  
|_arm_smultb|SMULTB|int _arm_smultb(int _Rn, int _Rm)|  
|_arm_smultt|SMULTT|int _arm_smultt(int _Rn, int _Rm)|  
|_arm_smulwb|SMULWB|int _arm_smulwb(int _Rn, int _Rm)|  
|_arm_smulwt|SMULWT|int _arm_smulwt(int _Rn, int _Rm)|  
|_arm_sadd16|SADD16|int _arm_sadd16(int _Rn, int _Rm)|  
|_arm_sadd8|SADD8|int _arm_sadd8(int _Rn, int _Rm)|  
|_arm_sasx|SASX|int _arm_sasx(int _Rn, int _Rm)|  
|_arm_ssax|SSAX|int _arm_ssax(int _Rn, int _Rm)|  
|_arm_ssub16|SSUB16|int _arm_ssub16(int _Rn, int _Rm)|  
|_arm_ssub8|SSUB8|int _arm_ssub8(int _Rn, int _Rm)|  
|_arm_shadd16|SHADD16|int _arm_shadd16(int _Rn, int _Rm)|  
|_arm_shadd8|SHADD8|int _arm_shadd8(int _Rn, int _Rm)|  
|_arm_shasx|SHASX|int _arm_shasx(int _Rn, int _Rm)|  
|_arm_shsax|SHSAX|int _arm_shsax(int _Rn, int _Rm)|  
|_arm_shsub16|SHSUB16|int _arm_shsub16(int _Rn, int _Rm)|  
|_arm_shsub8|SHSUB8|int _arm_shsub8(int _Rn, int _Rm)|  
|_arm_qadd16|QADD16|int _arm_qadd16(int _Rn, int _Rm)|  
|_arm_qadd8|QADD8|int _arm_qadd8(int _Rn, int _Rm)|  
|_arm_qasx|QASX|int _arm_qasx(int _Rn, int _Rm)|  
|_arm_qsax|QSAX|int _arm_qsax(int _Rn, int _Rm)|  
|_arm_qsub16|QSUB16|int _arm_qsub16(int _Rn, int _Rm)|  
|_arm_qsub8|QSUB8|int _arm_qsub8(int _Rn, int _Rm)|  
|_arm_uadd16|UADD16|unsigned int _arm_uadd16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uadd8|UADD8|unsigned int _arm_uadd8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uasx|UASX|unsigned int _arm_uasx(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usax|USAX|unsigned int _arm_usax(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usub16|USUB16|unsigned int _arm_usub16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usub8|USUB8|unsigned int _arm_usub8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhadd16|UHADD16|unsigned int _arm_uhadd16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhadd8|UHADD8|unsigned int _arm_uhadd8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhasx|UHASX|unsigned int _arm_uhasx(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhsax|UHSAX|unsigned int _arm_uhsax(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhsub16|UHSUB16|unsigned int _arm_uhsub16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhsub8|UHSUB8|unsigned int _arm_uhsub8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqadd16|UQADD16|unsigned int _arm_uqadd16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqadd8|UQADD8|unsigned int _arm_uqadd8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqasx|UQASX|unsigned int _arm_uqasx(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqsax|UQSAX|unsigned int _arm_uqsax(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqsub16|UQSUB16|unsigned int _arm_uqsub16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqsub8|UQSUB8|unsigned int _arm_uqsub8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_sxtab|SXTAB|int _arm_sxtab(int _Rn, int _Rm, unsigned int _Rotation)|  
|_arm_sxtab16|SXTAB16|int _arm_sxtab16(int _Rn, int _Rm, unsigned int _Rotation)|  
|_arm_sxtah|SXTAH|int _arm_sxtah(int _Rn, int _Rm, unsigned int _Rotation)|  
|_arm_uxtab|UXTAB|unsigned int _arm_uxtab(unsigned int _Rn, unsigned int _Rm, unsigned int _Rotation)|  
|_arm_uxtab16|UXTAB16|unsigned int _arm_uxta16b(unsigned int _Rn, unsigned int _Rm, unsigned int _Rotation)|  
|_arm_uxtah|UXTAH|unsigned int _arm_uxtah(unsigned int _Rn, unsigned int _Rm, unsigned int _Rotation)|  
|_arm_sxtb|SXTB|int _arm_sxtb(int _Rn, unsigned int _Rotation)|  
|_arm_sxtb16|SXTB16|int _arm_sxtb16(int _Rn, unsigned int _Rotation)|  
|_arm_sxth|SXTH|int _arm_sxth(int _Rn, unsigned int _Rotation)|  
|_arm_uxtb|UXTB|unsigned int _arm_uxtb(unsigned int _Rn, unsigned int _Rotation)|  
|_arm_uxtb16|UXTB16|unsigned int _arm_uxtb16(unsigned int _Rn, unsigned int _Rotation)|  
|_arm_uxth|UXTH|unsigned int _arm_uxth(unsigned int _Rn, unsigned int _Rotation)|  
|_arm_pkhbt|PKHBT|int _arm_pkhbt(int _Rn, int _Rm, unsigned int _Lsl_imm)|  
|_arm_pkhtb|PKHTB|int _arm_pkhtb(int _Rn, int _Rm, unsigned int _Asr_imm)|  
|_arm_usad8|USAD8|unsigned int _arm_usad8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usada8|USADA8|unsigned int _arm_usada8(unsigned int _Rn, unsigned int _Rm, unsigned int _Ra)|  
|_arm_ssat|SSAT|int _arm_ssat(unsigned int _Sat_imm, _int _Rn, _ARMINTR_SHIFT_T _Shift_type, unsigned int _Shift_imm)|  
|_arm_usat|USAT|int _arm_usat(unsigned int _Sat_imm, _int _Rn, _ARMINTR_SHIFT_T _Shift_type, unsigned int _Shift_imm)|  
|_arm_ssat16|SSAT16|int _arm_ssat16(unsigned int _Sat_imm, _int _Rn)|  
|_arm_usat16|USAT16|int _arm_usat16(unsigned int _Sat_imm, _int _Rn)|  
|_arm_rev|REV|unsigned int _arm_rev(unsigned int _Rm)|  
|_arm_rev16|REV16|unsigned int _arm_rev16(unsigned int _Rm)|  
|_arm_revsh|REVSH|unsigned int _arm_revsh(unsigned int _Rm)|  
|_arm_smlad|SMLAD|int _arm_smlad(int _Rn, int _Rm, int _Ra)|  
|_arm_smladx|SMLADX|int _arm_smladx(int _Rn, int _Rm, int _Ra)|  
|_arm_smlsd|SMLSD|int _arm_smlsd(int _Rn, int _Rm, int _Ra)|  
|_arm_smlsdx|SMLSDX|int _arm_smlsdx(int _Rn, int _Rm, int _Ra)|  
|_arm_smmla|SMMLA|int _arm_smmla(int _Rn, int _Rm, int _Ra)|  
|_arm_smmlar|SMMLAR|int _arm_smmlar(int _Rn, int _Rm, int _Ra)|  
|_arm_smmls|SMMLS|int _arm_smmls(int _Rn, int _Rm, int _Ra)|  
|_arm_smmlsr|SMMLSR|int _arm_smmlsr(int _Rn, int _Rm, int _Ra)|  
|_arm_smmul|SMMUL|int _arm_smmul(int _Rn, int _Rm)|  
|_arm_smmulr|SMMULR|int _arm_smmulr(int _Rn, int _Rm)|  
|_arm_smlald|SMLALD|__int64 _arm_smlald(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlaldx|SMLALDX|__int64 _arm_smlaldx(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlsld|SMLSLD|__int64 _arm_smlsld(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smlsldx|SMLSLDX|__int64 _arm_smlsldx(\__int64 _RdHiLo, int _Rn, int _Rm)|  
|_arm_smuad|SMUAD|int _arm_smuad(int _Rn, int _Rm)|  
|_arm_smuadx|SMUADX|int _arm_muadxs(int _Rn, int _Rm)|  
|_arm_smusd|SMUSD|int _arm_smusd(int _Rn, int _Rm)|  
|_arm_smusdx|SMUSDX|int _arm_smusdx(int _Rn, int _Rm)|  
|_arm_smull|SMULL|__int64 _arm_smull(int _Rn, int _Rm)|  
|_arm_umull|UMULL|unsigned __int64 _arm_umull(unsigned int _Rn, unsigned int _Rm)|  
|_arm_umaal|UMAAL|unsigned __int64 _arm_umaal(unsigned int _RdLo, unsigned int _RdHi, unsigned int _Rn, unsigned int _Rm)|  
|_arm_bfc|BFC|unsigned int _arm_bfc(unsigned int _Rd, unsigned int _Lsb, unsigned int _Width)|  
|_arm_bfi|BFI|unsigned int _arm_bfi(unsigned int _Rd, unsigned int _Rn, unsigned int _Lsb, unsigned int _Width)|  
|_arm_rbit|RBIT|unsigned int _arm_rbit(unsigned int _Rm)|  
|_arm_sbfx|SBFX|int _arm_sbfx(int _Rn, unsigned int _Lsb, unsigned int _Width)|  
|_arm_ubfx|UBFX|unsigned int _arm_ubfx(unsigned int _Rn, unsigned int _Lsb, unsigned int _Width)|  
|_arm_sdiv|SDIV|int _arm_sdiv(int _Rn, int _Rm)|  
|_arm_udiv|UDIV|unsigned int _arm_udiv(unsigned int _Rn, unsigned int _Rm)|  
|__cps|CPS|void __cps(unsigned int _Ops, unsigned int _Flags, unsigned int _Mode)|  
|__dmb|DMB|void __dmb(unsigned int `_Type`)<br /><br /> Inserts a memory barrier operation into the instruction stream. The parameter `_Type` specifies the kind of restriction that the barrier enforces.<br /><br /> For more information about the kinds of restrictions that can be enforced, see [Memory Barrier Restrictions](#BarrierRestrictions).|  
|__dsb|DSB|void __dsb(unsigned int _Type)<br /><br /> Inserts a memory barrier operation into the instruction stream. The parameter `_Type` specifies the kind of restriction that the barrier enforces.<br /><br /> For more information about the kinds of restrictions that can be enforced, see [Memory Barrier Restrictions](#BarrierRestrictions).|  
|__isb|ISB|void __isb(unsigned int _Type)<br /><br /> Inserts a memory barrier operation into the instruction stream. The parameter `_Type` specifies the kind of restriction that the barrier enforces.<br /><br /> For more information about the kinds of restrictions that can be enforced, see [Memory Barrier Restrictions](#BarrierRestrictions).|  
|__emit||void __emit(unsigned \__int32 opcode)<br /><br /> Inserts a specified instruction into the stream of instructions that is output by the compiler.<br /><br /> The value of `opcode` must be a constant expression that is known at compile time. The size of an instruction word is 16 bits and the most significant 16 bits of `opcode` are ignored.<br /><br /> The compiler makes no attempt to interpret the contents of `opcode` and does not guarantee a CPU or memory state before the inserted instruction is executed.<br /><br /> The compiler assumes that the CPU and memory states are unchanged after the inserted instruction is executed. Therefore, instructions that do change state can have a detrimental impact on normal code that is generated by the compiler.<br /><br /> For this reason, use `emit` only to insert instructions that affect a CPU state that the compiler does not normally process—for example, coprocessor state—or to implement functions that are declared by using `declspec(naked)`.|  
|__hvc|HVC|unsigned int __hvc(unsigned int, ...)|  
|__iso_volatile_load16||__int16 \__iso_volatile_load16(const volatile \__int16 *)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_load32||__int32 \__iso_volatile_load32(const volatile \__int32 *)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_load64||__int64 \__iso_volatile_load64(const volatile \__int64 *)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_load8||__int8 \__iso_volatile_load8(const volatile \__int8 *)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_store16||void __iso_volatile_store16(volatile \__int16 *, \__int16)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_store32||void __iso_volatile_store32(volatile \__int32 *, \__int32)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_store64||void __iso_volatile_store64(volatile \__int64 *, \__int64)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__iso_volatile_store8||void __iso_volatile_store8(volatile \__int8 *, \__int8)<br /><br /> For more information, see [__iso_volatile_load/store instrinsics](#IsoVolatileLoadStore).|  
|__ldrexd|LDREXD|__int64 \__ldrexd(const volatile \__int64 *)|  
|__prefetch|PLD|void __cdecl \__prefetch(const void *)<br /><br /> Provides a `PLD` memory hint to the system that memory at or near the specified address may be accessed soon. Some systems may choose to optimize for that memory access pattern to increase runtime performance. However, from the C++ language point of view, the function has no observable effect, and may do nothing at all.|  
|__rdpmccntr64||unsigned __int64 \__rdpmccntr64(void)|  
|__sev|SEV|void __sev(void)|  
|__static_assert||void __static_assert(int, const char *)|  
|__swi|SVC|unsigned int __swi(unsigned int, ...)|  
|__trap|BKPT|int __trap(int, ...)|  
|__wfe|WFE|void __wfe(void)|  
|__wfi|WFI|void __wfi(void)|  
|_AddSatInt|QADD|int _AddSatInt(int, int)|  
|_CopyDoubleFromInt64||double _CopyDoubleFromInt64(\__int64)|  
|_CopyFloatFromInt32||float _CopyFloatFromInt32(\__int32)|  
|_CopyInt32FromFloat||__int32 _CopyInt32FromFloat(float)|  
|_CopyInt64FromDouble||__int64 _CopyInt64FromDouble(double)|  
|_CountLeadingOnes||unsigned int _CountLeadingOnes(unsigned long)|  
|_CountLeadingOnes64||unsigned int _CountLeadingOnes64(unsigned \__int64)|  
|_CountLeadingSigns||unsigned int _CountLeadingSigns(long)|  
|_CountLeadingSigns64||unsigned int _CountLeadingSigns64(\__int64)|  
|_CountLeadingZeros||unsigned int _CountLeadingZeros(unsigned long)|  
|_CountLeadingZeros64||unsigned int _CountLeadingZeros64(unsigned \__int64)|  
|_CountOneBits||unsigned int _CountOneBits(unsigned long)|  
|_CountOneBits64||unsigned int _CountOneBits64(unsigned \__int64)|  
|_DAddSatInt|QDADD|int _DAddSatInt(int, int)|  
|_DSubSatInt|QDSUB|int _DSubSatInt(int, int)|  
|_isunordered||int _isunordered(double, double)|  
|_isunorderedf||int _isunorderedf(float, float)|  
|_MoveFromCoprocessor|MRC|unsigned int _MoveFromCoprocessor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Reads data from an ARM coprocessor by using the coprocessor data transfer instructions. For more information see [_MoveFromCoprocessor, _MoveFromCoprocessor2](#MoveFromCo).|  
|_MoveFromCoprocessor2|MRC2|unsigned int _MoveFromCoprocessor2(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Reads data from an ARM coprocessor by using the coprocessor data transfer instructions. For more information see [_MoveFromCoprocessor, _MoveFromCoprocessor2](#MoveFromCo).|  
|_MoveFromCoprocessor64|MRRC|unsigned __int64 _MoveFromCoprocessor64(unsigned int, unsigned int, unsigned int)<br /><br /> Reads data from an ARM coprocessor by using the coprocessor data transfer instructions. For more information see [_MoveFromCoprocessor64](#MoveFromCo64).|  
|_MoveToCoprocessor|MCR|void _MoveToCoprocessor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Reads data from an ARM coprocessor by using the coprocessor data transfer instructions. For more information see [_MoveToCoprocessor, _MoveToCoprocessor2](#MoveToCo).|  
|_MoveToCoprocessor2|MCR2|void _MoveToCoprocessor2(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Reads data from an ARM coprocessor by using the coprocessor data transfer instructions. For more information see [_MoveToCoprocessor, _MoveToCoprocessor2](#MoveToCo).|  
|_MoveToCoprocessor64|MCRR|void _MoveToCoprocessor64(unsigned \__int64, unsigned int, unsigned int, unsigned int)<br /><br /> Reads data from an ARM coprocessor by using the coprocessor data transfer instructions. For more information see [_MoveToCoprocessor64](#MoveToCo64).|  
|_MulHigh||long _MulHigh(long, long)|  
|_MulUnsignedHigh||unsigned long _MulUnsignedHigh(unsigned long, unsigned long)|  
|_ReadBankedReg|MRS|int _ReadBankedReg(int _Reg)|  
|_ReadStatusReg|MRS|int _ReadStatusReg(int)|  
|_SubSatInt|QSUB|int _SubSatInt(int, int)|  
|_WriteBankedReg|MSR|void _WriteBankedReg(int _Value, int _Reg)|  
|_WriteStatusReg|MSR|void _WriteStatusReg(int, int, int)|  
  
 [[NEON](#top)]  
  
###  <a name="BarrierRestrictions"></a> Memory Barrier Restrictions  
 The intrinsic functions `__dmb` (data memory barrier), `__dsb` (data synchronization barrier), and `__isb` (instruction synchronization barrier) use the following predefined values to specify the memory barrier restriction in terms of the sharing domain and kind of access that are affected by the operation.  
  
|Restriction Value|Description|  
|-----------------------|-----------------|  
|_ARM_BARRIER_SY|Full system, reads and writes.|  
|_ARM_BARRIER_ST|Full system, writes only.|  
|_ARM_BARRIER_ISH|Inner sharable, reads and writes.|  
|_ARM_BARRIER_ISHST|Inner sharable, writes only.|  
|_ARM_BARRIER_NSH|Non-sharable, reads and writes.|  
|_ARM_BARRIER_NSHST|Non-sharable, writes only.|  
|_ARM_BARRIER_OSH|Outer sharable, reads and writes.|  
|_ARM_BARRIER_OSHST|Outer sharable, writes only.|  
  
 For the `__isb` intrinsic, the only restriction that is currently valid is _ARM_BARRIER_SY; all other values are reserved by the architecture.  
  
###  <a name="IsoVolatileLoadStore"></a> __iso_volatile_load/store instrinsics  
 These intrinsic functions explicitly perform loads and stores that are not subject to compiler optimizations.  
  
```  
__int16 __iso_volatile_load16(const volatile __int16 * Location)  
__int32 __iso_volatile_load32(const volatile __int32 * Location)  
__int64 __iso_volatile_load64(const volatile __int64 * Location)  
__int8 __iso_volatile_load8(const volatile __int8 * Location)  
  
void __iso_volatile_store16(volatile __int16 * Location, __int16 Value)  
void __iso_volatile_store32(volatile __int32 * Location, __int32 Value)  
void __iso_volatile_store64(volatile __int64 * Location, __int64 Value)  
void __iso_volatile_store8(volatile __int8 * Location, __int8 Value)  
  
```  
  
 **Parameters**  
  
 `Location`  
 The address of a memory location to read from or write to.  
  
 `Value` (store intrinsics only)  
 The value to write to the specified memory location.  
  
 **Return Value (load intrinsics only)**  
  
 The value of the memory location that is specified by `Location`.  
  
 **Remarks**  
  
 You can use the `__iso_volatile_load8/16/32/64` and `__iso_volatile_store8/16/32/64` intrinsics to explicitly perform memory accesses that are not subject to compiler optimizations. The compiler cannot remove, synthetize, or change the relative order of these operations, but it does not generate implicit hardware memory barriers. Therefore, the hardware may still reorder the observable memory accesses across multiple threads. More precisely, these intrinsics are equivalent to the following expressions as compiled under **/volatile:iso**.  
  
```  
  
      int a = __iso_volatile_load32(p);    // equivalent to: int a = *(const volatile __int32*)p;   
__iso_volatile_store32(p, a);        // equivalent to: *(volatile __int32*)p = a;  
```  
  
 Notice that the intrinsics take volatile pointers to accommodate volatile variables. However, there is no requirement or recommendation to use volatile pointers as arguments; the semantics of these operations are exactly the same if a regular, non-volatile type is used.  
  
 For more information about the **/volatile:iso** command-line argument, see [/volatile (volatile Keyword Interpretation)](../VS_visualcpp/-volatile--volatile-Keyword-Interpretation-.md).  
  
###  <a name="MoveFromCo"></a> _MoveFromCoprocessor, _MoveFromCoprocessor2  
 These intrinsic functions read data from ARM coprocessors by using the coprocessor data transfer instructions.  
  
```  
int _MoveFromCoprocessor(  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
int _MoveFromCoprocessor2(  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
```  
  
 **Parameters**  
  
 `coproc`  
 Coprocessor number in the range 0 to 15.  
  
 `opcode1`  
 Coprocessor-specific opcode in the range 0 to 7  
  
 `crn`  
 Coprocessor register number, in the range 0 to 15, that specifies the first operand to the instruction.  
  
 `crm`  
 Coprocessor register number, in the range 0 to 15, that specifies an additional source or destination operand.  
  
 `opcode2`  
 Additional coprocessor-specific opcode in the range 0 to 7.  
  
 **Return Value**  
  
 The value that is read from the coprocessor.  
  
 **Remarks**  
  
 The values of all five parameters of this intrinsic must be constant expressions that are known at compile time.  
  
 `_MoveFromCoprocessor` uses the MRC instruction; `_MoveFromCoprocessor2` uses MRC2. The parameters correspond to bitfields that are encoded directly into the instruction word. The interpretation of the parameters is coprocessor-dependent. For more information, see the manual for the coprocessor in question.  
  
###  <a name="MoveFromCo64"></a> _MoveFromCoprocessor64  
 Reads data from ARM coprocessors by using the coprocessor data transfer instructions.  
  
```  
unsigned __int64 _MoveFromCoprocessor64(  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crm,  
);  
  
```  
  
 **Parameters**  
  
 `coproc`  
 Coprocessor number in the range 0 to 15.  
  
 `opcode1`  
 Coprocessor-specific opcode in the range 0 to 15.  
  
 `crm`  
 Coprocessor register number, in the range 0 to 15, that specifies an additional source or destination operand.  
  
 **Returns Value**  
  
 The value that is read from the coprocessor.  
  
 **Remarks**  
  
 The values of all three parameters of this intrinsic must be constant expressions that are known at compile time.  
  
 `_MoveFromCoprocessor64` uses the MRRC instruction. The parameters correspond to bitfields that are encoded directly into the instruction word. The interpretation of the parameters is coprocessor-dependent. For more information, see the manual for the coprocessor in question.  
  
###  <a name="MoveToCo"></a> _MoveToCoprocessor, _MoveToCoprocessor2  
 These intrinsic functions write data to ARM coprocessors by using the coprocessor data transfer instructions.  
  
```  
void _MoveToCoprocessor(  
      unsigned int value,  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
void _MoveToCoprocessor2(  
      unsigned int value,  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
```  
  
 **Parameters**  
  
 `value`  
 The value to be written to the coprocessor.  
  
 `coproc`  
 Coprocessor number in the range 0 to 15.  
  
 `opcode1`  
 Coprocessor-specific opcode in the range 0 to 7.  
  
 `crn`  
 Coprocessor register number, in the range 0 to 15, that specifies the first operand to the instruction.  
  
 `crm`  
 Coprocessor register number, in the range 0 to 15, that specifies an additional source or destination operand.  
  
 `opcode2`  
 Additional coprocessor-specific opcode in the range 0 to 7.  
  
 **Return Value**  
  
 None.  
  
 **Remarks**  
  
 The values of the `coproc`, `opcode1`, `crn`, `crm`, and `opcode2` parameters of this intrinsic must be constant expressions that are known at compile time.  
  
 `_MoveToCoprocessor` uses the MCR instruction; `_MoveToCoprocessor2` uses MCR2. The parameters correspond to bitfields that are encoded directly into the instruction word. The interpretation of the parameters is coprocessor-dependent. For more information, see the manual for the coprocessor in question.  
  
###  <a name="MoveToCo64"></a> _MoveToCoprocessor64  
 These intrinsic functions write data to ARM coprocessors by using the coprocessor data transfer instructions.  
  
```  
void _MoveFromCoprocessor64(  
      unsigned __int64 value,  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crm,  
);  
  
```  
  
 **Parameters**  
  
 `coproc`  
 Coprocessor number in the range 0 to 15.  
  
 `opcode1`  
 Coprocessor-specific opcode in the range 0 to 15.  
  
 `crm`  
 Coprocessor register number, in the range 0 to 15, that specifies an additional source or destination operand.  
  
 **Return Value**  
  
 None.  
  
 **Remarks**  
  
 The values of the `coproc`, `opcode1`, and `crm` parameters of this intrinsic must be constant expressions that are known at compile time.  
  
 `_MoveFromCoprocessor64` uses the MCRR instruction. The parameters correspond to bitfields that are encoded directly into the instruction word. The interpretation of the parameters is coprocessor-dependent. For more information, see the manual for the coprocessor in question.  
  
##  <a name="I"></a> ARM Support for Intrinsics from Other Architectures  
 The following table lists intrinsics from other architectures that are supported on ARM platforms. Where the behavior of an intrinsic on ARM differs from its behavior on other hardware architectures, additional details are noted.  
  
|Function Name|Function Prototype|  
|-------------------|------------------------|  
|__assume|void __assume(int)|  
|__code_seg|void __code_seg(const char *)|  
|__debugbreak|void __cdecl \__debugbreak(void)|  
|__fastfail|__declspec(noreturn) void \__fastfail(unsigned int)|  
|__nop|void __nop(void) **Note:**  On ARM platforms, this function generates a NOP instruction if one is implemented in the target architecture; otherwise, an alternative instruction that does not change the state of the program or CPU is generated—for example, `MOV r8, r8`. This is functionally equivalent to the \__nop intrinsic for other hardware architectures. Because an instruction that has no effect on the state of the program or CPU might be ignored by the target architecture as an optimization, the instruction does not necessarily consume CPU cycles. Therefore, do not use the \__nop intrinsic to manipulate the execution time of a code sequence unless you are certain about how the CPU will behave. Instead, you can use the \__nop intrinsic to align the next instruction to a specific 32-bit boundary address.|  
|__yield|void __yield(void) **Note:**  On ARM platforms, this function generates the YIELD instruction, which indicates that the thread is performing a task that can be temporarily suspended from execution—for example, a spinlock—without adversely affecting the program. This enables the CPU to execute other tasks during execution cycles that would otherwise be wasted.|  
|_AddressOfReturnAddress|void * _AddressOfReturnAddress(void)|  
|_BitScanForward|unsigned char _BitScanForward(unsigned long * _Index, unsigned long _Mask)|  
|_BitScanReverse|unsigned char _BitScanReverse(unsigned long * _Index, unsigned long _Mask)|  
|_bittest|unsigned char _bittest(long const *, long)|  
|_bittestandcomplement|unsigned char _bittestandcomplement(long *, long)|  
|_bittestandreset|unsigned char _bittestandreset(long *, long)|  
|_bittestandset|unsigned char _bittestandset(long *, long)|  
|_byteswap_uint64|unsigned __int64 \__cdecl _byteswap_uint64(unsigned \__int64)|  
|_byteswap_ulong|unsigned long __cdecl _byteswap_ulong(unsigned long)|  
|_byteswap_ushort|unsigned short __cdecl _byteswap_ushort(unsigned short)|  
|_disable|void __cdecl _disable(void) **Note:**  On ARM platforms, this function generates the CPSID instruction; it is only available as an intrinsic.|  
|_enable|void __cdecl _enable(void) **Note:**  On ARM platforms, this function generates the CPSIE instruction; it is only available as an intrinsic.|  
|_lrotl|unsigned long __cdecl _lrotl(unsigned long, int)|  
|_lrotr|unsigned long __cdecl _lrotr(unsigned long, int)|  
|_ReadBarrier|void _ReadBarrier(void)|  
|_ReadWriteBarrier|void _ReadWriteBarrier(void)|  
|_ReturnAddress|void * _ReturnAddress(void)|  
|_rotl|unsigned int __cdecl _rotl(unsigned int _Value, int _Shift)|  
|_rotl16|unsigned short _rotl16(unsigned short _Value, unsigned char _Shift)|  
|_rotl64|unsigned __int64 \__cdecl _rotl64(unsigned \__int64 _Value, int _Shift)|  
|_rotl8|unsigned char _rotl8(unsigned char _Value, unsigned char _Shift)|  
|_rotr|unsigned int __cdecl _rotr(unsigned int _Value, int _Shift)|  
|_rotr16|unsigned short _rotr16(unsigned short _Value, unsigned char _Shift)|  
|_rotr64|unsigned __int64 \__cdecl _rotr64(unsigned \__int64 _Value, int _Shift)|  
|_rotr8|unsigned char _rotr8(unsigned char _Value, unsigned char _Shift)|  
|_setjmpex|int __cdecl _setjmpex(jmp_buf)|  
|_WriteBarrier|void _WriteBarrier(void)|  
  
 [[NEON](#top)]  
  
## Interlocked Intrinsics  
 Interlocked intrinsics are a set of intrinsics that are used to perform atomic read-modify-write operations. Some of them are common to all platforms. They are listed separately here because there are a large number of them, but because their definitions are mostly redundant, it's easier to think about them in general terms. Their names can be used to derive the exact behaviors.  
  
 The following table summarizes the ARM support of the non-bittest interlocked intrinsics. Each cell in the table corresponds to a name that is derived by appending the operation name in the left-most cell of the row and the type name in the top-most cell of the column to `_Interlocked`. For example, the cell at the intersection of the `Xor` row and the **8** column corresponds to `_InterlockedXor8` and is fully supported. Most of the supported functions offer these optional suffixes: `_acq`, `_rel`, and `_nf`. The `_acq` suffix indicates an "acquire" semantic and the `_rel` suffix indicates a "release" semantic. The `_nf` or “no fence” suffix is unique to ARM and is discussed in the next section.  
  
||8|16|32|64|P|  
|-|-------|--------|--------|--------|-------|  
|Add|None|None|Full|Full|None|  
|And|Full|Full|Full|Full|None|  
|CompareExchange|Full|Full|Full|Full|Full|  
|Decrement|None|Full|Full|Full|None|  
|Exchange|Partial|Partial|Partial|Partial|Partial|  
|ExchangeAdd|Full|Full|Full|Full|None|  
|Increment|None|Full|Full|Full|None|  
|Or|Full|Full|Full|Full|None|  
|Xor|Full|Full|Full|Full|None|  
  
 Key:  
  
-   **Full**: supports plain, `_acq`, `_rel`, and `_nf` forms.  
  
-   **Partial**: supports plain, `_acq`, and `_nf` forms.  
  
-   **None**: Not supported  
  
###  <a name="nf_suffix"></a> _nf (no fence) Suffix  
 The `_nf` or "no fence" suffix indicates that the operation does not behave as any kind of memory barrier. This is in contrast to the other three forms (plain, `_acq`, and `_rel`), which all behave as some kind of barrier. One possible use of the `_nf` forms is to maintain a statistic counter that is updated by multiple threads at the same time but whose value is not otherwise used while multiple threads are executing.  
  
### List of Interlocked Intrinsics  
  
|Function Name|Function Prototype|  
|-------------------|------------------------|  
|_InterlockedAdd|long _InterlockedAdd(long _volatile *, long)|  
|_InterlockedAdd64|__int64 _InterlockedAdd64(\__int64 volatile *, \__int64)|  
|_InterlockedAdd64_acq|__int64 _InterlockedAdd64_acq(\__int64 volatile *, \__int64)|  
|_InterlockedAdd64_nf|__int64 _InterlockedAdd64_nf(\__int64 volatile *, \__int64)|  
|_InterlockedAdd64_rel|__int64 _InterlockedAdd64_rel(\__int64 volatile *, \__int64)|  
|_InterlockedAdd_acq|long _InterlockedAdd_acq(long volatile *, long)|  
|_InterlockedAdd_nf|long _InterlockedAdd_nf(long volatile *, long)|  
|_InterlockedAdd_rel|long _InterlockedAdd_rel(long volatile *, long)|  
|_InterlockedAnd|long _InterlockedAnd(long volatile *, long)|  
|_InterlockedAnd16|short _InterlockedAnd16(short volatile *, short)|  
|_InterlockedAnd16_acq|short _InterlockedAnd16_acq(short volatile *, short)|  
|_InterlockedAnd16_nf|short _InterlockedAnd16_nf(short volatile *, short)|  
|_InterlockedAnd16_rel|short _InterlockedAnd16_rel(short volatile *, short)|  
|_InterlockedAnd64|__int64 _InterlockedAnd64(\__int64 volatile *, \__int64)|  
|_InterlockedAnd64_acq|__int64 _InterlockedAnd64_acq(\__int64 volatile *, \__int64)|  
|_InterlockedAnd64_nf|__int64 _InterlockedAnd64_nf(\__int64 volatile *, \__int64)|  
|_InterlockedAnd64_rel|__int64 _InterlockedAnd64_rel(\__int64 volatile *, \__int64)|  
|_InterlockedAnd8|char _InterlockedAnd8(char volatile *, char)|  
|_InterlockedAnd8_acq|char _InterlockedAnd8_acq(char volatile *, char)|  
|_InterlockedAnd8_nf|char _InterlockedAnd8_nf(char volatile *, char)|  
|_InterlockedAnd8_rel|char _InterlockedAnd8_rel(char volatile *, char)|  
|_InterlockedAnd_acq|long _InterlockedAnd_acq(long volatile *, long)|  
|_InterlockedAnd_nf|long _InterlockedAnd_nf(long volatile *, long)|  
|_InterlockedAnd_rel|long _InterlockedAnd_rel(long volatile *, long)|  
|_InterlockedCompareExchange|long __cdecl _InterlockedCompareExchange(long volatile *, long, long)|  
|_InterlockedCompareExchange16|short _InterlockedCompareExchange16(short volatile *, short, short)|  
|_InterlockedCompareExchange16_acq|short _InterlockedCompareExchange16_acq(short volatile *, short, short)|  
|_InterlockedCompareExchange16_nf|short _InterlockedCompareExchange16_nf(short volatile *, short, short)|  
|_InterlockedCompareExchange16_rel|short _InterlockedCompareExchange16_rel(short volatile *, short, short)|  
|_InterlockedCompareExchange64|__int64 _InterlockedCompareExchange64(\__int64 volatile *, \__int64, \__int64)|  
|_InterlockedCompareExchange64_acq|__int64 _InterlockedCompareExchange64_acq(\__int64 volatile *, \__int64, \__int64)|  
|_InterlockedCompareExchange64_nf|__int64 _InterlockedCompareExchange64_nf(\__int64 volatile *, \__int64, \__int64)|  
|_InterlockedCompareExchange64_rel|__int64 _InterlockedCompareExchange64_rel(\__int64 volatile *, \__int64, \__int64)|  
|_InterlockedCompareExchange8|char _InterlockedCompareExchange8(char volatile *, char, char)|  
|_InterlockedCompareExchange8_acq|char _InterlockedCompareExchange8_acq(char volatile *, char, char)|  
|_InterlockedCompareExchange8_nf|char _InterlockedCompareExchange8_nf(char volatile *, char, char)|  
|_InterlockedCompareExchange8_rel|char _InterlockedCompareExchange8_rel(char volatile *, char, char)|  
|_InterlockedCompareExchangePointer|void * _InterlockedCompareExchangePointer(void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchangePointer_acq|void * _InterlockedCompareExchangePointer_acq(void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchangePointer_nf|void * _InterlockedCompareExchangePointer_nf(void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchangePointer_rel|void * _InterlockedCompareExchangePointer_rel(void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchange_acq|long _InterlockedCompareExchange_acq(long volatile *, long, long)|  
|_InterlockedCompareExchange_nf|long _InterlockedCompareExchange_nf(long volatile *, long, long)|  
|_InterlockedCompareExchange_rel|long _InterlockedCompareExchange_rel(long volatile *, long, long)|  
|_InterlockedDecrement|long __cdecl _InterlockedDecrement(long volatile *)|  
|_InterlockedDecrement16|short _InterlockedDecrement16(short volatile *)|  
|_InterlockedDecrement16_acq|short _InterlockedDecrement16_acq(short volatile *)|  
|_InterlockedDecrement16_nf|short _InterlockedDecrement16_nf(short volatile *)|  
|_InterlockedDecrement16_rel|short _InterlockedDecrement16_rel(short volatile *)|  
|_InterlockedDecrement64|__int64 _InterlockedDecrement64(\__int64 volatile *)|  
|_InterlockedDecrement64_acq|__int64 _InterlockedDecrement64_acq(\__int64 volatile *)|  
|_InterlockedDecrement64_nf|__int64 _InterlockedDecrement64_nf(\__int64 volatile *)|  
|_InterlockedDecrement64_rel|__int64 _InterlockedDecrement64_rel(\__int64 volatile *)|  
|_InterlockedDecrement_acq|long _InterlockedDecrement_acq(long volatile *)|  
|_InterlockedDecrement_nf|long _InterlockedDecrement_nf(long volatile *)|  
|_InterlockedDecrement_rel|long _InterlockedDecrement_rel(long volatile *)|  
|_InterlockedExchange|long __cdecl _InterlockedExchange(long volatile * _Target, long)|  
|_InterlockedExchange16|short _InterlockedExchange16(short volatile * _Target, short)|  
|_InterlockedExchange16_acq|short _InterlockedExchange16_acq(short volatile * _Target, short)|  
|_InterlockedExchange16_nf|short _InterlockedExchange16_nf(short volatile * _Target, short)|  
|_InterlockedExchange64|__int64 _InterlockedExchange64(\__int64 volatile * _Target, \__int64)|  
|_InterlockedExchange64_acq|__int64 _InterlockedExchange64_acq(\__int64 volatile * _Target, \__int64)|  
|_InterlockedExchange64_nf|__int64 _InterlockedExchange64_nf(\__int64 volatile * _Target, \__int64)|  
|_InterlockedExchange8|char _InterlockedExchange8(char volatile * _Target, char)|  
|_InterlockedExchange8_acq|char _InterlockedExchange8_acq(char volatile * _Target, char)|  
|_InterlockedExchange8_nf|char _InterlockedExchange8_nf(char volatile * _Target, char)|  
|_InterlockedExchangeAdd|long __cdecl _InterlockedExchangeAdd(long volatile *, long)|  
|_InterlockedExchangeAdd16|short _InterlockedExchangeAdd16(short volatile *, short)|  
|_InterlockedExchangeAdd16_acq|short _InterlockedExchangeAdd16_acq(short volatile *, short)|  
|_InterlockedExchangeAdd16_nf|short _InterlockedExchangeAdd16_nf(short volatile *, short)|  
|_InterlockedExchangeAdd16_rel|short _InterlockedExchangeAdd16_rel(short volatile *, short)|  
|_InterlockedExchangeAdd64|__int64 _InterlockedExchangeAdd64(\__int64 volatile *, \__int64)|  
|_InterlockedExchangeAdd64_acq|__int64 _InterlockedExchangeAdd64_acq(\__int64 volatile *, \__int64)|  
|_InterlockedExchangeAdd64_nf|__int64 _InterlockedExchangeAdd64_nf(\__int64 volatile *, \__int64)|  
|_InterlockedExchangeAdd64_rel|__int64 _InterlockedExchangeAdd64_rel(\__int64 volatile *, \__int64)|  
|_InterlockedExchangeAdd8|char _InterlockedExchangeAdd8(char volatile *, char)|  
|_InterlockedExchangeAdd8_acq|char _InterlockedExchangeAdd8_acq(char volatile *, char)|  
|_InterlockedExchangeAdd8_nf|char _InterlockedExchangeAdd8_nf(char volatile *, char)|  
|_InterlockedExchangeAdd8_rel|char _InterlockedExchangeAdd8_rel(char volatile *, char)|  
|_InterlockedExchangeAdd_acq|long _InterlockedExchangeAdd_acq(long volatile *, long)|  
|_InterlockedExchangeAdd_nf|long _InterlockedExchangeAdd_nf(long volatile *, long)|  
|_InterlockedExchangeAdd_rel|long _InterlockedExchangeAdd_rel(long volatile *, long)|  
|_InterlockedExchangePointer|void * _InterlockedExchangePointer(void \* volatile \* _Target, void \*)|  
|_InterlockedExchangePointer_acq|void * _InterlockedExchangePointer_acq(void \* volatile \* _Target, void \*)|  
|_InterlockedExchangePointer_nf|void * _InterlockedExchangePointer_nf(void \* volatile \* _Target, void \*)|  
|_InterlockedExchange_acq|long _InterlockedExchange_acq(long volatile * _Target, long)|  
|_InterlockedExchange_nf|long _InterlockedExchange_nf(long volatile * _Target, long)|  
|_InterlockedIncrement|long __cdecl _InterlockedIncrement(long volatile *)|  
|_InterlockedIncrement16|short _InterlockedIncrement16(short volatile *)|  
|_InterlockedIncrement16_acq|short _InterlockedIncrement16_acq(short volatile *)|  
|_InterlockedIncrement16_nf|short _InterlockedIncrement16_nf(short volatile *)|  
|_InterlockedIncrement16_rel|short _InterlockedIncrement16_rel(short volatile *)|  
|_InterlockedIncrement64|__int64 _InterlockedIncrement64(\__int64 volatile *)|  
|_InterlockedIncrement64_acq|__int64 _InterlockedIncrement64_acq(\__int64 volatile *)|  
|_InterlockedIncrement64_nf|__int64 _InterlockedIncrement64_nf(\__int64 volatile *)|  
|_InterlockedIncrement64_rel|__int64 _InterlockedIncrement64_rel(\__int64 volatile *)|  
|_InterlockedIncrement_acq|long _InterlockedIncrement_acq(long volatile *)|  
|_InterlockedIncrement_nf|long _InterlockedIncrement_nf(long volatile *)|  
|_InterlockedIncrement_rel|long _InterlockedIncrement_rel(long volatile *)|  
|_InterlockedOr|long _InterlockedOr(long volatile *, long)|  
|_InterlockedOr16|short _InterlockedOr16(short volatile *, short)|  
|_InterlockedOr16_acq|short _InterlockedOr16_acq(short volatile *, short)|  
|_InterlockedOr16_nf|short _InterlockedOr16_nf(short volatile *, short)|  
|_InterlockedOr16_rel|short _InterlockedOr16_rel(short volatile *, short)|  
|_InterlockedOr64|__int64 _InterlockedOr64(\__int64 volatile *, \__int64)|  
|_InterlockedOr64_acq|__int64 _InterlockedOr64_acq(\__int64 volatile *, \__int64)|  
|_InterlockedOr64_nf|__int64 _InterlockedOr64_nf(\__int64 volatile *, \__int64)|  
|_InterlockedOr64_rel|__int64 _InterlockedOr64_rel(\__int64 volatile *, \__int64)|  
|_InterlockedOr8|char _InterlockedOr8(char volatile *, char)|  
|_InterlockedOr8_acq|char _InterlockedOr8_acq(char volatile *, char)|  
|_InterlockedOr8_nf|char _InterlockedOr8_nf(char volatile *, char)|  
|_InterlockedOr8_rel|char _InterlockedOr8_rel(char volatile *, char)|  
|_InterlockedOr_acq|long _InterlockedOr_acq(long volatile *, long)|  
|_InterlockedOr_nf|long _InterlockedOr_nf(long volatile *, long)|  
|_InterlockedOr_rel|long _InterlockedOr_rel(long volatile *, long)|  
|_InterlockedXor|long _InterlockedXor(long volatile *, long)|  
|_InterlockedXor16|short _InterlockedXor16(short volatile *, short)|  
|_InterlockedXor16_acq|short _InterlockedXor16_acq(short volatile *, short)|  
|_InterlockedXor16_nf|short _InterlockedXor16_nf(short volatile *, short)|  
|_InterlockedXor16_rel|short _InterlockedXor16_rel(short volatile *, short)|  
|_InterlockedXor64|__int64 _InterlockedXor64(\__int64 volatile *, \__int64)|  
|_InterlockedXor64_acq|__int64 _InterlockedXor64_acq(\__int64 volatile *, \__int64)|  
|_InterlockedXor64_nf|__int64 _InterlockedXor64_nf(\__int64 volatile *, \__int64)|  
|_InterlockedXor64_rel|__int64 _InterlockedXor64_rel(\__int64 volatile *, \__int64)|  
|_InterlockedXor8|char _InterlockedXor8(char volatile *, char)|  
|_InterlockedXor8_acq|char _InterlockedXor8_acq(char volatile *, char)|  
|_InterlockedXor8_nf|char _InterlockedXor8_nf(char volatile *, char)|  
|_InterlockedXor8_rel|char _InterlockedXor8_rel(char volatile *, char)|  
|_InterlockedXor_acq|long _InterlockedXor_acq(long volatile *, long)|  
|_InterlockedXor_nf|long _InterlockedXor_nf(long volatile *, long)|  
|_InterlockedXor_rel|long _InterlockedXor_rel(long volatile *, long)|  
  
 [[NEON](#top)]  
  
### _interlockedbittest Intrinsics  
 The plain interlocked bittest intrinsics are common to all platforms. ARM adds `_acq`, `_rel`, and `_nf` variants, which just modify the barrier semantics of an operation, as described in [_nf (no fence) Suffix](#nf_suffix) earlier in this article.  
  
|Function Name|Function Prototype|  
|-------------------|------------------------|  
|_interlockedbittestandreset|unsigned char _interlockedbittestandreset(long volatile *, long)|  
|_interlockedbittestandreset_acq|unsigned char _interlockedbittestandreset_acq(long volatile *, long)|  
|_interlockedbittestandreset_nf|unsigned char _interlockedbittestandreset_nf(long volatile *, long)|  
|_interlockedbittestandreset_rel|unsigned char _interlockedbittestandreset_rel(long volatile *, long)|  
|_interlockedbittestandset|unsigned char _interlockedbittestandset(long volatile *, long)|  
|_interlockedbittestandset_acq|unsigned char _interlockedbittestandset_acq(long volatile *, long)|  
|_interlockedbittestandset_nf|unsigned char _interlockedbittestandset_nf(long volatile *, long)|  
|_interlockedbittestandset_rel|unsigned char _interlockedbittestandset_rel(long volatile *, long)|  
  
 [[NEON](#top)]  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [ARM Assembler Reference](../VS_visualcpp/ARM-Assembler-Reference.md)   
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)