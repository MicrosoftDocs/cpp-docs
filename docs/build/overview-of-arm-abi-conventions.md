---
description: "Learn more about: Overview of ARM32 ABI Conventions"
title: "Overview of ARM ABI Conventions"
ms.date: "07/11/2018"
ms.assetid: 23f4ae8c-3148-4657-8c47-e933a9f387de
---
# Overview of ARM32 ABI Conventions

The application binary interface (ABI) for code compiled for Windows on ARM processors is based on the standard ARM EABI. This article highlights key differences between Windows on ARM and the standard. This document covers the ARM32 ABI. For information about the ARM64 ABI, see [Overview of ARM64 ABI conventions](arm64-windows-abi-conventions.md). For more information about the standard ARM EABI, see [Application Binary Interface (ABI) for the ARM Architecture](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.subset.swdev.abi/index.html) (external link).

## Base Requirements

Windows on ARM presumes that it is running on an ARMv7 architecture at all times. Floating-point support in the form of VFPv3-D32 or later must be present in hardware. The VFP must support both single-precision and double-precision floating-point in hardware. The Windows runtime does not support emulation of floating-point to enable running on non-VFP hardware.

Advanced SIMD Extensions (NEON) support—this includes both integer and floating-point operations—must also be present in hardware. No run-time support for emulation is provided.

Integer divide support (UDIV/SDIV) is strongly recommended but not required. Platforms that lack integer divide support may incur a performance penalty because these operations have to be trapped and possibly patched.

## Endianness

Windows on ARM executes in little-endian mode. Both the MSVC compiler and the Windows runtime expect little-endian data at all times. Although the SETEND instruction in the ARM instruction set architecture (ISA) allows even user-mode code to change the current endianness, doing so is discouraged because it's dangerous for an application. If an exception is generated in big-endian mode, the behavior is unpredictable and may lead to an application fault in user mode, or a bugcheck in kernel mode.

## Alignment

Although Windows enables the ARM hardware to handle misaligned integer accesses transparently, alignment faults still may be generated in some situations. Follow these rules for alignment:

- Half-word-sized (16-bit) and word-sized (32-bit) integer loads and stores do not have to be aligned. The hardware handles them efficiently and transparently.

- Floating-point loads and stores should be aligned. The kernel handles unaligned loads and stores transparently, but with significant overhead.

- Load or store double (LDRD/STRD) and multiple (LDM/STM) operations should be aligned. The kernel handles most of them transparently, but with significant overhead.

- All uncached memory accesses must be aligned, even for integer accesses. Unaligned accesses cause an alignment fault.

## Instruction Set

The instruction set for Windows on ARM is strictly limited to Thumb-2. All code executed on this platform is expected to start and remain in Thumb mode at all times. An attempt to switch into the legacy ARM instruction set may succeed, but if it does, any exceptions or interrupts that occur may lead to an application fault in user mode, or a bugcheck in kernel mode.

A side-effect of this requirement is that all code pointers must have the low bit set. This is so that when they are loaded and branched to via BLX or BX, the processor will remain in Thumb mode and not try to execute the target code as 32-bit ARM instructions.

### IT Instructions

The use of IT instructions in Thumb-2 code is disallowed except for these specific cases:

- The IT instruction can only be used to modify one target instruction.

- The target instruction must be a 16-bit instruction.

- The target instruction must be one of these:

   |16-Bit Opcodes|Class|Restrictions|
   |---------------------|-----------|------------------|
   |MOV, MVN|Move|Rm != PC, Rd != PC|
   |LDR, LDR[S]B, LDR[S]H|Load from memory|But not LDR literal forms|
   |STR, STRB, STRH|Store to memory||
   |ADD, ADC, RSB, SBC, SUB|Add or subtract|But not ADD/SUB SP, SP, imm7 forms<br /><br /> Rm != PC, Rdn != PC, Rdm != PC|
   |CMP, CMN|Compare|Rm != PC, Rn != PC|
   |MUL|Multiply||
   |ASR, LSL, LSR, ROR|Bit shift||
   |AND, BIC, EOR, ORR, TST|Bitwise arithmetic||
   |BX|Branch to register|Rm != PC|

Although current ARMv7 CPUs cannot report the use of disallowed instruction forms, future generations are expected to. If these forms are detected, any program that uses them may be terminated with an undefined instruction exception.

### SDIV/UDIV instructions

The use of integer divide instructions SDIV and UDIV is fully supported, even on platforms without native hardware to handle them. The overhead per SDIV or UDIV divide on a Cortex-A9 processor is approximately 80 cycles, in addition to the overall divide time of 20-250 cycles, depending on the inputs.

## Integer registers

The ARM processor supports 16 integer registers:

|Register|Volatile?|Role|
|--------------|---------------|----------|
|r0|Volatile|Parameter, result, scratch register 1|
|r1|Volatile|Parameter, result, scratch register 2|
|r2|Volatile|Parameter, scratch register 3|
|r3|Volatile|Parameter, scratch register 4|
|r4|Non-volatile||
|r5|Non-volatile||
|r6|Non-volatile||
|r7|Non-volatile||
|r8|Non-volatile||
|r9|Non-volatile||
|r10|Non-volatile||
|r11|Non-volatile|Frame pointer|
|r12|Volatile|Intra-procedure-call scratch register|
|r13 (SP)|Non-volatile|Stack pointer|
|r14 (LR)|Non-volatile|Link register|
|r15 (PC)|Non-volatile|Program counter|

For details about how to use the parameter and return value registers, see the Parameter Passing section in this article.

Windows uses r11 for fast-walking of the stack frame. For more information, see the Stack Walking section. Because of this requirement, r11 must point to the topmost link in the chain at all times. Do not use r11 for general purposes—your code will not generate correct stack walks during analysis.

## VFP registers

Windows only supports ARM variants that have VFPv3-D32 coprocessor support. This means that floating-point registers are always present and can be relied on for parameter passing, and that the full set of 32 registers is available for use. The VFP registers and their usage are summarized in this table:

|Singles|Doubles|Quads|Volatile?|Role|
|-------------|-------------|-----------|---------------|----------|
|s0-s3|d0-d1|q0|Volatile|Parameters, result, scratch register|
|s4-s7|d2-d3|q1|Volatile|Parameters, scratch register|
|s8-s11|d4-d5|q2|Volatile|Parameters, scratch register|
|s12-s15|d6-d7|q3|Volatile|Parameters, scratch register|
|s16-s19|d8-d9|q4|Non-volatile||
|s20-s23|d10-d11|q5|Non-volatile||
|s24-s27|d12-d13|q6|Non-volatile||
|s28-s31|d14-d15|q7|Non-volatile||
||d16-d31|q8-q15|Volatile||

The next table illustrates the floating-point status and control register (FPSCR) bitfields:

|Bits|Meaning|Volatile?|Role|
|----------|-------------|---------------|----------|
|31-28|NZCV|Volatile|Status flags|
|27|QC|Volatile|Cumulative saturation|
|26|AHP|Non-volatile|Alternative half-precision control|
|25|DN|Non-volatile|Default NaN mode control|
|24|FZ|Non-volatile|Flush-to-zero mode control|
|23-22|RMode|Non-volatile|Rounding mode control|
|21-20|Stride|Non-volatile|Vector Stride, must always be 0|
|18-16|Len|Non-volatile|Vector Length, must always be 0|
|15, 12-8|IDE, IXE, etc.|Non-volatile|Exception trap enable bits, must always be 0|
|7, 4-0|IDC, IXC, etc.|Volatile|Cumulative exception flags|

## Floating-point exceptions

Most ARM hardware does not support IEEE floating-point exceptions. On processor variants that do have hardware floating-point exceptions, the Windows kernel silently catches the exceptions and implicitly disables them in the FPSCR register. This ensures normalized behavior across processor variants. Otherwise, code developed on a platform that doesn't have exception support could receive unexpected exceptions when it's running on a platform that has exception support.

## Parameter passing

For non-variadic functions, the Windows on ARM ABI follows the ARM rules for parameter passing—this includes the VFP and Advanced SIMD extensions. These rules follow the [Procedure Call Standard for the ARM Architecture](http://infocenter.arm.com/help/topic/com.arm.doc.ihi0042c/IHI0042C_aapcs.pdf), consolidated with the VFP extensions. By default, the first four integer arguments and up to eight floating-point or vector arguments are passed in registers, and additional arguments are passed on the stack. Arguments are assigned to registers or the stack by using this procedure:

### Stage A: Initialization

Initialization is performed exactly once, before argument processing begins:

1. The Next Core Register Number (NCRN) is set to r0.

1. The VFP registers are marked as unallocated.

1. The Next Stacked Argument Address (NSAA) is set to the current SP.

1. If a function that returns a result in memory is called, then the address for the result is placed in r0 and the NCRN is set to r1.

### Stage B: Pre-padding and extension of arguments

For each argument in the list, the first matching rule from the following list is applied:

1. If the argument is a composite type whose size cannot be statically determined by both the caller and the callee, the argument is copied to memory and replaced by a pointer to the copy.

1. If the argument is a byte or 16-bit half-word, then it is zero-extended or sign-extended to a 32-bit full word and treated as a 4-byte argument.

1. If the argument is a composite type, its size is rounded up to the nearest multiple of 4.

### Stage C: Assignment of arguments to registers and stack

For each argument in the list, the following rules are applied in turn until the argument has been allocated:

1. If the argument is a VFP type and there are enough consecutive unallocated VFP registers of the appropriate type, then the argument is allocated to the lowest-numbered sequence of such registers.

1. If the argument is a VFP type, all remaining unallocated registers are marked as unavailable. The NSAA is adjusted upwards until it is correctly aligned for the argument type and the argument is copied to the stack at the adjusted NSAA. The NSAA is then incremented by the size of the argument.

1. If the argument requires 8-byte alignment, the NCRN is rounded up to the next even register number.

1. If the size of the argument in 32-bit words is not more than r4 minus NCRN, the argument is copied into core registers, starting at the NCRN, with the least significant bits occupying the lower-numbered registers. The NCRN is incremented by the number of registers used.

1. If the NCRN is less than r4 and the NSAA is equal to the SP, the argument is split between core registers and the stack. The first part of the argument is copied into the core registers, starting at the NCRN, up to and including r3. The remainder of the argument is copied onto the stack, starting at the NSAA. The NCRN is set to r4 and the NSAA is incremented by the size of the argument minus the amount passed in registers.

1. If the argument requires 8-byte alignment, the NSAA is rounded up to the next 8-byte aligned address.

1. The argument is copied into memory at the NSAA. The NSAA is incremented by the size of the argument.

The VFP registers are not used for variadic functions, and Stage C rules 1 and 2 are ignored. This means that a variadic function can begin with an optional push {r0-r3} to prepend the register arguments to any additional arguments passed by the caller, and then access the entire argument list directly from the stack.

Integer type values are returned in r0, optionally extended to r1 for 64-bit return values. VFP/NEON floating-point or SIMD type values are returned in s0, d0, or q0, as appropriate.

## Stack

The stack must remain 4-byte aligned at all times, and must be 8-byte aligned at any function boundary. This is required to support the frequent use of interlocked operations on 64-bit stack variables. The ARM EABI states that the stack is 8-byte aligned at any public interface. For consistency, the Windows on ARM ABI considers any function boundary to be a public interface.

Functions that have to use a frame pointer—for example, functions that call `alloca` or that change the stack pointer dynamically—must set up the frame pointer in r11 in the function prologue and leave it unchanged until the epilogue. Functions that do not require a frame pointer must perform all stack updates in the prologue and leave the stack pointer unchanged until the epilogue.

Functions that allocate 4 KB or more on the stack must ensure that each page prior to the final page is touched in order. This ensures that no code can "leap over" the guard pages that Windows uses to expand the stack. Typically, this is done by the `__chkstk` helper, which is passed the total stack allocation in bytes divided by 4 in r4, and which returns the final stack allocation amount in bytes back in r4.

### Red zone

The 8-byte area immediately below the current stack pointer is reserved for analysis and dynamic patching. This permits carefully generated code to be inserted, which stores 2 registers at [sp, #-8] and temporarily uses them for arbitrary purposes. The Windows kernel guarantees that those 8 bytes will not be overwritten if an exception or interrupt occurs in both user mode and kernel mode.

### Kernel stack

The default kernel-mode stack in Windows is three pages (12 KB). Be careful not to create functions that have large stack buffers in kernel mode. An interrupt could come in with very little stack headroom and cause a stack panic bugcheck.

## C/C++ specifics

Enumerations are 32-bit integer types unless at least one value in the enumeration requires 64-bit double-word storage. In that case, the enumeration is promoted to a 64-bit integer type.

**`wchar_t`** is defined to be equivalent to **`unsigned short`**, to preserve compatibility with other platforms.

## Stack walking

Windows code is compiled with frame pointers enabled ([/Oy (Frame-Pointer Omission)](reference/oy-frame-pointer-omission.md)) to enable fast stack walking. Generally, the r11 register points to the next link in the chain, which is an {r11, lr} pair that specifies the pointer to the previous frame on the stack and the return address. We recommend that your code also enable frame pointers for improved profiling and tracing.

## Exception unwinding

Stack unwinding during exception handling is enabled by the use of unwind codes. The unwind codes are a sequence of bytes stored in the .xdata section of the executable image. They describe the operation of the function prologue and epilogue code in an abstract manner, so that the effects of a function's prologue can be undone in preparation for unwinding to the caller's stack frame.

The ARM EABI specifies an exception unwinding model that uses unwind codes. However, this specification is not sufficient for unwinding in Windows, which must handle cases where the processor is in the middle of the prologue or epilogue of a function. For more information about Windows on ARM exception data and unwinding, see [ARM Exception Handling](arm-exception-handling.md).

We recommend that dynamically generated code be described by using dynamic function tables specified in calls to `RtlAddFunctionTable` and associated functions, so that the generated code can participate in exception handling.

## Cycle counter

ARM processors running Windows are required to support a cycle counter, but using the counter directly may cause problems. To avoid these issues, Windows on ARM uses an undefined opcode to request a normalized 64-bit cycle-counter value. From C or C++, use the `__rdpmccntr64` intrinsic to emit the appropriate opcode; from assembly, use the `__rdpmccntr64` instruction. Reading the cycle counter takes approximately 60 cycles on a Cortex-A9.

The counter is a true cycle counter, not a clock; therefore, the counting frequency varies with the processor frequency. If you want to measure elapsed clock time, use `QueryPerformanceCounter`.

## See also

[Common Visual C++ ARM Migration Issues](common-visual-cpp-arm-migration-issues.md)<br/>
[ARM Exception Handling](arm-exception-handling.md)
