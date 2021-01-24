---
description: "Learn more about: /Oy (Frame-Pointer Omission)"
title: "/Oy (Frame-Pointer Omission)"
ms.date: "11/19/2018"
f1_keywords: ["VC.Project.VCCLCompilerTool.OmitFramePointers", "/oy"]
helpviewer_keywords: ["omit frame pointer", "Oy compiler option [C++]", "stack frame pointer compiler option [C++]", "-Oy compiler option [C++]", "frame pointer omission compiler option [C++]", "suppress frame pointer creation", "/Oy compiler option [C++]"]
ms.assetid: c451da86-5297-4c5a-92bc-561d41379853
---
# /Oy (Frame-Pointer Omission)

Suppresses creation of frame pointers on the call stack.

## Syntax

> /Oy[-]

## Remarks

This option speeds function calls, because no frame pointers need to be set up and removed. It also frees one more register for general usage.

**/Oy** enables frame-pointer omission and **/Oy-** disables omission. In x64 compilers, **/Oy** and **/Oy-** are not available.

If your code requires frame-based addressing, you can specify the **/Oy-** option after the **/Ox** option or use [optimize](../../preprocessor/optimize.md) with the "**y**" and **off** arguments to gain maximum optimization with frame-based addressing. The compiler detects most situations where frame-based addressing is required (for instance, with the `_alloca` and `setjmp` functions and with structured exception handling).

The [/Ox (Enable Most Speed Optimizations)](ox-full-optimization.md) and [/O1, /O2 (Minimize Size, Maximize Speed)](o1-o2-minimize-size-maximize-speed.md) options imply **/Oy**. Specifying **/Oy-** after the **/Ox**, **/O1**, or **/O2** option disables **/Oy**, whether it is explicit or implied.

The **/Oy** compiler option makes using the debugger more difficult because the compiler suppresses frame pointer information. If you specify a debug compiler option ([/Z7, /Zi, /ZI](z7-zi-zi-debug-information-format.md)), we recommend that you specify the **/Oy-** option after any other optimization compiler options.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Optimization** property page.

1. Modify the **Omit Frame Pointers** property. This property adds or removes only the **/Oy** option. If you want to add the **/Oy-** option, select the **Command Line** property page and modify **Additional options**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>.

## See also

[/O Options (Optimize Code)](o-options-optimize-code.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
