---
title: "/Qspectre-jmp"
description: "Describes the Microsoft C/C++ compiler (MSVC) /Qspectre-jmp option."
ms.date: 11/30/2023
helpviewer_keywords: ["/Qspectre-jmp"]
---
# `/Qspectre-jmp`

Causes the compiler to generate an `int3` instruction (software interrupt) after unconditional direct branches. This option extends the [`/Qspectre`](qspectre.md) flag and mitigates speculative execution side-channel attacks on unconditional direct branches.

## Syntax

> **/Qspectre-jmp**

## Remarks

**`/Qspectre-jmp`** causes the compiler to detect executable instructions following unconditional direct branches. An `int3` is inserted following unconditional direct branches to ensure that no instructions are speculatively executed beyond the branch. For example, the compiler mitigates `jmp addr` by adding an `int3` instruction following the `jmp` instruction as shown here:

```asm
jmp addr
int3
```

`/Qspectre-jmp` is off by default. It's supported for all optimization levels.

### Set this compiler option programmatically

To set this option programmatically, see [VCCLCompilerTool.AdditionalOptions property](/dotnet/api/microsoft.visualstudio.vcprojectengine.vcclcompilertool.additionaloptions).

## See also

[`/Qspectre`](qspectre.md)\
[`/Qspectre-jmp`](qspectre-jmp.md)\
[`/Qspectre-load`](qspectre-load.md)\
[`/Qspectre-load-cf`](qspectre-load-cf.md)\
[/Q options (Low-Level Operations)](q-options-low-level-operations.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
