---
title: "/Qspectre-load-cf"
description: "Describes the Microsoft C/C++ compiler (MSVC) /Qspectre-load-cf option."
ms.date: "01/28/2020"
helpviewer_keywords: ["/Qspectre-load-cf"]
no-loc: [Qspectre-load-cf]
---
# /Qspectre-load-cf

Specifies compiler generation of serializing instructions for every control-flow instruction that contains a load. This option performs a subset of the mitigations done by the [/Qspectre-load](qspectre-load.md) option.

## Syntax

> **/Qspectre-load-cf**

## Remarks

**/Qspectre-load-cf** causes the compiler to detect `JMP`, `RET`, and `CALL` control-flow instructions that load from memory, and to insert serializing instructions after the load. Where possible, these instructions are split into a load and a control flow transfer. The load is followed by an `LFENCE` to ensure the load is protected. There are cases where the compiler can't split instructions, such as the `JMP` instruction, so it uses an alternate mitigation technique. For example, the compiler mitigates `jmp [rax]` by adding instructions to load the target non-destructively before inserting an LFENCE, as shown here:

```asm
    xor rbx, [rax]
    xor rbx, [rax]  ; force a load of [rax]
    lfence          ; followed by an LFENCE
    jmp [rax]
```

Because **/Qspectre-load-cf** stops speculation of all loads in control-flow instructions, the performance impact is high. The mitigation isn't appropriate everywhere. If there are performance critical blocks of code that don't require protection, you can disable these mitigations by using `__declspec(spectre(nomitigation))`.

The **/Qspectre-load-cf** option is off by default, and supports all optimization levels.

The **/Qspectre-load-cf** option is available in Visual Studio 2019 version 16.5 and later. This option is only available in compilers that target x86 and x64 processors. It's not available in compilers that target ARM processors.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

2. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

3. Select a new value for the **Spectre Mitigation** property. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q options (Low-level operations)](q-options-low-level-operations.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
