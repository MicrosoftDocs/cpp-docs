---
description: "Learn more about: Overview of ARM64 ABI conventions"
title: "Overview of ARM64 ABI conventions"
ms.date: "03/27/2019"
---
# Overview of ARM64 ABI conventions

The basic application binary interface (ABI) for Windows when compiled and run on ARM processors in 64-bit mode (ARMv8 or later architectures), for the most part, follows ARM's standard AArch64 EABI. This article highlights some of the key assumptions and changes from what is documented in the EABI. For information about the 32-bit ABI, see [Overview of ARM ABI conventions](overview-of-arm-abi-conventions.md). For more information about the standard ARM EABI, see [Application Binary Interface (ABI) for the ARM Architecture](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.subset.swdev.abi/index.html) (external link).

## Definitions

With the introduction of 64-bit support, ARM has defined several terms:

- **AArch32** – the legacy 32-bit instruction set architecture (ISA) defined by ARM, including Thumb mode execution.
- **AArch64** – the new 64-bit instruction set architecture (ISA) defined by ARM.
- **ARMv7** – the specification of the "7th generation" ARM hardware, which only includes support for AArch32. This version of the ARM hardware is the first version Windows for ARM supported.
- **ARMv8** – the specification of the "8th generation" ARM hardware, which includes support for both AArch32 and AArch64.

Windows also uses these terms:

- **ARM** – refers to the 32-bit ARM architecture (AArch32), sometimes referred to as WoA (Windows on ARM).
- **ARM32** – same as ARM, above; used in this document for clarity.
- **ARM64** – refers to the 64-bit ARM architecture (AArch64). There's no such thing as WoA64.

Finally, when referring to data types, the following definitions from ARM are referenced:

- **Short-Vector** – A data type directly representable in SIMD, a vector of 8 bytes or 16 bytes worth of elements. It's aligned to its size, either 8 bytes or 16 bytes, where each element can be 1, 2, 4, or 8 bytes.
- **HFA (Homogeneous Floating-point Aggregate)** – A data type with 2 to 4 identical floating-point members, either floats or doubles.
- **HVA (Homogeneous Short-Vector Aggregate)** – A data type with 2 to 4 identical Short-Vector members.

## Base requirements

The ARM64 version of Windows presupposes that it's running on an ARMv8 or later architecture at all times. Both floating-point and NEON support are presumed to be present in hardware.

The ARMv8 specification describes new optional crypto and CRC helper opcodes for both AArch32 and AArch64. Support for them is currently optional, but recommended. To take advantage of these opcodes, apps should first make runtime checks for their existence.

## Endianness

As with the ARM32 version of Windows, on ARM64 Windows executes in little-endian mode. Switching endianness is difficult to achieve without kernel mode support in AArch64, so it's easier to enforce.

## Alignment

Windows running on ARM64 enables the CPU hardware to handle misaligned accesses transparently. In an improvement from AArch32, this support now also works for all integer accesses (including multi-word accesses) and for floating-point accesses.

However, accesses to uncached (device) memory still must always be aligned. If code could possibly read or write misaligned data from uncached memory, it must make sure to align all accesses.

Default layout alignment for locals:

| Size in bytes | Alignment in bytes |
| - | - |
| 1 | 1 |
| 2 | 2 |
| 3, 4 | 4 |
| > 4 | 8 |

Default layout alignment for globals and statics:

| Size in bytes | Alignment in bytes |
| - | - |
| 1 | 1 |
| 2 - 7 | 4 |
| 8 - 63 | 8 |
| >= 64 | 16 |

## Integer registers

The AArch64 architecture supports 32 integer registers:

| Register | Volatile? | Role |
| - | - | - |
| x0 | Volatile | Parameter/scratch register 1, result register |
| x1-x7 | Volatile | Parameter/scratch register 2-8 |
| x8-x15 | Volatile | Scratch registers |
| x16-x17 | Volatile | Intra-procedure-call scratch registers |
| x18 | Non-volatile | Platform register: in kernel mode, points to KPCR for the current processor; in user mode, points to TEB |
| x19-x28 | Non-volatile | Scratch registers |
| x29/fp | Non-volatile | Frame pointer |
| x30/lr | Non-volatile | Link registers |

Each register may be accessed as a full 64-bit value (via x0-x30) or as a 32-bit value (via w0-w30). 32-bit operations zero-extend their results up to 64 bits.

See the Parameter passing section for details on the use of the parameter registers.

Unlike AArch32, the program counter (PC) and the stack pointer (SP) aren't indexed registers. They're limited in how they may be accessed. Also note that there's no x31 register. That encoding is used for special purposes.

The frame pointer (x29) is required for compatibility with fast stack walking used by ETW and other services. It must point to the previous {x29, x30} pair on the stack.

## Floating-point/SIMD registers

The AArch64 architecture also supports 32 floating-point/SIMD registers, summarized below:

| Register | Volatile? | Role |
| - | - | - |
| v0 | Volatile | Parameter/scratch register 1, result register |
| v1-v7 | Volatile | Parameter/scratch registers 2-8 |
| v8-v15 | Non-volatile | Scratch registers (only the low 64 bits are non-volatile) |
| v16-v31 | Volatile | Scratch registers |

Each register may be accessed as a full 128-bit value (via v0-v31 or q0-q31). It may be accessed as a 64-bit value (via d0-d31), as a 32-bit value (via s0-s31), as a 16-bit value (via h0-h31), or as an 8-bit value (via b0-b31). Accesses smaller than 128 bits only access the lower bits of the full 128-bit register. They leave the remaining bits untouched unless otherwise specified. (AArch64 is different from AArch32, where the smaller registers were packed on top of the larger registers.)

The floating-point control register (FPCR) has certain requirements on the various bitfields within it:

| Bits | Meaning | Volatile? | Role |
| - | - | - | - |
| 26 | AHP | Non-Volatile | Alternative half-precision control. |
| 25 | DN | Non-Volatile | Default NaN mode control. |
| 24 | FZ | Non-volatile | Flush-to-zero mode control. |
| 23-22 | RMode | Non-volatile | Rounding mode control. |
| 15,12-8 | IDE/IXE/etc | Non-Volatile | Exception trap enable bits, must always be 0. |

## System registers

Like AArch32, the AArch64 specification provides three system-controlled "thread ID" registers:

| Register | Role |
| - | - |
| TPIDR_EL0 | Reserved. |
| TPIDRRO_EL0 | Contains CPU number for current processor. |
| TPIDR_EL1 | Points to KPCR structure for current processor. |

## Floating-point exceptions

Support for IEEE floating-point exceptions is optional on AArch64 systems. For processor variants that do have hardware floating-point exceptions, the Windows kernel silently catches the exceptions and implicitly disables them in the FPCR register. This trap ensures normalized behavior across processor variants. Otherwise, code developed on a platform without exception support may find itself taking unexpected exceptions when running on a platform with support.

## Parameter passing

For non-variadic functions, the Windows ABI follows the rules specified by ARM for parameter passing. These rules are excerpted directly from the Procedure Call Standard for the AArch64 Architecture:

### Stage A – Initialization

This stage is done exactly once, before processing of the arguments begins.

1. The Next General-purpose Register Number (NGRN) is set to zero.

1. The Next SIMD and Floating-point Register Number (NSRN) is set to zero.

1. The next stacked argument address (NSAA) is set to the current stack-pointer value (SP).

### Stage B – Pre-padding and extension of arguments

For each argument in the list, the first matching rule from the following list is applied. If no rule matches, the argument is used unmodified.

1. If the argument type is a Composite Type whose size can't be statically determined by both the caller and the callee, the argument is copied to memory and the argument is replaced by a pointer to the copy. (There are no such types in C/C++ but they exist in other languages or in language extensions).

1. If the argument type is an HFA or an HVA, then the argument is used unmodified.

1. If the argument type is a Composite Type larger than 16 bytes, then the argument is copied to memory allocated by the caller, and the argument is replaced by a pointer to the copy.

1. If the argument type is a Composite Type, then the size of the argument is rounded up to the nearest multiple of 8 bytes.

### Stage C – Assignment of arguments to registers and stack

For each argument in the list, the following rules are applied in turn until the argument has been allocated. When an argument is assigned to a register, any unused bits in the register have unspecified value. If an argument is assigned to a stack slot, any unused padding bytes have unspecified value.

1. If the argument is a Half-, Single-, Double- or Quad-precision Floating-point or Short Vector Type, and the NSRN is less than 8, then the argument is allocated to the least significant bits of register v\[NSRN]. The NSRN is incremented by one. The argument has now been allocated.

1. If the argument is an HFA or an HVA, and there are sufficient unallocated SIMD and Floating-point registers (NSRN + number of members ≤ 8), then the argument is allocated to SIMD and Floating-point Registers, one register per member of the HFA or HVA. The NSRN is incremented by the number of registers used. The argument has now been allocated.

1. If the argument is an HFA or an HVA, then the NSRN is set to 8, and the size of the argument is rounded up to the nearest multiple of 8 bytes.

1. If the argument is an HFA, an HVA, a Quad-precision Floating-point or Short Vector Type, then the NSAA is rounded up to the larger of 8 or the Natural Alignment of the argument's type.

1. If the argument is a Half- or Single-precision Floating Point type, then the size of the argument is set to 8 bytes. The effect is as if the argument had been copied to the least significant bits of a 64-bit register, and the remaining bits filled with unspecified values.

1. If the argument is an HFA, an HVA, a Half-, Single-, Double-, or Quad-precision Floating-point or Short Vector Type, then the argument is copied to memory at the adjusted NSAA. The NSAA is incremented by the size of the argument. The argument has now been allocated.

1. If the argument is an Integral or Pointer Type, the size of the argument is less than or equal to 8 bytes, and the NGRN is less than 8, the argument is copied to the least significant bits in x\[NGRN]. The NGRN is incremented by one. The argument has now been allocated.

1. If the argument has an alignment of 16, then the NGRN is rounded up to the next even number.

1. If the argument is an Integral Type, the size of the argument is equal to 16, and the NGRN is less than 7, the argument is copied to x\[NGRN] and x\[NGRN+1]. x\[NGRN] shall contain the lower addressed double-word of the memory representation of the argument. The NGRN is incremented by two. The argument has now been allocated.

1. If the argument is a Composite Type, and the size in double-words of the argument is no more than 8 minus NGRN, then the argument is copied into consecutive general-purpose registers, starting at x\[NGRN]. The argument is passed as though it had been loaded into the registers from a double-word-aligned address, with an appropriate sequence of LDR instructions that load consecutive registers from memory. The contents of any unused parts of the registers are unspecified by this standard. The NGRN is incremented by the number of registers used. The argument has now been allocated.

1. The NGRN is set to 8.

1. The NSAA is rounded up to the larger of 8 or the Natural Alignment of the argument's type.

1. If the argument is a composite type, then the argument is copied to memory at the adjusted NSAA. The NSAA is incremented by the size of the argument. The argument has now been allocated.

1. If the size of the argument is less than 8 bytes, then the size of the argument is set to 8 bytes. The effect is as if the argument was copied to the least significant bits of a 64-bit register, and the remaining bits were filled with unspecified values.

1. The argument is copied to memory at the adjusted NSAA. The NSAA is incremented by the size of the argument. The argument has now been allocated.

### Addendum: Variadic functions

Functions that take a variable number of arguments are handled differently than above, as follows:

1. All composites are treated alike; no special treatment of HFAs or HVAs.

1. SIMD and Floating-point Registers aren't used.

Effectively, it's the same as following rules C.12–C.15 to allocate arguments to an imaginary stack, where the first 64 bytes of the stack are loaded into x0-x7, and any remaining stack arguments are placed normally.

## Return values

Integral values are returned in x0.

Floating-point values are returned in s0, d0, or v0, as appropriate.

HFA and HVA values are returned in s0-s3, d0-d3, or v0-v3, as appropriate.

Types returned by value are handled differently depending on whether they have certain properties, and whether the function is a non-static member function. Types which have all of these properties,

- they're *aggregate* by the C++14 standard definition, that is, they have no user-provided constructors, no private or protected non-static data members, no base classes, and no virtual functions, and
- they have a trivial copy-assignment operator, and
- they have a trivial destructor,

and are returned by non-member functions or static member functions, use the following return style:

- Types less than or equal to 8 bytes are returned in x0.
- Types less than or equal to 16 bytes are returned in x0 and x1, with x0 containing the lower-order 8 bytes.
- For types greater than 16 bytes, the caller shall reserve a block of memory of sufficient size and alignment to hold the result. The address of the memory block shall be passed as an additional argument to the function in x8. The callee may modify the result memory block at any point during the execution of the subroutine. The callee isn't required to preserve the value stored in x8.

All other types use this convention:

- The caller shall reserve a block of memory of sufficient size and alignment to hold the result. The address of the memory block shall be passed as an additional argument to the function in x0, or x1 if $this is passed in x0. The callee may modify the result memory block at any point during the execution of the subroutine. The callee returns the address of the memory block in x0.

## Stack

Following the ABI put forth by ARM, the stack must remain 16-byte aligned at all times. AArch64 contains a hardware feature that generates stack alignment faults whenever the SP isn't 16-byte aligned and an SP-relative load or store is done. Windows runs with this feature enabled at all times.

Functions that allocate 4k or more worth of stack must ensure that each page prior to the final page is touched in order. This action ensures no code can "leap over" the guard pages that Windows uses to expand the stack. Typically the touching is done by the `__chkstk` helper, which has a custom calling convention that passes the total stack allocation divided by 16 in x15.

## Red zone

The 16-byte area immediately below the current stack pointer is reserved for use by analysis and dynamic patching scenarios. This area permits carefully generated code to be inserted which stores two registers at [sp, #-16] and temporarily uses them for arbitrary purposes. The Windows kernel guarantees that those 16 bytes aren't overwritten if an exception or interrupt is taken, in both user and kernel mode.

## Kernel stack

The default kernel mode stack in Windows is six pages (24k). Pay extra attention to functions with large stack buffers in kernel mode. An ill-timed interrupt could come in with little headroom and create a stack panic bug check.

## Stack walking

Code within Windows is compiled with frame pointers enabled ([/Oy-](reference/oy-frame-pointer-omission.md)) to enable fast stack walking. Generally, x29 (fp) points to the next link in the chain, which is an {fp, lr} pair, indicating the pointer to the previous frame on the stack and the return address. Third-party code is encouraged to enable frame pointers as well, to allow for improved profiling and tracing.

## Exception unwinding

Unwinding during exception handling is assisted through the use of unwind codes. The unwind codes are a sequence of bytes stored in the .xdata section of the executable. They describe the operation of the prologue and epilogue in an abstract manner, such that the effects of a function's prologue can be undone in preparation for backing up to the caller's stack frame. For more information on the unwind codes, see [ARM64 exception handling](arm64-exception-handling.md).

The ARM EABI also specifies an exception unwinding model that uses unwind codes. However, the specification as presented is insufficient for unwinding in Windows, which must handle cases where the PC is in the middle of a function prologue or epilogue.

Code that is dynamically generated should be described with dynamic function tables via `RtlAddFunctionTable` and associated functions, so that the generated code can participate in exception handling.

## Cycle counter

All ARMv8 CPUs are required to support a cycle counter register, a 64-bit register that Windows configures to be readable at any exception level, including user mode. It can be accessed via the special PMCCNTR_EL0 register, using the MSR opcode in assembly code, or the `_ReadStatusReg` intrinsic in C/C++ code.

The cycle counter here is a true cycle counter, not a wall clock. The counting frequency will vary with the processor frequency. If you feel you must know the frequency of the cycle counter, you shouldn't be using the cycle counter. Instead, you want to measure wall clock time, for which you should use `QueryPerformanceCounter`.

## See also

[Common Visual C++ ARM Migration Issues](common-visual-cpp-arm-migration-issues.md)<br/>
[ARM64 exception handling](arm64-exception-handling.md)
