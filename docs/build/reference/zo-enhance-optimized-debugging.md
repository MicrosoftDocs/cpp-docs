---
description: "Learn more about: /Zo (Enhance Optimized Debugging)"
title: "/Zo (Enhance Optimized Debugging)"
ms.date: "11/04/2016"
f1_keywords: ["-Zo", "/Zo"]
helpviewer_keywords: ["Zo compiler option [C++]", "/Zo compiler option [C++]", "-Zo compiler option [C++]"]
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
---
# /Zo (Enhance Optimized Debugging)

Generate enhanced debugging information for optimized code in non-debug builds.

## Syntax

```cpp
/Zo[-]
```

## Remarks

The **/Zo** compiler switch generates enhanced debugging information for optimized code. Optimization may use registers for local variables, reorder code, vectorize loops, and inline function calls. These optimizations can obscure the relationship between the source code and the compiled object code. The **/Zo** switch tells the compiler to generate additional debugging information for local variables and inlined functions. Use it to see variables in the **Autos**, **Locals**, and **Watch** windows when you step through optimized code in the Visual Studio debugger. It also enables stack traces to show inlined functions in the WinDBG debugger. Debug builds that have disabled optimizations ([/Od](od-disable-debug.md)) do not need the additional debugging information generated when **/Zo** is specified. Use the **/Zo** switch to debug Release configurations with optimization turned on. For more information on optimization switches, see [/O Options (Optimize Code)](o-options-optimize-code.md). The **/Zo** option is enabled by default in Visual Studio when you specify debugging information with **/Zi** or **/Z7**. Specify **/Zo-** to explicitly disable this compiler option.

The **/Zo** switch is available starting in Visual Studio 2013 Update 3, and it replaces the previously undocumented **/d2Zi+** switch.

### To set the /Zo compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties**, **C/C++** folder.

1. Select the **Command Line** property page.

1. Modify the **Additional Options** property to include `/Zo` and then choose **OK**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/O Options (Optimize Code)](o-options-optimize-code.md)<br/>
[/Z7, /Zi, /ZI (Debug Information Format)](z7-zi-zi-debug-information-format.md)<br/>
[Edit and Continue](/visualstudio/debugger/edit-and-continue)
