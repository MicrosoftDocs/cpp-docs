---
title: "/Qspectre-load"
description: "Describes the Microsoft C/C++ compiler (MSVC) /Qspectre-load option."
ms.date: "01/28/2020"
helpviewer_keywords: ["/Qspectre-load"]
---
# /Qspectre-load

Specifies compiler generation of serializing instructions for every load instruction. This option extends the **/Qspectre** flag, mitigating against any possible **speculative execution side-channel attacks** based on loads.

## Syntax

> **/Qspectre-load**

## Remarks

**/Qspectre-load** causes the compiler to detect loads from memory, and insert serializing instructions after them. Control flow instructions that load memory, including `RET` and `CALL`, are split into a load and a control flow transfer. The load is followed by an `LFENCE` to ensure the load is protected. There are cases where the compiler can't split control flow instructions, such as the `jmp` instruction, so it uses an alternate mitigation technique. For example, the compiler mitigates `jmp [rax]` by adding instructions to load the target non-destructively before inserting an LFENCE, as shown here:

```asm
    xor rbx, [rax]
    xor rbx, [rax]  ; force a load of [rax]
    lfence          ; followed by an LFENCE
    jmp [rax]
```

Because **/Qspectre-load** stops speculation of all loads, the performance impact is high. The mitigation isn't appropriate everywhere. If there are performance critical blocks of code that don't require protection, you can disable these mitigations by using `__declspec(spectre(nomitigation))`. For more information, see [__declspec spectre](../../cpp/spectre.md).

The **/Qspectre-load** option is off by default, and supports all optimization levels.

The **/Qspectre-load** option is available in Visual Studio 2019 version 16.5 and later. This option is only available in compilers that target x86 and x64 processors. It's not available in compilers that target ARM processors.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

2. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

3. Select a new value for the **Spectre Mitigation** property. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q options (Low-Level Operations)](q-options-low-level-operations.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
