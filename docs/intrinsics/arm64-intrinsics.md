---
title: "ARM64 intrinsics"
description: "Reference list of ARM64 intrinsics supported by the Microsoft C++ compiler in Visual Studio."
f1_keywords: ["__break", "__addx18byte", "__addx18word", "__addx18dword", "__addx18qword", "__cas8", "__cas16", "__cas32", "__cas64", "__casa8", "__casa16", "__casa32", "__casa64", "__casl8", "__casl16", "__casl32", "__casl64", "__casal8", "__casal16", "__casal32", "__casal64", "__crc32b", "__crc32h", "__crc32w", "__crc32d", "__crc32cb", "__crc32ch", "__crc32cw", "__crc32cd", "__getReg", "__getRegFp", "__getCallerReg", "__getCallerRegFp", "__hlt", "__incx18byte", "__incx18word", "__incx18dword", "__incx18qword", "__ldar8", "__ldar16", "__ldar32", "__ldar64", "__ldapr8", "__ldapr16", "__ldapr32", "__ldapr64", "__prefetch2", "__readx18byte", "__readx18word", "__readx18dword", "__readx18qword", "__setReg", "__setRegFp", "__setCallerReg", "__setCallerRegFp", "__stlr8", "__stlr16", "__stlr32", "__stlr64", "__swp8", "__swp16", "__swp32", "__swp64", "__swpa8", "__swpa16", "__swpa32", "__swpa64", "__swpl8", "__swpl16", "__swpl32", "__swpl64", "__swpal8", "__swpal16", "__swpal32", "__swpal64", "__sys", "__svc", "__writex18byte", "__writex18word", "__writex18dword", "__writex18qword"]
helpviewer_keywords: ["__break ARM64 intrinsic", "__addx18byte ARM64 intrinsic", "__addx18word ARM64 intrinsic", "__addx18dword ARM64 intrinsic", "__addx18qword ARM64 intrinsic", "__cas8 ARM64 intrinsic", "__cas16 ARM64 intrinsic", "__cas32 ARM64 intrinsic", "__cas64 ARM64 intrinsic", "__casa8 ARM64 intrinsic", "__casa16 ARM64 intrinsic", "__casa32 ARM64 intrinsic", "__casa64 ARM64 intrinsic", "__casl8 ARM64 intrinsic", "__casl16 ARM64 intrinsic", "__casl32 ARM64 intrinsic", "__casl64 ARM64 intrinsic", "__casal8 ARM64 intrinsic", "__casal16 ARM64 intrinsic", "__casal32 ARM64 intrinsic", "__casal64 ARM64 intrinsic", "__crc32b ARM64 intrinsic", "__crc32h ARM64 intrinsic", "__crc32w ARM64 intrinsic", "__crc32d ARM64 intrinsic", "__crc32cb ARM64 intrinsic", "__crc32ch ARM64 intrinsic", "__crc32cw ARM64 intrinsic", "__crc32cd ARM64 intrinsic", "__getReg ARM64 intrinsic", "__getRegFp ARM64 intrinsic", "__getCallerReg ARM64 intrinsic", "__getCallerRegFp ARM64 intrinsic", "__hlt ARM64 intrinsic", "__incx18byte ARM64 intrinsic", "__incx18word ARM64 intrinsic", "__incx18dword ARM64 intrinsic", "__incx18qword ARM64 intrinsic", "__ldar8 ARM64 intrinsic", "__ldar16 ARM64 intrinsic", "__ldar32 ARM64 intrinsic", "__ldar64 ARM64 intrinsic", "__ldapr8 ARM64 intrinsic", "__ldapr16 ARM64 intrinsic", "__ldapr32 ARM64 intrinsic", "__ldapr64 ARM64 intrinsic", "__prefetch2 ARM64 intrinsic", "__readx18byte ARM64 intrinsic", "__readx18word ARM64 intrinsic", "__readx18dword ARM64 intrinsic", "__readx18qword ARM64 intrinsic", "__setReg ARM64 intrinsic", "__setRegFp ARM64 intrinsic", "__setCallerReg ARM64 intrinsic", "__setCallerRegFp ARM64 intrinsic", "__stlr8 ARM64 intrinsic", "__stlr16 ARM64 intrinsic", "__stlr32 ARM64 intrinsic", "__stlr64 ARM64 intrinsic", "__swp8 ARM64 intrinsic", "__swp16 ARM64 intrinsic", "__swp32 ARM64 intrinsic", "__swp64 ARM64 intrinsic", "__swpa8 ARM64 intrinsic", "__swpa16 ARM64 intrinsic", "__swpa32 ARM64 intrinsic", "__swpa64 ARM64 intrinsic", "__swpl8 ARM64 intrinsic", "__swpl16 ARM64 intrinsic", "__swpl32 ARM64 intrinsic", "__swpl64 ARM64 intrinsic", "__swpal8 ARM64 intrinsic", "__swpal16 ARM64 intrinsic", "__swpal32 ARM64 intrinsic", "__swpal64 ARM64 intrinsic", "__sys ARM64 intrinsic", "__svc ARM64 intrinsic", "__writex18byte ARM64 intrinsic", "__writex18word ARM64 intrinsic", "__writex18dword ARM64 intrinsic", "__writex18qword ARM64 intrinsic"]
author: sigatrev
ms.author: magardn
ms.date: "11/14/2019"
---
# ARM64 intrinsics

The Microsoft C++ compiler (MSVC) makes the following intrinsics available on the ARM64 architecture. For more information about ARM, see the Architecture and Software Development Tools sections of the [ARM Developer Documentation](https://developer.arm.com/docs) website.

## <a name="top"></a> NEON

The NEON vector instruction set extensions for ARM64 provide Single Instruction Multiple Data (SIMD) capabilities. They resemble the ones in the MMX and SSE vector instruction sets that are common to x86 and x64 architecture processors.

NEON intrinsics are supported, as provided in the header file *arm64_neon.h*. The MSVC support for NEON intrinsics resembles that of the ARM64 compiler, which is documented in the [ARM NEON Intrinsic Reference](https://developer.arm.com/architectures/instruction-sets/simd-isas/neon/intrinsics) on the ARM Infocenter website.

## <a name="A"></a> ARM64-specific intrinsics listing

|Function Name|Instruction|Function Prototype|
|-------------------|-----------------|------------------------|
|__break|BRK|void __break(int)|
|__addx18byte||void __addx18byte(unsigned long, unsigned char)|
|__addx18word||void __addx18word(unsigned long, unsigned short)|
|__addx18dword||void __addx18dword(unsigned long, unsigned long)|
|__addx18qword||void __addx18qword(unsigned long, unsigned __int64)|
|__cas8|CASB|unsigned __int8 __cas8(unsigned __int8 volatile* _Target, unsigned __int8 _Comp, unsigned __int8 _Value)|
|__cas16|CASH|unsigned __int16 __cas16(unsigned __int16 volatile* _Target, unsigned __int16 _Comp, unsigned __int16 _Value)|
|__cas32|CAS|unsigned __int32 __cas32(unsigned __int32 volatile* _Target, unsigned __int32 _Comp, unsigned __int32 _Value)|
|__cas64|CAS|unsigned __int64 __cas64(unsigned __int64 volatile* _Target, unsigned __int64 _Comp, unsigned __int64 _Value)|
|__casa8|CASAB|unsigned __int8 __casa8(unsigned __int8 volatile* _Target, unsigned __int8 _Comp, unsigned __int8 _Value)|
|__casa16|CASAH|unsigned __int16 __casa16(unsigned __int16 volatile* _Target, unsigned __int16 _Comp, unsigned __int16 _Value)|
|__casa32|CASA|unsigned __int32 __casa32(unsigned __int32 volatile* _Target, unsigned __int32 _Comp, unsigned __int32 _Value)|
|__casa64|CASA|unsigned __int64 __casa64(unsigned __int64 volatile* _Target, unsigned __int64 _Comp, unsigned __int64 _Value)|
|__casl8|CASLB|unsigned __int8 __casl8(unsigned __int8 volatile* _Target, unsigned __int8 _Comp, unsigned __int8 _Value)|
|__casl16|CASLH|unsigned __int16 __casl16(unsigned __int16 volatile* _Target, unsigned __int16 _Comp, unsigned __int16 _Value)|
|__casl32|CASL|unsigned __int32 __casl32(unsigned __int32 volatile* _Target, unsigned __int32 _Comp, unsigned __int32 _Value)|
|__casl64|CASL|unsigned __int64 __casl64(unsigned __int64 volatile* _Target, unsigned __int64 _Comp, unsigned __int64 _Value)|
|__casal8|CASALB|unsigned __int8 __casal8(unsigned __int8 volatile* _Target, unsigned __int8 _Comp, unsigned __int8 _Value)|
|__casal16|CASALH|unsigned __int16 __casal16(unsigned __int16 volatile* _Target, unsigned __int16 _Comp, unsigned __int16 _Value)|
|__casal32|CASAL|unsigned __int32 __casal32(unsigned __int32 volatile* _Target, unsigned __int32 _Comp, unsigned __int32 _Value)|
|__casal64|CASAL|unsigned __int64 __casal64(unsigned __int64 volatile* _Target, unsigned __int64 _Comp, unsigned __int64 _Value)|
|__crc32b|CRC32B|unsigned __int32 __crc32b(unsigned __int32, unsigned __int32)|
|__crc32h|CRC32H|unsigned __int32 __crc32h(unsigned __int32, unsigned __int32)|
|__crc32w|CRC32W|unsigned __int32 __crc32w(unsigned __int32, unsigned __int32)|
|__crc32d|CRC32X|unsigned __int32 __crc32d(unsigned __int32, unsigned __int64)|
|__crc32cb|CRC32CB|unsigned __int32 __crc32cb(unsigned __int32, unsigned __int32)|
|__crc32ch|CRC32CH|unsigned __int32 __crc32ch(unsigned __int32, unsigned __int32)|
|__crc32cw|CRC32CW|unsigned __int32 __crc32cw(unsigned __int32, unsigned __int32)|
|__crc32cd|CRC32CX|unsigned __int32 __crc32cd(unsigned __int32, unsigned __int64)|
|__dmb|DMB|void __dmb(unsigned int `_Type`)<br /><br /> Inserts a memory barrier operation into the instruction stream. The parameter `_Type` specifies the kind of restriction that the barrier enforces.<br /><br /> For more information about the kinds of restrictions that can be enforced, see [Memory barrier restrictions](#BarrierRestrictions).|
|__dsb|DSB|void __dsb(unsigned int _Type)<br /><br /> Inserts a memory barrier operation into the instruction stream. The parameter `_Type` specifies the kind of restriction that the barrier enforces.<br /><br /> For more information about the kinds of restrictions that can be enforced, see [Memory barrier restrictions](#BarrierRestrictions).|
|__isb|ISB|void __isb(unsigned int _Type)<br /><br /> Inserts a memory barrier operation into the instruction stream. The parameter `_Type` specifies the kind of restriction that the barrier enforces.<br /><br /> For more information about the kinds of restrictions that can be enforced, see [Memory barrier restrictions](#BarrierRestrictions).|
|__getReg||unsigned __int64 __getReg(int)|
|__getRegFp||double __getRegFp(int)|
|__getCallerReg||unsigned __int64 __getCallerReg(int)|
|__getCallerRegFp||double __getCallerRegFp(int)|
|__hvc|HVC|unsigned int __hvc(unsigned int, ...)|
|__hlt|HLT|int __hlt(unsigned int, ...)|
|__incx18byte||void __incx18byte(unsigned long)|
|__incx18word||void __incx18word(unsigned long)|
|__incx18dword||void __incx18dword(unsigned long)|
|__incx18qword||void __incx18qword(unsigned long)|
|__iso_volatile_load16||__int16 \__iso_volatile_load16(const volatile \__int16 \*)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_load32||__int32 \__iso_volatile_load32(const volatile \__int32 \*)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_load64||__int64 \__iso_volatile_load64(const volatile \__int64 \*)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_load8||__int8 \__iso_volatile_load8(const volatile \__int8 \*)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_store16||void __iso_volatile_store16(volatile \__int16 \*, \__int16)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_store32||void __iso_volatile_store32(volatile \__int32 \*, \__int32)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_store64||void __iso_volatile_store64(volatile \__int64 \*, \__int64)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__iso_volatile_store8||void __iso_volatile_store8(volatile \__int8 \*, \__int8)<br /><br /> For more information, see [__iso_volatile_load/store intrinsics](#IsoVolatileLoadStore).|
|__ldar8|LDARB|unsigned __int8 __ldar8(unsigned __int8 volatile* _Target)|
|__ldar16|LDARH|unsigned __int16 __ldar16(unsigned __int16 volatile* _Target)|
|__ldar32|LDAR|unsigned __int32 __ldar32(unsigned __int32 volatile* _Target)|
|__ldar64|LDAR|unsigned __int64 __ldar64(unsigned __int64 volatile* _Target)|
|__ldapr8|LDAPRB|unsigned __int8 __ldapr8(unsigned __int8 volatile* _Target)|
|__ldapr16|LDAPRH|unsigned __int16 __ldapr16(unsigned __int16 volatile* _Target)|
|__ldapr32|LDAPR|unsigned __int32 __ldapr32(unsigned __int32 volatile* _Target)|
|__ldapr64|LDAPR|unsigned __int64 __ldapr64(unsigned __int64 volatile* _Target)|
|__mulh||\__int64 __mulh(\__int64, \__int64)|
|__prefetch|PRFM|void __cdecl \__prefetch(const void \*)<br /><br /> Provides a `PRFM` memory hint with the prefetch operation `PLDL1KEEP` to the system that memory at or near the specified address may be accessed soon. Some systems may choose to optimize for that memory access pattern to increase runtime performance. However, from the C++ language point of view, the function has no observable effect, and may do nothing at all.|
|__prefetch2|PRFM|void __cdecl \__prefetch(const void \*, uint8_t prfop)<br /><br /> Provides a `PRFM` memory hint with the provided prefetch operation to the system that memory at or near the specified address may be accessed soon. Some systems may choose to optimize for that memory access pattern to increase runtime performance. However, from the C++ language point of view, the function has no observable effect, and may do nothing at all.|
|__readx18byte||unsigned char __readx18byte(unsigned long)|
|__readx18word||unsigned short __readx18word(unsigned long)|
|__readx18dword||unsigned long __readx18dword(unsigned long)|
|__readx18qword||unsigned __int64 __readx18qword(unsigned long)|
|__setReg||void __setReg(int, unsigned __int64)|
|__setRegFp||void __setRegFp(int, double)|
|__setCallerReg||void __setCallerReg(int, unsigned __int64)|
|__setCallerRegFp||void __setCallerRegFp(int, double)|
|__sev|SEV|void __sev(void)|
|__static_assert||void __static_assert(int, const char \*)|
|__stlr8|STLRB|void __stlr8(unsigned __int8 volatile* _Target, unsigned __int8 _Value)|
|__stlr16|STLRH|void __stlr16(unsigned __int16 volatile* _Target, unsigned __int16 _Value)|
|__stlr32|STLR|void __stlr32(unsigned __int32 volatile* _Target, unsigned __int32 _Value)|
|__stlr64|STLR|void __stlr64(unsigned __int64 volatile* _Target, unsigned __int64 _Value)|
|__swp8|SWPB|unsigned __int8 __swp8(unsigned __int8 volatile* _Target, unsigned __int8 _Value)|
|__swp16|SWPH|unsigned __int16 __swp16(unsigned __int16 volatile* _Target, unsigned __int16 _Value)|
|__swp32|SWP|unsigned __int32 __swp32(unsigned __int32 volatile* _Target, unsigned __int32 _Value)|
|__swp64|SWP|unsigned __int64 __swp64(unsigned __int64 volatile* _Target, unsigned __int64 _Value)|
|__swpa8|SWPAB|unsigned __int8 __swpa8(unsigned __int8 volatile* _Target, unsigned __int8 _Value)|
|__swpa16|SWPAH|unsigned __int16 __swpa16(unsigned __int16 volatile* _Target, unsigned __int16 _Value)|
|__swpa32|SWPA|unsigned __int32 __swpa32(unsigned __int32 volatile* _Target, unsigned __int32 _Value)|
|__swpa64|SWPA|unsigned __int64 __swpa64(unsigned __int64 volatile* _Target, unsigned __int64 _Value)|
|__swpl8|SWPLB|unsigned __int8 __swpl8(unsigned __int8 volatile* _Target, unsigned __int8 _Value)|
|__swpl16|SWPLH|unsigned __int16 __swpl16(unsigned __int16 volatile* _Target, unsigned __int16 _Value)|
|__swpl32|SWPL|unsigned __int32 __swpl32(unsigned __int32 volatile* _Target, unsigned __int32 _Value)|
|__swpl64|SWPL|unsigned __int64 __swpl64(unsigned __int64 volatile* _Target, unsigned __int64 _Value)|
|__swpal8|SWPALB|unsigned __int8 __swpal8(unsigned __int8 volatile* _Target, unsigned __int8 _Value)|
|__swpal16|SWPALH|unsigned __int16 __swpal16(unsigned __int16 volatile* _Target, unsigned __int16 _Value)|
|__swpal32|SWPAL|unsigned __int32 __swpal32(unsigned __int32 volatile* _Target, unsigned __int32 _Value)|
|__swpal64|SWPAL|unsigned __int64 __swpal64(unsigned __int64 volatile* _Target, unsigned __int64 _Value)|
|__sys|SYS|unsigned int __sys(int, __int64)|
|__svc|SVC|unsigned int __svc(unsigned int, ...)|
|__wfe|WFE|void __wfe(void)|
|__wfi|WFI|void __wfi(void)|
|__writex18byte||void __writex18byte(unsigned long, unsigned char)|
|__writex18word||void __writex18word(unsigned long, unsigned short)|
|__writex18dword||void __writex18dword(unsigned long, unsigned long)|
|__writex18qword||void __writex18qword(unsigned long, unsigned __int64)|
|__umulh||unsigned \__int64 __umulh(unsigned \__int64, unsigned \__int64)|
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
|_ReadStatusReg|MRS|\__int64 _ReadStatusReg(int)|
|_WriteStatusReg|MSR|void _WriteStatusReg(int, \__int64)|

[[Return to top](#top)]

### <a name="BarrierRestrictions"></a> Memory barrier restrictions

The intrinsic functions `__dmb` (data memory barrier), `__dsb` (data synchronization barrier), and `__isb` (instruction synchronization barrier) use the following predefined values to specify the memory barrier restriction in terms of the sharing domain and the kind of access that are affected by the operation.

|Restriction Value|Description|
|-----------------------|-----------------|
|_ARM64_BARRIER_SY|Full system, reads and writes.|
|_ARM64_BARRIER_ST|Full system, writes only.|
|_ARM64_BARRIER_LD|Full system, read only.|
|_ARM64_BARRIER_ISH|Inner sharable, reads and writes.|
|_ARM64_BARRIER_ISHST|Inner sharable, writes only.|
|_ARM64_BARRIER_ISHLD|Inner sharable, read only.|
|_ARM64_BARRIER_NSH|Non-sharable, reads and writes.|
|_ARM64_BARRIER_NSHST|Non-sharable, writes only.|
|_ARM64_BARRIER_NSHLD|Non-sharable, read only.|
|_ARM64_BARRIER_OSH|Outer sharable, reads and writes.|
|_ARM64_BARRIER_OSHST|Outer sharable, writes only.|
|_ARM64_BARRIER_OSHLD|Outer sharable, read only.|

For the `__isb` intrinsic, the only restriction that is currently valid is _ARM64_BARRIER_SY; all other values are reserved by the architecture.

### <a name="IsoVolatileLoadStore"></a> __iso_volatile_load/store intrinsics

These intrinsic functions explicitly perform loads and stores that aren't subject to compiler optimizations.

```C
__int16 __iso_volatile_load16(const volatile __int16 * Location);
__int32 __iso_volatile_load32(const volatile __int32 * Location);
__int64 __iso_volatile_load64(const volatile __int64 * Location);
__int8 __iso_volatile_load8(const volatile __int8 * Location);

void __iso_volatile_store16(volatile __int16 * Location, __int16 Value);
void __iso_volatile_store32(volatile __int32 * Location, __int32 Value);
void __iso_volatile_store64(volatile __int64 * Location, __int64 Value);
void __iso_volatile_store8(volatile __int8 * Location, __int8 Value);
```

#### Parameters

*Location*\
The address of a memory location to read from or write to.

*Value*\
The value to write to the specified memory location (store intrinsics only).

#### Return value (load intrinsics only)

The value of the memory location that is specified by *Location*.

#### Remarks

You can use the `__iso_volatile_load8/16/32/64` and `__iso_volatile_store8/16/32/64` intrinsics to explicitly perform memory accesses that aren't subject to compiler optimizations. The compiler can't remove, synthetize, or change the relative order of these operations. However, it doesn't generate implicit hardware memory barriers. Therefore, the hardware may still reorder the observable memory accesses across multiple threads. More precisely, these intrinsics are equivalent to the following expressions as compiled under **/volatile:iso**.

```cpp
int a = __iso_volatile_load32(p);    // equivalent to: int a = *(const volatile __int32*)p;
__iso_volatile_store32(p, a);        // equivalent to: *(volatile __int32*)p = a;
```

Notice that the intrinsics take volatile pointers to accommodate volatile variables. However, there's no requirement or recommendation to use volatile pointers as arguments. The semantics of these operations are exactly the same if a regular, non-volatile type is used.

For more information about the **/volatile:iso** command-line argument, see [/volatile (volatile keyword interpretation)](../build/reference/volatile-volatile-keyword-interpretation.md).

## <a name="I"></a> ARM64 support for intrinsics from other architectures

The following table lists intrinsics from other architectures that are supported on ARM64 platforms. Where the behavior of an intrinsic on ARM64 differs from its behavior on other hardware architectures, additional details are noted.

|Function Name|Function Prototype|
|-------------------|------------------------|
|__assume|void __assume(int)|
|__code_seg|void __code_seg(const char \*)|
|__debugbreak|void __cdecl \__debugbreak(void)|
|__fastfail|__declspec(noreturn) void \__fastfail(unsigned int)|
|__nop|void __nop(void)|
|__yield|void __yield(void) **Note:**  On ARM64 platforms, this function generates the YIELD instruction. This instruction indicates that the thread is performing a task that may be temporarily suspended from execution—for example, a spinlock—without adversely affecting the program. It enables the CPU to execute other tasks during execution cycles that would otherwise be wasted.|
|_AddressOfReturnAddress|void \* _AddressOfReturnAddress(void)|
|_BitScanForward|unsigned char _BitScanForward(unsigned long \* _Index, unsigned long _Mask)|
|_BitScanForward64|unsigned char _BitScanForward64(unsigned long \* _Index, unsigned __int64 _Mask)|
|_BitScanReverse|unsigned char _BitScanReverse(unsigned long \* _Index, unsigned long _Mask)|
|_BitScanReverse64|unsigned char _BitScanReverse64(unsigned long \* _Index, unsigned __int64 _Mask)|
|_bittest|unsigned char _bittest(long const \*, long)|
|_bittest64|unsigned char _bittest64(__int64 const \*, __int64)|
|_bittestandcomplement|unsigned char _bittestandcomplement(long \*, long)|
|_bittestandcomplement64|unsigned char _bittestandcomplement64(__int64 \*, __int64)|
|_bittestandreset|unsigned char _bittestandreset(long \*, long)|
|_bittestandreset64|unsigned char _bittestandreset64(__int64 \*, __int64)|
|_bittestandset|unsigned char _bittestandset(long \*, long)|
|_bittestandset64|unsigned char _bittestandset64(__int64 \*, __int64)|
|_byteswap_uint64|unsigned __int64 \__cdecl _byteswap_uint64(unsigned \__int64)|
|_byteswap_ulong|unsigned long __cdecl _byteswap_ulong(unsigned long)|
|_byteswap_ushort|unsigned short __cdecl _byteswap_ushort(unsigned short)|
|_disable|void __cdecl _disable(void) **Note:**  On ARM64 platforms, this function generates the instruction `MSR DAIFCLR,#2`; it's only available as an intrinsic.|
|_enable|void __cdecl _enable(void) **Note:**  On ARM64 platforms, this function generates the instruction `MSR DAIFSET,#2`; it's only available as an intrinsic.|
|_lrotl|unsigned long __cdecl _lrotl(unsigned long, int)|
|_lrotr|unsigned long __cdecl _lrotr(unsigned long, int)|
|_ReadBarrier|void _ReadBarrier(void)|
|_ReadWriteBarrier|void _ReadWriteBarrier(void)|
|_ReturnAddress|void \* _ReturnAddress(void)|
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

[[Return to top](#top)]

## Interlocked intrinsics

Interlocked intrinsics are a set of intrinsics that are used to perform atomic read-modify-write operations. Some of them are common to all platforms. They're listed separately here because there are a large number of them. Because their definitions are mostly redundant, it's easier to think about them in general terms. Their names can be used to derive the exact behaviors.

The following table summarizes the ARM64 support of the non-bittest interlocked intrinsics. Each cell in the table corresponds to a name that is derived by appending the operation name in the left-most cell of the row and the type name in the top-most cell of the column to `_Interlocked`. For example, the cell at the intersection of the `Xor` row and the `8` column corresponds to `_InterlockedXor8` and is fully supported. Most of the supported functions offer these optional suffixes: `_acq`, `_rel`, and `_nf`. The `_acq` suffix indicates an "acquire" semantic and the `_rel` suffix indicates a "release" semantic. The `_nf` or "no fence" suffix is unique to ARM and ARM64 and is discussed in the next section.

|Operation|8|16|32|64|128|P|
|-|-------|--------|--------|--------|-------|-------|
|Add|None|None|Full|Full|None|None|
|And|Full|Full|Full|Full|None|None|
|CompareExchange|Full|Full|Full|Full|Full|Full|
|Decrement|None|Full|Full|Full|None|None|
|Exchange|Full|Full|Full|Full|None|Full|
|ExchangeAdd|Full|Full|Full|Full|None|None|
|Increment|None|Full|Full|Full|None|None|
|Or|Full|Full|Full|Full|None|None|
|Xor|Full|Full|Full|Full|None|None|

Key:

- **Full**: supports plain, `_acq`, `_rel`, and `_nf` forms.

- **None**: Not supported

### <a name="nf_suffix"></a> _nf (no fence) suffix

The `_nf` or "no fence" suffix indicates that the operation doesn't behave as any kind of memory barrier, in contrast to the other three forms (plain, `_acq`, and `_rel`), which all behave as some kind of barrier. One possible use of the `_nf` forms is to maintain a statistic counter that is updated by multiple threads at the same time but whose value isn't otherwise used while multiple threads are executing.

### List of interlocked intrinsics

|Function Name|Function Prototype|
|-------------------|------------------------|
|_InterlockedAdd|long _InterlockedAdd(long _volatile \*, long)|
|_InterlockedAdd64|__int64 _InterlockedAdd64(\__int64 volatile \*, \__int64)|
|_InterlockedAdd64_acq|__int64 _InterlockedAdd64_acq(\__int64 volatile \*, \__int64)|
|_InterlockedAdd64_nf|__int64 _InterlockedAdd64_nf(\__int64 volatile \*, \__int64)|
|_InterlockedAdd64_rel|__int64 _InterlockedAdd64_rel(\__int64 volatile \*, \__int64)|
|_InterlockedAdd_acq|long _InterlockedAdd_acq(long volatile \*, long)|
|_InterlockedAdd_nf|long _InterlockedAdd_nf(long volatile \*, long)|
|_InterlockedAdd_rel|long _InterlockedAdd_rel(long volatile \*, long)|
|_InterlockedAnd|long _InterlockedAnd(long volatile \*, long)|
|_InterlockedAnd16|short _InterlockedAnd16(short volatile \*, short)|
|_InterlockedAnd16_acq|short _InterlockedAnd16_acq(short volatile \*, short)|
|_InterlockedAnd16_nf|short _InterlockedAnd16_nf(short volatile \*, short)|
|_InterlockedAnd16_rel|short _InterlockedAnd16_rel(short volatile \*, short)|
|_InterlockedAnd64|__int64 _InterlockedAnd64(\__int64 volatile \*, \__int64)|
|_InterlockedAnd64_acq|__int64 _InterlockedAnd64_acq(\__int64 volatile \*, \__int64)|
|_InterlockedAnd64_nf|__int64 _InterlockedAnd64_nf(\__int64 volatile \*, \__int64)|
|_InterlockedAnd64_rel|__int64 _InterlockedAnd64_rel(\__int64 volatile \*, \__int64)|
|_InterlockedAnd8|char _InterlockedAnd8(char volatile \*, char)|
|_InterlockedAnd8_acq|char _InterlockedAnd8_acq(char volatile \*, char)|
|_InterlockedAnd8_nf|char _InterlockedAnd8_nf(char volatile \*, char)|
|_InterlockedAnd8_rel|char _InterlockedAnd8_rel(char volatile \*, char)|
|_InterlockedAnd_acq|long _InterlockedAnd_acq(long volatile \*, long)|
|_InterlockedAnd_nf|long _InterlockedAnd_nf(long volatile \*, long)|
|_InterlockedAnd_rel|long _InterlockedAnd_rel(long volatile \*, long)|
|_InterlockedCompareExchange|long __cdecl _InterlockedCompareExchange(long volatile \*, long, long)|
|_InterlockedCompareExchange_acq|long _InterlockedCompareExchange_acq(long volatile \*, long, long)|
|_InterlockedCompareExchange_nf|long _InterlockedCompareExchange_nf(long volatile \*, long, long)|
|_InterlockedCompareExchange_rel|long _InterlockedCompareExchange_rel(long volatile \*, long, long)|
|_InterlockedCompareExchange16|short _InterlockedCompareExchange16(short volatile \*, short, short)|
|_InterlockedCompareExchange16_acq|short _InterlockedCompareExchange16_acq(short volatile \*, short, short)|
|_InterlockedCompareExchange16_nf|short _InterlockedCompareExchange16_nf(short volatile \*, short, short)|
|_InterlockedCompareExchange16_rel|short _InterlockedCompareExchange16_rel(short volatile \*, short, short)|
|_InterlockedCompareExchange64|__int64 _InterlockedCompareExchange64(\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange64_acq|__int64 _InterlockedCompareExchange64_acq(\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange64_nf|__int64 _InterlockedCompareExchange64_nf(\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange64_rel|__int64 _InterlockedCompareExchange64_rel(\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange8|char _InterlockedCompareExchange8(char volatile \*, char, char)|
|_InterlockedCompareExchange8_acq|char _InterlockedCompareExchange8_acq(char volatile \*, char, char)|
|_InterlockedCompareExchange8_nf|char _InterlockedCompareExchange8_nf(char volatile \*, char, char)|
|_InterlockedCompareExchange8_rel|char _InterlockedCompareExchange8_rel(char volatile \*, char, char)|
|_InterlockedCompareExchangePointer|void \* _InterlockedCompareExchangePointer(void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchangePointer_acq|void \* _InterlockedCompareExchangePointer_acq(void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchangePointer_nf|void \* _InterlockedCompareExchangePointer_nf(void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchangePointer_rel|void \* _InterlockedCompareExchangePointer_rel(void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchange128|unsigned char _InterlockedCompareExchange128(\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedCompareExchange128_acq|unsigned char _InterlockedCompareExchange128_acq(\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedCompareExchange128_nf|unsigned char _InterlockedCompareExchange128_nf(\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedCompareExchange128_rel|unsigned char _InterlockedCompareExchange128_rel(\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedDecrement|long __cdecl _InterlockedDecrement(long volatile \*)|
|_InterlockedDecrement16|short _InterlockedDecrement16(short volatile \*)|
|_InterlockedDecrement16_acq|short _InterlockedDecrement16_acq(short volatile \*)|
|_InterlockedDecrement16_nf|short _InterlockedDecrement16_nf(short volatile \*)|
|_InterlockedDecrement16_rel|short _InterlockedDecrement16_rel(short volatile \*)|
|_InterlockedDecrement64|__int64 _InterlockedDecrement64(\__int64 volatile \*)|
|_InterlockedDecrement64_acq|__int64 _InterlockedDecrement64_acq(\__int64 volatile \*)|
|_InterlockedDecrement64_nf|__int64 _InterlockedDecrement64_nf(\__int64 volatile \*)|
|_InterlockedDecrement64_rel|__int64 _InterlockedDecrement64_rel(\__int64 volatile \*)|
|_InterlockedDecrement_acq|long _InterlockedDecrement_acq(long volatile \*)|
|_InterlockedDecrement_nf|long _InterlockedDecrement_nf(long volatile \*)|
|_InterlockedDecrement_rel|long _InterlockedDecrement_rel(long volatile \*)|
|_InterlockedExchange|long __cdecl _InterlockedExchange(long volatile \* _Target, long)|
|_InterlockedExchange_acq|long _InterlockedExchange_acq(long volatile \* _Target, long)|
|_InterlockedExchange_nf|long _InterlockedExchange_nf(long volatile \* _Target, long)|
|_InterlockedExchange_rel|long _InterlockedExchange_rel(long volatile \* _Target, long)|
|_InterlockedExchange16|short _InterlockedExchange16(short volatile \* _Target, short)|
|_InterlockedExchange16_acq|short _InterlockedExchange16_acq(short volatile \* _Target, short)|
|_InterlockedExchange16_nf|short _InterlockedExchange16_nf(short volatile \* _Target, short)|
|_InterlockedExchange16_rel|short _InterlockedExchange16_rel(short volatile \* _Target, short)|
|_InterlockedExchange64|__int64 _InterlockedExchange64(\__int64 volatile \* _Target, \__int64)|
|_InterlockedExchange64_acq|__int64 _InterlockedExchange64_acq(\__int64 volatile \* _Target, \__int64)|
|_InterlockedExchange64_nf|__int64 _InterlockedExchange64_nf(\__int64 volatile \* _Target, \__int64)|
|_InterlockedExchange64_rel|__int64 _InterlockedExchange64_rel(\__int64 volatile \* _Target, \__int64)|
|_InterlockedExchange8|char _InterlockedExchange8(char volatile \* _Target, char)|
|_InterlockedExchange8_acq|char _InterlockedExchange8_acq(char volatile \* _Target, char)|
|_InterlockedExchange8_nf|char _InterlockedExchange8_nf(char volatile \* _Target, char)|
|_InterlockedExchange8_rel|char _InterlockedExchange8_rel(char volatile \* _Target, char)|
|_InterlockedExchangeAdd|long __cdecl _InterlockedExchangeAdd(long volatile \*, long)|
|_InterlockedExchangeAdd16|short _InterlockedExchangeAdd16(short volatile \*, short)|
|_InterlockedExchangeAdd16_acq|short _InterlockedExchangeAdd16_acq(short volatile \*, short)|
|_InterlockedExchangeAdd16_nf|short _InterlockedExchangeAdd16_nf(short volatile \*, short)|
|_InterlockedExchangeAdd16_rel|short _InterlockedExchangeAdd16_rel(short volatile \*, short)|
|_InterlockedExchangeAdd64|__int64 _InterlockedExchangeAdd64(\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd64_acq|__int64 _InterlockedExchangeAdd64_acq(\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd64_nf|__int64 _InterlockedExchangeAdd64_nf(\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd64_rel|__int64 _InterlockedExchangeAdd64_rel(\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd8|char _InterlockedExchangeAdd8(char volatile \*, char)|
|_InterlockedExchangeAdd8_acq|char _InterlockedExchangeAdd8_acq(char volatile \*, char)|
|_InterlockedExchangeAdd8_nf|char _InterlockedExchangeAdd8_nf(char volatile \*, char)|
|_InterlockedExchangeAdd8_rel|char _InterlockedExchangeAdd8_rel(char volatile \*, char)|
|_InterlockedExchangeAdd_acq|long _InterlockedExchangeAdd_acq(long volatile \*, long)|
|_InterlockedExchangeAdd_nf|long _InterlockedExchangeAdd_nf(long volatile \*, long)|
|_InterlockedExchangeAdd_rel|long _InterlockedExchangeAdd_rel(long volatile \*, long)|
|_InterlockedExchangePointer|void \* _InterlockedExchangePointer(void \* volatile \* _Target, void \*)|
|_InterlockedExchangePointer_acq|void \* _InterlockedExchangePointer_acq(void \* volatile \* _Target, void \*)|
|_InterlockedExchangePointer_nf|void \* _InterlockedExchangePointer_nf(void \* volatile \* _Target, void \*)|
|_InterlockedExchangePointer_rel|void \* _InterlockedExchangePointer_rel(void \* volatile \* _Target, void \*)|
|_InterlockedIncrement|long __cdecl _InterlockedIncrement(long volatile \*)|
|_InterlockedIncrement16|short _InterlockedIncrement16(short volatile \*)|
|_InterlockedIncrement16_acq|short _InterlockedIncrement16_acq(short volatile \*)|
|_InterlockedIncrement16_nf|short _InterlockedIncrement16_nf(short volatile \*)|
|_InterlockedIncrement16_rel|short _InterlockedIncrement16_rel(short volatile \*)|
|_InterlockedIncrement64|__int64 _InterlockedIncrement64(\__int64 volatile \*)|
|_InterlockedIncrement64_acq|__int64 _InterlockedIncrement64_acq(\__int64 volatile \*)|
|_InterlockedIncrement64_nf|__int64 _InterlockedIncrement64_nf(\__int64 volatile \*)|
|_InterlockedIncrement64_rel|__int64 _InterlockedIncrement64_rel(\__int64 volatile \*)|
|_InterlockedIncrement_acq|long _InterlockedIncrement_acq(long volatile \*)|
|_InterlockedIncrement_nf|long _InterlockedIncrement_nf(long volatile \*)|
|_InterlockedIncrement_rel|long _InterlockedIncrement_rel(long volatile \*)|
|_InterlockedOr|long _InterlockedOr(long volatile \*, long)|
|_InterlockedOr16|short _InterlockedOr16(short volatile \*, short)|
|_InterlockedOr16_acq|short _InterlockedOr16_acq(short volatile \*, short)|
|_InterlockedOr16_nf|short _InterlockedOr16_nf(short volatile \*, short)|
|_InterlockedOr16_rel|short _InterlockedOr16_rel(short volatile \*, short)|
|_InterlockedOr64|__int64 _InterlockedOr64(\__int64 volatile \*, \__int64)|
|_InterlockedOr64_acq|__int64 _InterlockedOr64_acq(\__int64 volatile \*, \__int64)|
|_InterlockedOr64_nf|__int64 _InterlockedOr64_nf(\__int64 volatile \*, \__int64)|
|_InterlockedOr64_rel|__int64 _InterlockedOr64_rel(\__int64 volatile \*, \__int64)|
|_InterlockedOr8|char _InterlockedOr8(char volatile \*, char)|
|_InterlockedOr8_acq|char _InterlockedOr8_acq(char volatile \*, char)|
|_InterlockedOr8_nf|char _InterlockedOr8_nf(char volatile \*, char)|
|_InterlockedOr8_rel|char _InterlockedOr8_rel(char volatile \*, char)|
|_InterlockedOr_acq|long _InterlockedOr_acq(long volatile \*, long)|
|_InterlockedOr_nf|long _InterlockedOr_nf(long volatile \*, long)|
|_InterlockedOr_rel|long _InterlockedOr_rel(long volatile \*, long)|
|_InterlockedXor|long _InterlockedXor(long volatile \*, long)|
|_InterlockedXor16|short _InterlockedXor16(short volatile \*, short)|
|_InterlockedXor16_acq|short _InterlockedXor16_acq(short volatile \*, short)|
|_InterlockedXor16_nf|short _InterlockedXor16_nf(short volatile \*, short)|
|_InterlockedXor16_rel|short _InterlockedXor16_rel(short volatile \*, short)|
|_InterlockedXor64|__int64 _InterlockedXor64(\__int64 volatile \*, \__int64)|
|_InterlockedXor64_acq|__int64 _InterlockedXor64_acq(\__int64 volatile \*, \__int64)|
|_InterlockedXor64_nf|__int64 _InterlockedXor64_nf(\__int64 volatile \*, \__int64)|
|_InterlockedXor64_rel|__int64 _InterlockedXor64_rel(\__int64 volatile \*, \__int64)|
|_InterlockedXor8|char _InterlockedXor8(char volatile \*, char)|
|_InterlockedXor8_acq|char _InterlockedXor8_acq(char volatile \*, char)|
|_InterlockedXor8_nf|char _InterlockedXor8_nf(char volatile \*, char)|
|_InterlockedXor8_rel|char _InterlockedXor8_rel(char volatile \*, char)|
|_InterlockedXor_acq|long _InterlockedXor_acq(long volatile \*, long)|
|_InterlockedXor_nf|long _InterlockedXor_nf(long volatile \*, long)|
|_InterlockedXor_rel|long _InterlockedXor_rel(long volatile \*, long)|

[[Return to top](#top)]

### _interlockedbittest intrinsics

The plain interlocked bit test intrinsics are common to all platforms. ARM64 adds `_acq`, `_rel`, and `_nf` variants, which just modify the barrier semantics of an operation, as described in [_nf (no fence) Suffix](#nf_suffix) earlier in this article.

|Function Name|Function Prototype|
|-------------------|------------------------|
|_interlockedbittestandreset|unsigned char _interlockedbittestandreset(long volatile \*, long)|
|_interlockedbittestandreset_acq|unsigned char _interlockedbittestandreset_acq(long volatile \*, long)|
|_interlockedbittestandreset_nf|unsigned char _interlockedbittestandreset_nf(long volatile \*, long)|
|_interlockedbittestandreset_rel|unsigned char _interlockedbittestandreset_rel(long volatile \*, long)|
|_interlockedbittestandreset64|unsigned char _interlockedbittestandreset64(__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_acq|unsigned char _interlockedbittestandreset64_acq(__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_nf|unsigned char _interlockedbittestandreset64_nf(__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_rel|unsigned char _interlockedbittestandreset64_rel(__int64 volatile \*, __int64)|
|_interlockedbittestandset|unsigned char _interlockedbittestandset(long volatile \*, long)|
|_interlockedbittestandset_acq|unsigned char _interlockedbittestandset_acq(long volatile \*, long)|
|_interlockedbittestandset_nf|unsigned char _interlockedbittestandset_nf(long volatile \*, long)|
|_interlockedbittestandset_rel|unsigned char _interlockedbittestandset_rel(long volatile \*, long)|
|_interlockedbittestandset64|unsigned char _interlockedbittestandset64(__int64 volatile \*, __int64)|
|_interlockedbittestandset64_acq|unsigned char _interlockedbittestandset64_acq(__int64 volatile \*, __int64)|
|_interlockedbittestandset64_nf|unsigned char _interlockedbittestandset64_nf(__int64 volatile \*, __int64)|
|_interlockedbittestandset64_rel|unsigned char _interlockedbittestandset64_rel(__int64 volatile \*, __int64)|

[[Return to top](#top)]

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[ARM intrinsics](arm-intrinsics.md)\
[ARM assembler reference](../assembler/arm/arm-assembler-reference.md)\
[C++ language reference](../cpp/cpp-language-reference.md)
