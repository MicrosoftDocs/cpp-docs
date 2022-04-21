---
description: "Learn more about: /Qfast_transcendentals (Force fast transcendentals)"
title: "/Qfast_transcendentals (Force fast transcendentals)"
ms.date: 03/02/2022
f1_keywords: ["/Qfast_transcendentals"]
helpviewer_keywords: ["/Qfast_transcendentals", "Force Fast Transcendentals"]
ms.assetid: 4de24bd1-38e6-49d4-9a05-04c9937d24ac
---
# `/Qfast_transcendentals` (Force fast transcendentals)

Generates inline code for transcendental functions.

## Syntax

> **`/Qfast_transcendentals`**

## Remarks

This compiler option forces transcendental functions to be converted to inline code to improve execution speed. This option has an effect only when paired with **`/fp:except`** or **`/fp:precise`**. Generating inline code for transcendental functions is already the default behavior under **`/fp:fast`**.

This option is incompatible with **`/fp:strict`**. For more information about floating point compiler options, see [`/fp` (Specify Floating-Point Behavior)](fp-specify-floating-point-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/Q` Options (Low-level operations)](q-options-low-level-operations.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
