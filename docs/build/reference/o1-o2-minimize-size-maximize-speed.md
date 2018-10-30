---
title: "/O1, /O2 (Minimize Size, Maximize Speed)"
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
|**/O1** (Minimize Size)|[/Og](../../build/reference/og-global-optimizations.md) [/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) [/Oy](../../build/reference/oy-frame-pointer-omission.md) [/Ob2](../../build/reference/ob-inline-function-expansion.md) [/GF](../../build/reference/gf-eliminate-duplicate-strings.md) [/Gy](../../build/reference/gy-enable-function-level-linking.md)|
|**/O2** (Maximize Speed)|[/Og](../../build/reference/og-global-optimizations.md) [/Oi](../../build/reference/oi-generate-intrinsic-functions.md) [/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) [/Oy](../../build/reference/oy-frame-pointer-omission.md) [/Ob2](../../build/reference/ob-inline-function-expansion.md) [/GF](../../build/reference/gf-eliminate-duplicate-strings.md) [/Gy](../../build/reference/gy-enable-function-level-linking.md)|

**/O1** and **/O2** are mutually exclusive.

> [!NOTE]
> **x86 Specific**
> These options imply the use of the Frame-Pointer Omission ([/Oy](../../build/reference/oy-frame-pointer-omission.md)) option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Under **Configuration Properties**, open **C/C++** and then choose the **Optimization** property page.

1. Modify the **Optimization** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## See Also

[/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)<br/>
[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)<br/>
[/EH (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md)
