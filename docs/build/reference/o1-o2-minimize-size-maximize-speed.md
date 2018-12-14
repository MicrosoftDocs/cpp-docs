---
title: "/O1, /O2 (Minimize Size, Maximize Speed) (C++) - Visual Studio"
ms.date: "09/25/2017"
f1_keywords: ["/o2", "/o1"]
helpviewer_keywords: ["maximize speed compiler option [C++]", "minimize size compiler option [C++]", "-O2 compiler option [C++]", "fast code", "small code", "O2 compiler option [C++]", "/O2 compiler option [C++]", "-O1 compiler option [C++]", "O1 compiler option [C++]", "/O1 compiler option [C++]"]
ms.assetid: 2d1423f5-53d9-44da-8908-b33a351656c2
---
# /O1, /O2 (Minimize Size, Maximize Speed)

Selects a predefined set of options that affect the size and speed of generated code.

## Syntax

> /O1
> /O2

## Remarks

The **/O1** and **/O2** compiler options are a quick way to set several specific optimization options at once. The **/O1** option sets the individual optimization options that create the smallest code in the majority of cases. The **/O2** option sets the options that create the fastest code in the majority of cases. The **/O2** option is the default for release builds. This table shows the specific options that are set by **/O1** and **/O2**:

|Option|Equivalent to|
|------------|-------------------|
|**/O1** (Minimize Size)|[/Og](og-global-optimizations.md) [/Os](os-ot-favor-small-code-favor-fast-code.md) [/Oy](oy-frame-pointer-omission.md) [/Ob2](ob-inline-function-expansion.md) [/GF](gf-eliminate-duplicate-strings.md) [/Gy](gy-enable-function-level-linking.md)|
|**/O2** (Maximize Speed)|[/Og](og-global-optimizations.md) [/Oi](oi-generate-intrinsic-functions.md) [/Ot](os-ot-favor-small-code-favor-fast-code.md) [/Oy](oy-frame-pointer-omission.md) [/Ob2](ob-inline-function-expansion.md) [/GF](gf-eliminate-duplicate-strings.md) [/Gy](gy-enable-function-level-linking.md)|

**/O1** and **/O2** are mutually exclusive.

> [!NOTE]
> **x86 Specific**
> These options imply the use of the Frame-Pointer Omission ([/Oy](oy-frame-pointer-omission.md)) option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set compiler and build properties](../working-with-project-properties.md).

1. Under **Configuration Properties**, open **C/C++** and then choose the **Optimization** property page.

1. Modify the **Optimization** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## See Also

[/O Options (Optimize Code)](o-options-optimize-code.md)<br/>
[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)<br/>
[/EH (Exception Handling Model)](eh-exception-handling-model.md)
