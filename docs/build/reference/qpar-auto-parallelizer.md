---
description: "Learn more about: /Qpar (Auto-parallelizer)"
title: "/Qpar (Auto-parallelizer)"
ms.date: 02/22/2022
f1_keywords: ["VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration"]
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
---
# `/Qpar` (Auto-parallelizer)

Enables the [Auto-parallelizer](../../parallel/auto-parallelization-and-auto-vectorization.md) feature of the compiler to automatically parallelize loops in your code.

## Syntax

> **`/Qpar`**

## Remarks

When the compiler automatically parallelizes loops in code, it spreads computation across multiple processor cores. The compiler parallelizes a loop only if it determines that it's legal to do so and that parallelization would improve performance.

The `#pragma loop()` directives are available to help the optimizer parallelize specific loops. For more information, see [`loop`](../../preprocessor/loop.md).

For information about how to enable output messages for the auto-parallelizer, see [`/Qpar-report` (Auto-parallelizer reporting level)](qpar-report-auto-parallelizer-reporting-level.md).

### To set the `/Qpar` compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Modify the **Enable Parallel Code Generation** property. Choose **OK** or **Apply** to save your changes.

### To set the `/Qpar` compiler option programmatically

- Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/Q` options (Low-level operations)](q-options-low-level-operations.md)\
[`/Qpar-report` (Auto-parallelizer reporting level)](qpar-report-auto-parallelizer-reporting-level.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[`#pragma loop()`](../../preprocessor/loop.md)\
[Native code vectorization in Visual Studio](/archive/blogs/nativeconcurrency/auto-vectorizer-in-visual-studio-2012-overview)
