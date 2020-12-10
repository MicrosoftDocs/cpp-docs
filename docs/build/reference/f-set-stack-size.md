---
description: "Learn more about: /F (Set Stack Size)"
title: "/F (Set Stack Size)"
ms.date: "11/04/2016"
f1_keywords: ["/f"]
helpviewer_keywords: ["set stack size compiler option", "F compiler option [C++]", "-F compiler option [C++]", "/F compiler option [C++]", "stack, setting size"]
ms.assetid: 17320b6f-8305-445b-9ec2-75833f4b29e0
---
# /F (Set Stack Size)

Sets the program stack size in bytes.

## Syntax

> **/F** *number*

## Arguments

*number*<br/>
The stack size in bytes.

## Remarks

Without this option the stack size defaults to 1 MB. The *number* argument can be in decimal or C-language notation. The argument can range from 1 to the maximum stack size accepted by the linker. The linker rounds up the specified value to the nearest 4 bytes. The space between **/F** and *number* is optional.

You may need to increase the stack size if your program gets stack-overflow messages.

You can also set the stack size by:

- Using the **/STACK** linker option. For more information, see [/STACK](stack.md).

- Using EDITBIN on the .exe file. For more information, see [EDITBIN Reference](editbin-reference.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
