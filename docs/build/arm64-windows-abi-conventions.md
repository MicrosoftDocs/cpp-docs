---
title: "Overview of ARM64 ABI conventions | Microsoft Docs"
ms.custom: ""
ms.date: "07/11/2018"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Overview of ARM64 ABI conventions

The basic ABI for Windows when compiled and run on ARM processors in 64-bit mode (ARMv8 or later architectures), for the most part,follows ARM’s standard AArch64 EABI. This article highlights some of the key assumptions and changes from what is documented in the EABI. For information about the 32-bit ABI, see [Overview of ARM ABI conventions](overview-of-arm-abi-conventions.md). For more information about the standard ARM EABI, see [Application Binary Interface (ABI) for the ARM Architecture](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.subset.swdev.abi/index.html) (external link).

## Definitions

With the introduction of 64-bit support, ARM has defined several terms:

- **AArch32** – the legacy 32-bit instruction set architecture (ISA) defined by ARM, including Thumb mode execution.
- **AArch64** – the new 64-bit instruction set architecture (ISA) defined by ARM.
- **ARMv7** – the specification of the “7th generation” ARM hardware, which only includes support for AArch32. This is the version of the ARM hardware that the first version of Windows for ARM supported.
- **ARMv8** – the specification of the “8th generation” ARM hardware, which includes support for both AArch32 and AArch64.

In addition to these definitions, in Windows we use these terms:

- **ARM** – refers to the 32-bit ARM architecture (AArch32). This is sometimes referred to as WoA (Windows on ARM).
- **ARM32** – same as ARM, above; used in this document for clarity.
- **ARM64** – refers to the 64-bit ARM architecture (AArch64). There is no such thing as WoA64.

Finally, when referring to data types, the following definitions from ARM are referenced:

- **Short-Vector** – this is a data type that is directly representable in SIMD; i.e., a vector of 8 or 16 bytes’ worth of elements, aligned to its size (either 8 or 16 bytes), where each element can be 1, 2, 4, or 8 bytes
- **HFA (Homogeneous Floating-point Aggregate)** – this is a data type with 2-4 identical floating-point members (either floats or doubles)
- **HVA (Homogeneous Short-Vector Aggregate)** – this is a data type with 2-4 identical Short-Vector members

## Base requirements

The ARM64 version of Windows presupposes that it is running on an ARMv8 or later architecture at all times. Both floating-point and NEON support are presumed to be present in hardware.

Although the ARMv8 specification allows for full support of AArch32 applications, there are currently no plans to support running existing ARM32 applications on the ARM64 version of Windows (i.e., no plans for WOW64). This is subject to reevaluation in the future, but it is the current working assumption.

The ARMv8 specification describes new optional crypto and CRC helper opcodes for both AArch32 and AArch64. Support for these is currently optional, but recommended. Code wishing to take advantage of these opcodes should perform runtime checks for their existence.

## Endianness

As with the ARM32 version of Windows, on ARM64 Windows executes in little-endian mode. Switching endianness is difficult to achieve without kernel mode support in AArch64, so it is easier to enforce.

## Alignment

Windows running on ARM64 enables the CPU hardware to handle misaligned accesses transparently. In an improvement from AArch32, this support now also works for all integer accesses (including multi-word accesses) and for floating-point accesses.

However, accesses to uncached (device) memory still must always be aligned. This means that if there is code which may be called upon to read/write misaligned data from uncached memory, it must play things safe and ensure that all accesses are aligned.

## Integer registers

The AArch64 architecture supports 32 integer registers, summarized below:

|Register|Volatile?|Role|
|-|-|-|
x0|Volatile|Parameter/scratch register 1, result register
x1-x7|Volatile|Parameter/scratch register 2-8
x8-x15|Volatile|Scratch registers
x16-x17|Volatile|Intra-procedure-call scratch registers
x18|Non-volatile|Platform register: in kernel mode, points to KPCR for the current processor; in user mode, points to TEB
x19-x28|Non-volatile|Scratch registers
x29/fp|Non-volatile|Frame pointer
x30/lr|Non-volatile|Link registers

Each register may be accessed as a full 64-bit value (via x0-x30) or as a 32-bit value (via w0-w30). 32-bit operations zero-extend their results up to 64 bits.

See the Parameter passing section for details on the use of the parameter registers.

Note that unlike AArch32, the PC and the SP are not indexed registers, and thus are limited in how they may be accessed. Also note that there is no x31 register (that encoding is used for special purposes).

The use of the frame pointer (x29) is required for compatibility with fast stack walking used by ETW and other services. It must point to the previous {x29,x30} pair on the stack.

## Floating-point/SIMD registers

The AArch64 architecture also supports 32 floating-point/SIMD registers, summarized below:

Register|Volatile?|Role
|-|-|-|
v0|Volatile|Parameter/scratch register 1, result register
v1-v7|Volatile|Parameter/scratch registers 2-8
v8-v15|Non-volatile|Scratch registers (note that only the low 64 bits are non-volatile)
v16-v31|Volatile|Scratch registers

Each register may be accessed as a full 128-bit value (via v0-v31 or q0-q31), as a 64-bit value (via d0-d31), as a 32-bit value (via s0-s31), as a 16-bit value (via h0-h31), or as an 8-bit value (via b0-b31). Accesses smaller than 128 bits access only the lower bits of the full 128-bit register, and leave the remaining bits untouched unless otherwise specified. (Note that this is significantly different from AArch32, where the smaller registers were packed on top of the larger registers.)

In addition to the data registers, the floating-point control register (FPCR) has certain requirements on the various bitfields within it:

Bits|Meaning|Volatile?|Role
|-|-|-|-|
26|AHP|Non-Volatile|Alternative half-precision control
25|DN|Non-Volatile|Default NaN mode control
24|FZ|Non-volatile|Flush-to-zero mode control
23-22|RMode|Non-volatile|Rounding mode control
15,12-8|IDE/IXE/etc|Non-Volatile|Exception trap enable bits, must always be 0

## System registers

Like AArch32, the AArch64 specification provides three system-controlled “thread ID” registers which are used/allocated as follows:

Register|Role
|-|-|
TPIDR_EL0|Reserved
TPIDRRO_EL0|Contains CPU number for current processor
TPIDR_EL1|Points to KPCR structure for current processor

## Floating-point exceptions

Support for IEEE floating-point exceptions is optional on AArch64 systems. For processor variants that do have hardware floating-point exceptions, the Windows kernel silently catches the exceptions and implicitly disables them in the FPCR register. This is to ensure normalized behavior across processor variants (otherwise, code developed on a platform without exception support may find itself taking unexpected exceptions when running on a platform with support).

## Parameter passing

For non-variadic functions, the Windows ABI follows the rules specified by ARM for parameter passing. These rules are excerpted directly from the Procedure Call Standard for the AArch64 Architecture:

### Stage A – Initialization

This stage is performed exactly once, before processing of the arguments commences.

1. The Next General-purpose Register Number (NGRN) is set to zero.

2. The Next SIMD and Floating-point Register Number (NSRN) is set to zero.

3. The next stacked argument address (NSAA) is set to the current stack-pointer value (SP).

### Stage B – Pre-padding and extension of arguments

For each argument in the list the first matching rule from the following list is applied. If no rule matches the argument is used unmodified.

1. If the argument type is a Composite Type whose size cannot be statically determined by both the caller and the callee, the argument is copied to memory and the argument is replaced by a pointer to the copy. (There are no such types in C/C++ but they exist in other languages or in language extensions).

2. If the argument type is an HFA or an HVA, then the argument is used unmodified.

3. If the argument type is a Composite Type that is larger than 16 bytes, then the argument is copied to memory allocated by the caller and the argument is replaced by a pointer to the copy.

4. If the argument type is a Composite Type then the size of the argument is rounded up to the nearest multiple of 8 bytes.

### Stage C – Assignment of arguments to registers and stack

For each argument in the list the following rules are applied in turn until the argument has been allocated. When an argument is assigned to a register any unused bits in the register have unspecified value. When an argument is assigned to a stack slot any unused padding bytes have unspecified value.

1. If the argument is a Half-, Single-, Double- or Quad- precision Floating-point or Short Vector Type and the NSRN is less than 8, then the argument is allocated to the least significant bits of register v[NSRN]. The NSRN is incremented by one. The argument has now been allocated.

2. If the argument is an HFA or an HVA and there are sufficient unallocated SIMD and Floating-point registers (NSRN + number of members ≤ 8), then the argument is allocated to SIMD and Floating-point Registers (with one register per member of the HFA or HVA). The NSRN is incremented by the number of registers used. The argument has now been allocated.

3. If the argument is an HFA or an HVA then the NSRN is set to 8 and the size of the argument is rounded up to the nearest multiple of 8 bytes.

4. If the argument is an HFA, an HVA, a Quad-precision Floating-point or Short Vector Type then the NSAA is rounded up to the larger of 8 or the Natural Alignment of the argument’s type.

5. If the argument is a Half- or Single- precision Floating Point type, then the size of the argument is set to 8 bytes. The effect is as if the argument had been copied to the least significant bits of a 64-bit register and the remaining bits filled with unspecified values.

6. If the argument is an HFA, an HVA, a Half-, Single-, Double- or Quad- precision Floating-point or Short Vector Type, then the argument is copied to memory at the adjusted NSAA. The NSAA is incremented by the size of the argument. The argument has now been allocated.

7. If the argument is an Integral or Pointer Type, the size of the argument is less than or equal to 8 bytes and the NGRN is less than 8, the argument is copied to the least significant bits in x[NGRN]. The NGRN is incremented by one. The argument has now been allocated.

8. If the argument has an alignment of 16 then the NGRN is rounded up to the next even number.

9. If the argument is an Integral Type, the size of the argument is equal to 16 and the NGRN is less than 7, the argument is copied to x[NGRN] and x[NGRN+1]. x[NGRN] shall contain the lower addressed double-word of the memory representation of the argument. The NGRN is incremented by two. The argument has now been allocated.

10. If the argument is a Composite Type and the size in double-words of the argument is not more than 8 minus NGRN, then the argument is copied into consecutive general-purpose registers, starting at x[NGRN]. The argument is passed as though it had been loaded into the registers from a double-word-aligned address with an appropriate sequence of LDR instructions loading consecutive registers from memory (the contents of any unused parts of the registers are unspecified by this standard). The NGRN is incremented by the number of registers used. The argument has now been allocated.

11. The NGRN is set to 8.

12. The NSAA is rounded up to the larger of 8 or the Natural Alignment of the argument’s type.. 

13. If the argument is a composite type then the argument is copied to memory at the adjusted NSAA. The NSAA is incremented by the size of the argument. The argument has now been allocated.

14. If the size of the argument is less than 8 bytes then the size of the argument is set to 8 bytes. The effect is as if the argument was copied to the least significant bits of a 64-bit register and the remaining bits filled with unspecified values.

15. The argument is copied to memory at the adjusted NSAA. The NSAA is incremented by the size of the argument. The argument has now been allocated.

### Addendum: Variadic functions

Functions that take a variable number of arguments are handled differently than above, as follows:

1. All composites are treated alike; no special treatment of HFAs or HVAs.

2. SIMD and Floating-point Registers are not used.

Effectively this equates to following rules C.12–C.15 to allocate arguments to an imaginary stack, where the first 64 bytes of the stack are loaded into x0-x7, and any remaining stack arguments are placed normally. 

## Return values

Integral values are returned in x0. Floating-point values are returned in s0/d0/v0 as appropriate.

For return-by-value that cannot be passed via registers, the caller shall reserve a block of memory of sufficient size and alignment to hold the result. The address of the memory block shall be passed as an additional argument to the function in x8 for POD type, or in x0 (or x1 if $this is passed in x0) for non-POD type. The callee may modify the result memory block at any point during the execution of the subroutine (there is no requirement for the callee to preserve the value stored in x8, but for non-POD, the address of this buffer must also be returned in x0 by callee).

## Stack

Following the ABI put forth by ARM, the stack must remain 16-byte aligned at all times. AArch64 contains a hardware feature that generates stack alignment faults whenever an SP-relative load or store is done and the SP is not 16-byte aligned. Windows runs with this feature enabled at all times.

Functions which allocate 4k or more worth of stack must ensure that each page prior to the final page is touched in order, thus ensuring no code can “leap over” the guard pages that Windows uses to expand the stack. Typically this is done by the `__chkstk` helper, which has a custom calling convention that passes the total stack allocation divided by 16 in x8.

## Red zone

The 16 byte area immediately below the current stack pointer is reserved for use by analysis and dynamic patching scenarios. This permits carefully-generated code to be inserted which stores 2 registers at [sp, #-16] and temporarily uses them for arbitrary purposes. The Windows kernel guarantees that those 16 bytes will not be overwritten if an exception or interrupt is taken, in both user and kernel mode.

## Kernel stack

The default kernel mode stack in Windows is six pages (24k). Pay extra attention to functions with large stack buffers in kernel mode. An ill-timed interrupt could come in with very little headroom and create a stack panic bugcheck.

## Stack walking

Code within Windows is compiled with frame pointers enabled ([/Oy-](../build/reference/oy-frame-pointer-omission.md)) to enable fast stack walking. The upshot of this is that x29 (fp) in general points to the next link in the chain, which is an {fp,lr} pair indicating the pointer to the previous frame on the stack and the return address. Third-party code is encouraged to enable frame pointers as well in order to allow for improved profiling and tracing.

## Exception unwinding

Unwinding during exception handling is assisted through the use of unwind codes. The unwind codes are a sequence of bytes stored in the .xdata section of the executable that describe the operation of the prologue and epilogue in an abstract manner such that the effects of a function’s prologue can be undone in preparation for backing up to the caller’s stack frame. For more information on the unwind codes, see [ARM64 exception handling](arm64-exception-handling.md).

The ARM EABI also specifies an exception unwinding model that leverages unwind codes. However, the specification as presented is not sufficient for unwinding in Windows, which must handle cases where the PC is in the middle of the prologue or epilogue of a function.

Code that is dynamically generated should be described with dynamic function tables via `RtlAddFunctionTable` and associated functions, so that the generated code can participate in exception handling.

## Cycle counter

All ARMv8 CPUs are required to support a cycle counter register. This is a 64-bit register that Windows configures to be readable at any exception level (including user mode). It can be accessed via the special PMCCNTR_EL0 register, using the MSR opcode in assembly code, or the `_ReadStatusReg` intrinsic in C/C++ code.

Note that the cycle counter here is a true cycle counter, not a wall clock, and thus the counting frequency will vary with the processor frequency. If you feel you must know the frequency of the cycle counter, you should not be using the cycle counter. Instead, you want to measure wall clock time, for which you should use `QueryPerformanceCounter`.

## See also

[Common Visual C++ ARM Migration Issues](../build/common-visual-cpp-arm-migration-issues.md)  
[ARM64 exception handling](../build/arm64-exception-handling.md)  
