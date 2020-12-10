---
description: "Learn more about: /Qpar (Auto-Parallelizer)"
title: "/Qpar (Auto-Parallelizer)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration"]
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
---
# /Qpar (Auto-Parallelizer)

Enables the [Auto-Parallelizer](../../parallel/auto-parallelization-and-auto-vectorization.md) feature of the compiler to automatically parallelize loops in your code.

## Syntax

```
/Qpar
```

## Remarks

When  the compiler automatically parallelizes loops in code, it spreads computation across multiple processor cores. A loop is parallelized only if the compiler determines that it is legal to do so and that parallelization would improve performance.

The `#pragma loop()` directives are available to help the optimizer parallelize specific loops. For more information, see [loop](../../preprocessor/loop.md).

For information about how to enable output messages for the auto-parallelizer, see [/Qpar-report (Auto-Parallelizer Reporting Level)](qpar-report-auto-parallelizer-reporting-level.md).

### To set the /Qpar compiler option in Visual Studio

1. In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**.

1. In the **Property Pages** dialog box, under **C/C++**, select **Command Line**.

1. In the **Additional Options** box, enter `/Qpar`.

### To set the /Qpar compiler option programmatically

- Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)<br/>
[/Qpar-report (Auto-Parallelizer Reporting Level)](qpar-report-auto-parallelizer-reporting-level.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[#pragma loop()](../../preprocessor/loop.md)<br/>
[Native code vectorization in Visual Studio](/archive/blogs/nativeconcurrency/auto-vectorizer-in-visual-studio-2012-overview)
