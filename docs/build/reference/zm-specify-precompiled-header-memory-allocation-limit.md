---
description: "Learn more about: /Zm (Specify Precompiled Header Memory Allocation Limit)"
title: "/Zm (Specify Precompiled Header Memory Allocation Limit)"
ms.date: "03/08/2019"
f1_keywords: ["/zm"]
helpviewer_keywords: ["PCH files, memory allocation limit", "Zm compiler option [C++]", "/Zm compiler option [C++]", "precompiled header files, memory allocation limit", "Specify Precompiled Header Memory Allocation Limit compiler option", "cl.exe compiler, memory allocation limit", ".pch files, memory allocation limit", "memory allocation, Memory Allocation Limit compiler option", "-Zm compiler option [C++]"]
ms.assetid: 94c77d5e-6672-46a7-92e0-3f69e277727d
---
# /Zm (Specify Precompiled Header Memory Allocation Limit)

Determines the amount of memory that the compiler allocates to construct precompiled headers.

## Syntax

```
/Zmfactor
```

## Arguments

*factor*<br/>
A scaling factor that determines the amount of memory that the compiler uses to construct precompiled headers.

The *factor* argument is a percentage of the default size of a compiler-defined work buffer. The default value of *factor* is 100 (percent), but you can specify larger or smaller amounts.

## Remarks

In versions before Visual Studio 2015, the C++ compiler used several discrete heaps, and each had a finite limit. Currently, the compiler dynamically grows the heaps as necessary up to a total heap size limit, and allows the precompiled header to comprise multiple address ranges. Consequently, the **/Zm** compiler option is rarely necessary.

If the compiler runs out of heap space and emits the [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) error message when you use the **/Zm** compiler option, you might have reserved too much memory. Consider removing the **/Zm** option.

If the compiler emits the [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) error message, an accompanying [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) message specifies the *factor* argument to use when you recompile by using the **/Zm** compiler option. This message is only significant when a precompiled header uses `#pragma hdrstop`. In other cases, it is a spurious error caused by Windows virtual memory pressure issues, and the recommendation to use the **/Zm** option should be ignored. Instead, consider reducing the number of parallel processes when using the **/maxcpucount** option to MSBUILD.EXE in conjunction with the **/MP** option to CL.EXE. For more information, see [Precompiled Header (PCH) issues and recommendations](https://devblogs.microsoft.com/cppblog/precompiled-header-pch-issues-and-recommendations/).

The following table shows how the *factor* argument affects the memory allocation limit if you assume the size of the default precompiled header buffer is 75 MB.

|Value of *factor*|Memory allocation limit|
|-----------------------|-----------------------------|
|10|7.5 MB|
|100|75 MB|
|200|150 MB|
|1000|750 MB|
|2000|1500 MB|

## Other Ways to Set the Memory Allocation Limit

### To set the /Zm compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the navigation pane, select **Configuration Properties** > **C/C++** > **Command Line**.

1. Enter the **/Zm** compiler option in the **Additional Options** box.

### To set the /Zm compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
