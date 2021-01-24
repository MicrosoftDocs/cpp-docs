---
description: "Learn more about: /Z7, /Zi, /ZI (Debug Information Format)"
title: "/Z7, /Zi, /ZI (Debug Information Format)"
ms.date: "07/06/2020"
f1_keywords: ["VC.Project.VCCLCompilerTool.DebugInformationFormat", "/ZI", "/Zi", "/Z7", "VC.Project.VCCLWCECompilerTool.DebugInformationFormat"]
helpviewer_keywords: ["C7 compatible compiler option [C++]", "Debug Information Format compiler option", "ZI compiler option", "-Zi compiler option [C++]", "/ZI compiler option [C++]", "Z7 compiler option [C++]", "debugging [C++], debug information files", "Zi compiler option [C++]", "/Zi compiler option [C++]", "program database compiler option [C++]", "full symbolic debugging information", "/Z7 compiler option [C++]", "line numbers only compiler option [C++]", "cl.exe compiler, debugging options", "-Z7 compiler option [C++]"]
---
# /Z7, /Zi, /ZI (Debug Information Format)

The **`/Z7`**, **`/Zi`**, and **`/ZI`** compiler options specify the type of debugging information created for your program, and whether this information is kept in object files or in a program database (PDB) file.

## Syntax

> **`/Z7`**\
> **`/Zi`**\
> **`/ZI`**

## Remarks

When you specify a debug option, the compiler produces symbol names for functions and variables, type information, and line locations for use by the debugger. This symbolic debugging information can be included either in the object files (*`.obj`* files) produced by the compiler, or in a separate PDB file (a *`.pdb`* file) for the executable. The debug information format options are described in the following sections.

### None

By default, if no debug information format option is specified, the compiler produces no debugging information, so compilation is faster.

### /Z7

The **`/Z7`** option produces object files that also contain full symbolic debugging information for use with the debugger. These object files and any libraries built from them can be substantially larger than files that have no debugging information. The symbolic debugging information includes the names and types of variables, functions, and line numbers. No PDB file is produced by the compiler. However, a PDB file can still be generated from these object files or libraries if the linker is passed the **`/DEBUG`** option.

For distributors of debug versions of third-party libraries, there's an advantage to not having a PDB file. However, the object files for any precompiled headers are necessary during the library link phase, and for debugging. If there's only type information (and no code) in the *`.pch`* object file, you must also use the [`/Yl` (Inject PCH Reference for Debug Library)](yl-inject-pch-reference-for-debug-library.md) option, which is enabled by default, when you build the library.

The deprecated [`/Gm` (Enable Minimal Rebuild)](gm-enable-minimal-rebuild.md) option is unavailable when **`/Z7`** is specified.

### /Zi

The **`/Zi`** option produces a separate PDB file that contains all the symbolic debugging information for use with the debugger. The debugging information isn't included in the object files or executable, which makes them much smaller.

Use of **`/Zi`** doesn't affect optimizations. However, **`/Zi`** does imply **`/debug`**. For more information, see [`/DEBUG` (Generate Debug Info)](debug-generate-debug-info.md).

When you specify both **`/Zi`** and **`/clr`**, the <xref:System.Diagnostics.DebuggableAttribute> attribute isn't placed in the assembly metadata. If you want it, you must specify it in the source code. This attribute can affect the runtime performance of the application. For more information about how the `Debuggable` attribute affects performance and how you can modify the performance impact, see [Making an image easier to debug](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).

The compiler names the PDB file *`<project>.pdb`*, where *`<project>`* is the name of your project. If you compile a file outside of a project, the compiler creates a PDB file named *`VC<x>.pdb`*, where *`<x>`* is a concatenation of the major and minor version number of the compiler version in use. The compiler embeds the name of the PDB and an identifying timestamped signature in each object file created using this option. This name and signature point the debugger to the location of symbolic and line-number information. The name and signature in the PDB file must match the executable for symbols to be loaded in the debugger. The WinDBG debugger can load mismatched symbols by using the **`.symopt+0x40`** command. Visual Studio doesn't have a similar option to load mismatched symbols.

If you create a library from objects that were compiled using **`/Zi`**, the associated PDB file must be available when the library is linked to a program. That means, if you distribute the library, you must also distribute the PDB file. To create a library that contains debugging information without using PDB files, you must select the **`/Z7`** option. If you use the precompiled headers options, debugging information for both the precompiled header and the rest of the source code is placed in the PDB file.

### /ZI

The **`/ZI`** option is similar to **`/Zi`**, but it produces a PDB file in a format that supports the [Edit and Continue](/visualstudio/debugger/edit-and-continue-visual-cpp) feature. To use Edit and Continue debugging features, you must use this option. The Edit and Continue feature is useful for developer productivity, but can cause issues in code size, performance, and compiler conformance. Because most optimizations are incompatible with Edit and Continue, using **`/ZI`** disables any `#pragma optimize` statements in your code. The **`/ZI`** option is also incompatible with use of the [`__LINE__` predefined macro](../../preprocessor/predefined-macros.md); code compiled with **`/ZI`** can't use `__LINE__` as a non-type template argument, although `__LINE__` can be used in macro expansions.

The **`/ZI`** option forces both the [`/Gy` (Enable Function-Level Linking)](gy-enable-function-level-linking.md) and [`/FC` (Full Path of Source Code File in Diagnostics)](fc-full-path-of-source-code-file-in-diagnostics.md) options to be used in your compilation.

**`/ZI`** is incompatible with [`/clr` (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md).

> [!NOTE]
> The **`/ZI`** option is only available in the compilers targeting x86 and x64 processors. This compiler option is not available in the compilers targeting ARM processors.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Open the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Debug Information Format** property. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
