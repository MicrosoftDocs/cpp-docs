---
description: "Learn more about: /Qpar-report (Auto-Parallelizer Reporting Level)"
title: "/Qpar-report (Auto-Parallelizer Reporting Level)"
ms.date: "11/04/2016"
ms.assetid: 562673b9-02da-4bf8-bb64-70bc25ef4651
---
# /Qpar-report (Auto-Parallelizer Reporting Level)

Enables the reporting feature of the compiler's [Auto-Parallelizer](../../parallel/auto-parallelization-and-auto-vectorization.md) and specifies the level of informational messages for output during compilation.

## Syntax

```
/Qpar-report:{1}{2}
```

## Remarks

**/Qpar-report:1**<br/>
Outputs an informational message for loops that are parallelized.

**/Qpar-report:2**<br/>
Outputs an informational message for loops that are parallelized and also for loops that are not parallelized, together with a reason code.

Messages are reported to stdout. If no informational messages are reported, then either the code contains no loops, or the reporting level was not set to report loops that are not parallelized. For more information about reason codes and messages, see [Vectorizer and Parallelizer Messages](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

### To set the /Qpar-report compiler option in Visual Studio

1. In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**.

1. In the **Property Pages** dialog box, under **C/C++**, select **Command Line**.

1. In the **Additional Options** box, enter `/Qpar-report:1` or `/Qpar-report:2`.

### To set the /Qpar-report compiler option programmatically

- Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Native code vectorization in Visual Studio](/archive/blogs/nativeconcurrency/auto-vectorizer-in-visual-studio-2012-overview)
