---
title: "/Qvec-report (Auto-Vectorizer Reporting Level)"
ms.date: "11/04/2016"
ms.assetid: 4778c9a3-0692-4085-9b05-1bfeadf4c74a
---
# /Qvec-report (Auto-Vectorizer Reporting Level)

Enables the reporting feature of the compiler [Auto-Vectorizer](../../parallel/auto-parallelization-and-auto-vectorization.md) and specifies the level of informational messages for output during compilation.

## Syntax

```
/Qvec-report:{1}{2}
```

## Remarks

**/Qvec-report:1**<br/>
Outputs an informational message for loops that are vectorized.

**/Qvec-report:2**<br/>
Outputs an informational message for loops that are vectorized and for loops that are not vectorized, together with a reason code.

For information about reason codes and messages, see [Vectorizer and Parallelizer Messages](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

### To set the /Qvec-report compiler option in Visual Studio

1. In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**.

1. In the **Property Pages** dialog box, under **C/C++**, select **Command Line**.

1. In the **Additional Options** box, enter `/Qvec-report:1` or `/Qvec-report:2`.

### To set the /Qvec-report compiler option programmatically

- Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[/Q Options (Low-Level Operations)](../../build/reference/q-options-low-level-operations.md)<br/>
[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)<br/>
[Parallel Programming in Native Code](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/04/12/auto-vectorizer-in-visual-studio-2012-overview/)