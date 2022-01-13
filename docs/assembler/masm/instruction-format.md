---
description: Learn how instructions are formatted for translation by MASM.
title: "MASM instruction format"
ms.date: 09/21/2021
helpviewer_keywords: ["MASM (Microsoft Macro Assembler), instruction reference", "instruction format", "instructions [MASM]"]
no-loc: ["VEX", "REP"]
---
# MASM instruction format

## Syntax

Instructions are written in source code according to this syntax:

> [*prefix*](#prefix)  [*mnemonic*](#mnemonic)  [*operand-list*](#operand-list)

For information on instruction definitions, options, and encoding, see the [Processor Manufacturer Programming Manuals](../../assembler/masm/processor-manufacturer-programming-manuals.md). Some instructions and instruction options may not be supported by the Microsoft Macro Assembler.

## Prefix

You can prefix some instructions with keywords that set options for how the instruction is encoded. The **`REP`**, **`REPE`**, **`REPZ`**, **`REPNE`**, and **`REPNZ`** keywords are used with string instructions to do `memcpy` or `strlen` kinds of operations in a single instruction. The **`LOCK`** keyword makes certain operations on memory operands atomic. You can combine it with the **`XACQUIRE`** and **`XRELEASE`** keywords to do Hardware Lock Elision (HLE) on supported processors, which allows greater transactional parallelism in certain cases.

The remaining prefixes control how AVX instructions are encoded. AVX instructions are encoded using a **`VEX`** prefix, which appears before the opcode. It takes the place of certain byte instruction prefixes and opcode lead-in bytes. Many AVX instructions are also AVX-512 instructions, which are encoded using an **`EVEX`** prefix that supports [more options](#avx-512-options). MASM tries to encode instructions as compactly as possible, but these keywords allow more control over which encoding to use with a particular instruction. They're also used to force generation of AVX instruction forms that were introduced after the corresponding AVX-512 instruction. For example, `vex vpdpbusd` specifies the AVX-VNNI form of the `VPDPBUSD` instructions rather than the AVX512-VNNI form. When an AVX instruction appears without an explicit prefix keyword, the encoding chosen depends on the current AVX encoding setting. The [`OPTION AVXENCODING`](option-avxencoding-masm.md) directive lets you change this setting.

The **`VEX2`**, **`VEX3`**, **`VEX`**, and **`EVEX`** options are available in Visual Studio 2019 version 16.7 and later.

| Keyword | Usage |
|--|--|
| **`REP`** | Repeat the string operation by the count in (E)CX. |
| **`REPE`**<br>**`REPZ`** | Repeat the string operation while the comparison is equal, limited by the count in (E)CX. |
| **`REPNE`**<br>**`REPNZ`** | Repeat the string operation while the comparison is not-equal, limited by the count in (E)CX. |
| **`LOCK`** | Perform the operation atomically on a memory operand. |
| **`XACQUIRE`** | Begin an HLE transaction, most often used with **`LOCK`** prefix. |
| **`XRELEASE`** | Complete an HLE transaction, most often used with **`LOCK`** prefix. |
| **`VEX`** | Encode an AVX instruction using a **`VEX`** prefix. |
| **`VEX2`** | Encode an AVX instruction using a 2-byte **`VEX`** prefix. |
| **`VEX3`** | Encode an AVX instruction using a 3-byte **`VEX`** prefix. |
| **`EVEX`** | Encode an AVX instruction using an **`EVEX`** prefix. |

## Mnemonic

The mnemonic identifies a particular instruction, which determines the prefixes and operand patterns that are allowed.

## Operand list

Most instructions use an operand list to specify the explicit source and destination operands to the instruction. The operand list may contain memory references, registers, and constant values. Each instruction allows only certain types of operands to appear at each position in the operand list. Except for the `MOVS` and `CMPS` instructions, only one of the operands may be a memory reference; all other operands must be register references or constants.

## AVX-512 options

Some AVX-512 instructions allow more options to be specified. These options are: masking, zero-masking, embedded broadcast, embedded rounding, and exception suppression.

*Masking* allows an operation to be applied only to selected elements of a vector. This option is controlled by placing a mask register from `{k1}` to `{k7}` after the destination operand. If the mask register is followed by `{z}`, all non-selected elements of the destination are set to zero. This alternative is known as *zero-masking*.

*Embedded Broadcast* allows a scalar value in memory to be applied to all elements of a vector. This option is enabled by adding the element size and the keyword `BCST` to the memory operand, which is similar to the use of `PTR` for normal memory references.

*Embedded Rounding* controls the rounding mode for an individual floating-point instruction, without having to set and reset the global rounding mode. It's enabled by following the instruction with the rounding mode enclosed in braces. When enabled, it also suppresses all exceptions for only that instruction. Floating-point instructions that don't round can also suppress all exceptions using a similar option.

```asm
  ; Examples of AVX-512 options
  vaddps xmm1 {k1}, xmm2, xmm3            ; merge-masking
  vsubps ymm0 {k4}{z}, ymm1, ymm2         ; zero-masking
  vmulps zmm0, zmm1, dword bcst scalar    ; embedded broadcast
  vdivps zmm0, zmm1, zmm2 {rz-sae}        ; embedded rounding
  vmaxss xmm1, xmm2, xmm3 {sae}           ; suppress all exceptions
```

### Rounding modes

| Mode | Effect |
|--|--|
| **`rn-sae`** | Round to nearest, ties to even, suppress all exceptions. |
| **`rz-sae`** | Round toward zero, suppress all exceptions. |
| **`rd-sae`** | Round down (toward negative infinity), suppress all exceptions. |
| **`ru-sae`** | Round up (toward positive infinity), suppress all exceptions. |
| **`sae`** | Suppress all exceptions (no rounding needed). |

## See also

[Microsoft Macro Assembler Reference](microsoft-macro-assembler-reference.md)<br/>
[Processor Manufacturer Programming Manuals](../../assembler/masm/processor-manufacturer-programming-manuals.md)<br/>
