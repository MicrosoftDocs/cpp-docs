---
title: "OPTION AVXENCODING"
ms.date: "10/06/2020"
f1_keywords: ["avxencoding"]
helpviewer_keywords: ["OPTION AVXENCODING directive"]
description: Describes how to select the preferred encoding of AVX instructions when more than one possibility will work
---
# OPTION AVXENCODING

Selects the preferred encoding of AVX instructions.

## Syntax

> **`OPTION AVXENCODING:`** *preference*

## Background

Intel AVX and AVX-512 instructions are encoded differently from other Intel Architecture instructions. Rather than relying on instruction prefix bytes and opcode lead-in bytes to select an instruction, they use a single multi-byte prefix. This prefix can encode an additional register operand. In 64-bit mode, it also has bits to select registers 8 through 15 for the other operands, and a REX prefix isn't needed.

Three different multi-byte prefixes are used. AVX instructions can be encoded with a 3-byte VEX prefix, where the second and third bytes help to select the specific operation executed. If some of the fields in the 3-byte VEX prefix have specific values, a 2-byte form of the VEX prefix can be used instead. Finally, some AVX instructions also have an AVX-512 form, which is encoded with a 4-byte EVEX prefix. The EVEX prefix has an additional fields to select 512-bit vector length and other options specific to AVX-512 instructions.

Because some AVX instructions might be encoded in up to three different ways, there are rules to select which form to use. The **`OPTION AVXENCODING`** directive is used to select which set of rules to use.

## Preferences

| Preference | Encoding preference priority |
|--|--|
| **`PREFER_FIRST`** | Use first defined form if possible. |
| **`PREFER_VEX`** | Use `VEX` encoding in preference to `EVEX` encoding. |
| **`PREFER_VEX3`** | Use 3-byte `VEX` encoding in preference to `EVEX` encoding. |
| **`PREFER_EVEX`** | Use `EVEX` encoding in preference to `VEX` encoding. |
| **`NO_EVEX`** | Don't encode using `EVEX`. |

The AVXENCODING order applies only if the instruction prefix form isn't specified for the instruction. If the instruction prefix is explicitly coded, it takes precedence over the **`AVXENCODING`** option. For example, `evex vpmaddwd` will use **`EVEX`**-prefixed `VPMADDWD` even if `OPTION AVXENCODING:no_EVEX` is specified.

If an assembly source doesn't use `OPTION AVXENCODING` to select encoding preferences, the **`PREFER_FIRST`** rules are used by default. By these rules, the earliest instruction encodings added to Microsoft Macro Assembler (MASM) have precedence, and among those possibilities the encoding with the shortest prefix form is preferred. These rules ensure that code assembled by MASM still generates the same object code if new instruction forms are added later.

The **`PREFER_VEX`** rules always tries to encode with a **`VEX`** prefix before trying to encode with **`EVEX`**. If possible, the 2-byte form of **`VEX`** is used instead of the 3-byte form.

The **`PREFER_VEX3`** preference always tries to encode with a 3-byte **`VEX`** prefix before trying to encode with **`EVEX`**. The 2-byte form of **`VEX`** won't be used.

The **`PREFER_EVEX`** option always tries to encode with an **`EVEX`** prefix, and only tries to use **`VEX`** if the instruction has no AVX-512 form.

The **`NO_EVEX`** preference only tries to encode by using a **`VEX`** prefix. No AVX-512 instruction forms are allowed. This option lets you assemble code for use on platforms that have no AVX-512 support at all.

The **`OPTION AVXENCODING`** directive is available in Visual Studio 2019 version 16.7 and later.

### Example

This example uses `VPDPBUSD` and `VPMADDWD` instructions to illustrate how the **`AVXENCODING`** option works. `VPDPBUSD` was first defined to be encoded only with `EVEX`, and was later extended with a VEX-encoded form for platforms without AVX-512 support, while `VPMADDWD` was AVX and extended to AVX-512. The listing output from assembling the example shows how changing the **`AVXENCODING`** mode affects the object code generated for each instruction. The prefix for each instruction ends at the '/".

```asm
 00000000  62 F2 6D 08/ 50        vpdpbusd xmm1, xmm2, xmm3
           CB
 00000006  C5 E9/ F5 CB           vpmaddwd xmm1, xmm2, xmm3

                                  option avxencoding:no_EVEX
 0000000A  C4 E2 69/ 50 CB        vpdpbusd xmm1, xmm2, xmm3
 0000000F  C5 E9/ F5 CB           vpmaddwd xmm1, xmm2, xmm3

                                  option avxencoding:prefer_VEX
 00000013  C4 E2 69/ 50 CB        vpdpbusd xmm1, xmm2, xmm3
 00000018  C5 E9/ F5 CB           vpmaddwd xmm1, xmm2, xmm3

                                  option avxencoding:prefer_VEX3
 0000001C  C4 E2 69/ 50 CB        vpdpbusd xmm1, xmm2, xmm3
 00000021  C4 E1 69/ F5 CB        vpmaddwd xmm1, xmm2, xmm3

                                  option avxencoding:prefer_EVEX
 00000026  62 F2 6D 08/ 50        vpdpbusd xmm1, xmm2, xmm3
           CB
 0000002C  62 F1 6D 08/ F5        vpmaddwd xmm1, xmm2, xmm3
           CB

                                  option avxencoding:prefer_first
 00000032  62 F2 6D 08/ 50        vpdpbusd xmm1, xmm2, xmm3
           CB
 00000038  C5 E9/ F5 CB           vpmaddwd xmm1, xmm2, xmm3
```

## See also

[Option (MASM)](option-masm.md)\
[Directives Reference](directives-reference.md)
