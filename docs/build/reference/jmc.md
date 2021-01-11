---
description: "Learn more about: /JMC (Just My Code debugging)"
title: "/JMC (Just My Code debugging)"
ms.date: "08/20/2018"
f1_keywords: ["VC.Project.VCCLCompilerTool.SupportJustMyCode"]
helpviewer_keywords: ["/JMC compiler option [C++]", "Just my code [C++]", "-JMC compiler option [C++]", "User code, debugging", "JMC compiler option [C++]"]
---
# /JMC (Just My Code debugging)

Specifies compiler support for native *Just My Code* debugging in the Visual Studio debugger. This option supports the user settings that allow Visual Studio to step over system, framework, library, and other non-user calls, and to collapse those calls in the call stack window. The **/JMC** compiler option is available starting in Visual Studio 2017 version 15.8.

## Syntax

> **/JMC**\[**-**]

## Remarks

The Visual Studio [Just My Code](/visualstudio/debugger/just-my-code) settings specify whether the Visual Studio debugger steps over system, framework, library, and other non-user calls. The **/JMC** compiler option enables support for Just My Code debugging in your native C++ code. When **/JMC** is enabled, the compiler inserts calls to a helper function, `__CheckForDebuggerJustMyCode`, in the function prolog. The helper function provides hooks that support Visual Studio debugger Just My Code step operations. To enable Just My Code in the Visual Studio debugger, on the menu bar, choose **Tools** > **Options**, and then set the option in **Debugging** > **General** > **Enable Just My Code**.

The **/JMC** option requires that your code links to the C Runtime Library (CRT), which provides the `__CheckForDebuggerJustMyCode` helper function. If your project does not link to the CRT, you may see linker error **LNK2019: unresolved external symbol __CheckForDebuggerJustMyCode**. To resolve this error, either link to the CRT, or disable the **/JMC** option.

By default, the **/JMC** compiler option is off. However, starting in Visual Studio 2017 version 15.8 this option is enabled in most Visual Studio project templates. To explicitly disable this option, use the **/JMC-** option on the command line. In Visual Studio, open the project Property Pages dialog box, and change the **Support Just My Code Debugging** property in the **Configuration Properties** > **C/C++** > **General** property page to **No**.

For more information, see [C++ Just My Code](/visualstudio/debugger/just-my-code#BKMK_C___Just_My_Code) in [Specify whether to debug only user code using Just My Code in Visual Studio](/visualstudio/debugger/just-my-code), and the Visual C++ Team Blog post [Announcing C++ Just My Code Stepping in Visual Studio](https://devblogs.microsoft.com/cppblog/announcing-jmc-stepping-in-visual-studio/).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Support Just My Code Debugging** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
