---
description: "Learn more about: /Tc, /Tp, /TC, /TP (Specify Source File Type)"
title: "/Tc, /Tp, /TC, /TP (Specify Source File Type)"
ms.date: "01/11/2018"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.CompileAs", "VC.Project.VCCLCompilerTool.CompileAs", "/Tp", "/tc"]
helpviewer_keywords: ["Tp compiler option [C++]", "/Tc compiler option [C++]", "-Tc compiler option [C++]", "source files, specifying to compiler", "Tc compiler option [C++]", "/Tp compiler option [C++]", "-Tp compiler option [C++]"]
---
# /Tc, /Tp, /TC, /TP (Specify Source File Type)

The **/Tc** option specifies that its filename argument is a C source file, even if it does not have a .c extension. The **/Tp** option specifies that its filename argument is a C++ source file, even if it doesn't have a .cpp or .cxx extension. A space between the option and the filename is optional. Each option specifies one file; to specify additional files, repeat the option.

**/TC** and **/TP** are global variants of **/Tc** and **/Tp**. They specify to the compiler to treat all files named on the command line as C source files (**/TC**) or C++ source files (**/TP**), without regard to location on the command line in relation to the option. These global options can be overridden on a single file by means of **/Tc** or **/Tp**.

## Syntax

> **/Tc** _filename_\
> **/Tp** _filename_\
> **/TC**\
> **/TP**

### Arguments

*filename*<br/>
A C or C++ source file.

## Remarks

By default, **CL** assumes that files with the .c extension are C source files and files with the .cpp or the .cxx extension are C++ source files.

When either the **TC** or **Tc** option is specified, any specification of the [/Zc:wchar_t (wchar_t Is Native Type)](zc-wchar-t-wchar-t-is-native-type.md) option is ignored.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Compile As** property. Choose **OK** or **Apply** to apply your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.

## Examples

This CL command line specifies that MAIN.c, TEST.prg, and COLLATE.prg are all C source files. CL will not recognize PRINT.prg.

> CL MAIN.C /TcTEST.PRG /TcCOLLATE.PRG PRINT.PRG

This CL command line specifies that TEST1.c, TEST2.cxx, TEST3.huh, and TEST4.o are compiled as C++ files, and TEST5.z is compiled as a C file.

> CL TEST1.C TEST2.CXX TEST3.HUH TEST4.O /Tc TEST5.Z /TP

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
