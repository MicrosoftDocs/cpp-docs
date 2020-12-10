---
description: "Learn more about: /Fe (Name EXE File)"
title: "/Fe (Name EXE File)"
ms.date: "11/04/2016"
f1_keywords: ["/fe"]
helpviewer_keywords: ["-Fe compiler option [C++]", "executable files, renaming", "rename file compiler option [C++]", "/Fe compiler option [C++]", "Fe compiler option [C++]"]
ms.assetid: 49f594fd-5e94-45fe-a1bf-7c9f2abb6437
---
# /Fe (Name EXE File)

Specifies a name and a directory for the .exe file or DLL created by the compiler.

## Syntax

> **/Fe**[_pathname_]\
> **/Fe:** _pathname_

### Arguments

*pathname*<br/>
The relative or absolute path and base file name, or relative or absolute path to a directory, or base file name to use for the generated executable.

## Remarks

The **/Fe** option allows you to specify the output directory, output executable name, or both, for the generated executable file. If *pathname* ends in a path separator (**&#92;**), it is assumed to specify only the output directory. Otherwise, the last component of *pathname* is used as the output file base name, and the rest of *pathname* specifies the output directory. If *pathname* does not have any path separators, it's assumed to specify the output file name in the current directory. The *pathname* must be enclosed in double quotes (**"**) if it contains any characters that can't be in a short path, such as spaces, extended characters, or path components more than eight characters long.

When the **/Fe** option is not specified, or when a file base name is not specified in *pathname*, the compiler gives the output file a default name using the base name of the first source or object file specified on the command line and the extension .exe or .dll.

If you specify the [/c (Compile Without Linking)](c-compile-without-linking.md) option, **/Fe** has no effect.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Open the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Output File** property. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## Examples

The following command line compiles and links all C source files in the current directory. The resulting executable file is named PROCESS.exe and is created in the directory "C:\Users\User Name\repos\My Project\bin".

```
CL /Fe"C:\Users\User Name\repos\My Project\bin\PROCESS" *.C
```

The following command line creates an executable file in `C:\BIN` with the same base name as the first source file in the current directory:

```
CL /FeC:\BIN\ *.C
```

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Specifying the Pathname](specifying-the-pathname.md)<br/>
