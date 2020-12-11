---
description: "Learn more about: ARM Assembler diagnostic messages"
title: "ARM Assembler diagnostic messages"
ms.date: "08/30/2018"
f1_keywords: ["A2193", "A2196", "A2202", "A2513", "A2557", "A4228", "A4508", "A4509"]
helpviewer_keywords: ["A2193", "A2196", "A2202", "A2513", "A2557", "A4228", "A4508", "A4509"]
ms.assetid: 52b38267-6023-4bdc-a0ef-863362f48eec
---
# ARM Assembler diagnostic messages

The Microsoft ARM assembler (*armasm*) emits diagnostic warnings and errors when it encounters them. This article describes the most commonly-encountered messages.

## Syntax

> <em>filename</em>**(**<em>line-number</em>**) :** \[**error**|**warning**] **A**<em>number</em>**:** *message*

## Diagnostic messages - Errors

> A2193: this instruction generates unpredictable behavior

The ARM architecture cannot guarantee what happens when this instruction is executed.  For details about the well-defined forms of this instruction, consult the [ARM Architecture Reference Manual](https://go.microsoft.com/fwlink/p/?linkid=246464).

```asm
    ADD r0, r8, pc         ; A2193: this instruction generates unpredictable behavior
```

> A2196: instruction cannot be encoded in 16 bits

The specified instruction cannot be encoded as a 16-bit Thumb instruction.  Specify a 32-bit instruction, or rearrange code to bring the target label into the range of a 16-bit instruction.

The assembler may attempt to encode a branch in 16 bits and fail with this error, even though a 32-bit branch is encodable. You can solve this problem by using the `.W` specifier to explicitly mark the branch as 32-bit.

```asm
    ADD.N r0, r1, r2      ; A2196: instruction cannot be encoded in 16 bits

    B.W label             ; OK
    B.N label             ; A2196: instruction cannot be encoded in 16 bits
    SPACE 10000
label
```

> A2202: Pre-UAL instruction syntax not allowed in THUMB region

Thumb code must use the Unified Assembler Language (UAL) syntax.  The old syntax is no longer accepted

```asm
    ADDEQS r0, r1         ; A2202: Pre-UAL instruction syntax not allowed in THUMB region
    ADDSEQ r0, r1         ; OK
```

> A2513: Rotation must be even

In ARM mode, there is an alternate syntax for specifying constants.  Instead of writing `#<const>`, you can write `#<byte>,#<rot>`, which represents the constant value that is obtained by rotating the value `<byte>` right by `<rot>`.  When you use this syntax, you must make the value of `<rot>` even.

```asm
    MOV r0, #4, #2       ; OK
    MOV r0, #4, #1       ; A2513: Rotation must be even
```

> A2557: Incorrect number of bytes to write back

On the NEON structure load and store instructions (`VLDn`, `VSTn`), there is an alternate syntax for specifying writeback to the base register.  Instead of putting an exclamation point (!) after the address, you can specify an immediate value that indicates the offset to be added to the base register.  If you use this syntax, you must specify the exact number of bytes that were loaded or stored by the instruction.

```asm
    VLD1.8 {d0-d3}, [r0]!         ; OK
    VLD1.8 {d0-d3}, [r0], #32     ; OK
    VLD1.8 {d0-d3}, [r0], #100    ; A2557: Incorrect number of bytes to write back
```

## Diagnostic messages - Warnings

> A4228: Alignment value exceeds AREA alignment; alignment not guaranteed

The alignment that is specified in an `ALIGN` directive is greater than the alignment of the enclosing `AREA`.  As a result, the assembler cannot guarantee that the `ALIGN` directive will be honored.

To fix this, you can specify on the `AREA` directive an `ALIGN` attribute that is equal to or greater than the desired alignment.

```asm
AREA |.myarea1|
ALIGN 8           ; A4228: Alignment value exceeds AREA alignment; alignment not guaranteed

AREA |.myarea2|,ALIGN=3
ALIGN 8           ; OK
```

> A4508: Use of this rotated constant is deprecated

In ARM mode, there is an alternate syntax for specifying constants.  Instead of writing `#<const>`, you can write `#<byte>,#<rot>`, which represents the constant value that is obtained by rotating the value `<byte>` right by `<rot>`.  In some contexts, ARM has deprecated the use of these rotated constants. In these cases, use the basic `#<const>` syntax instead.

```asm
    ANDS r0, r0, #1                ; OK
    ANDS r0, r0, #4, #2            ; A4508: Use of this rotated constant is deprecated
```

> A4509: This form of conditional instruction is deprecated

This form of conditional instruction has been deprecated by ARM in the ARMv8 architecture. We recommend that you change the code to use conditional branches. To see which conditional instructions are still supported, consult the [ARM Architecture Reference Manual](https://go.microsoft.com/fwlink/p/?linkid=246464).

This warning is not emitted when the **-oldit** command-line switch is used.

```asm
    ADDEQ r0, r1, r8              ; A4509: This form of conditional instruction is deprecated
```

## See also

[ARM Assembler Command-Line Reference](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[ARM Assembler Directives](../../assembler/arm/arm-assembler-directives.md)<br/>
