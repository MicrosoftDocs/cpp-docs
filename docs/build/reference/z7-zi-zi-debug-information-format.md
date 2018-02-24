---
title: "-Z7, -Zi, -ZI (Debug Information Format) | Microsoft Docs"
ms.custom: ""
ms.date: "02/22/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCCLCompilerTool.DebugInformationFormat", "/ZI", "/Zi", "/Z7", "VC.Project.VCCLWCECompilerTool.DebugInformationFormat"]
dev_langs: ["C++"]
helpviewer_keywords: ["C7 compatible compiler option [C++]", "Debug Information Format compiler option", "ZI compiler option", "-Zi compiler option [C++]", "/ZI compiler option [C++]", "Z7 compiler option [C++]", "debugging [C++], debug information files", "Zi compiler option [C++]", "/Zi compiler option [C++]", "program database compiler option [C++]", "full symbolic debugging information", "/Z7 compiler option [C++]", "line numbers only compiler option [C++]", "cl.exe compiler, debugging options", "-Z7 compiler option [C++]"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /Z7, /Zi, /ZI (Debug Information Format)

Specifies the type of debugging information created for your program and whether this information is kept in object files or in a program database (PDB) file.

## Syntax

> **/Z**{**7**|**i**|**I**}  

## Remarks

The debug information format options are described in the following sections.  
  
### None

By default, if no debug information format option is specified, the compiler produces no debugging information, so compilation is faster.  
  
### /Z7

The **/Z7** option produces an *object file*, a file that has a .obj extension, containing full symbolic debugging information for use with the debugger. The symbolic debugging information includes the names and types of variables, as well as functions and line numbers. No *PDB file*, a file with a .pdb extension, is produced.

For distributors of third-party libraries, there is an advantage to not having a PDB file. However, the object files for the precompiled headers are necessary during the link phase, and for debugging. If there is only type information (and no code) in the .pch object files, you must also use the [/Yl (Inject PCH Reference for Debug Library)](../../build/reference/yl-inject-pch-reference-for-debug-library.md) option, which is enabled by default.

### /Zi

The **/Zi** option produces a PDB file that contains type information and symbolic debugging information for use with the debugger. The symbolic debugging information includes the names and types of variables, as well as functions and line numbers.

Use of **/Zi** does not affect optimizations. However, **/Zi** does imply **/debug**; see [/DEBUG (Generate Debug Info)](../../build/reference/debug-generate-debug-info.md) for more information.

When **/Zi** is specified, type information is placed in the PDB file, and not in the object file.

You can use [/Gm (Enable Minimal Rebuild)](../../build/reference/gm-enable-minimal-rebuild.md) together with **/Zi**, but **/Gm** is not available when **/Z7** is specified.

When you specify both **/Zi** and **/clr**, the <xref:System.Diagnostics.DebuggableAttribute> attribute is not placed in the assembly metadata. If you want it, you must specify it in source code. This attribute can affect the runtime performance of the application. For more information about how the **Debuggable** attribute affects performance and how you can modify the performance impact, see [Making an Image Easier to Debug](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).

### /ZI

The **/ZI** option produces a PDB file in a format that supports the [Edit and Continue](/visualstudio/debugger/edit-and-continue-visual-cpp) feature. If you want to use Edit and Continue debugging, you must use this option. The Edit and Continue feature is useful for developer productivity, but can cause issues in compiler conformance, code size and performance. Because most optimizations are incompatible with Edit and Continue, using **/ZI** disables any `#pragma optimize` statements in your code. The **/ZI** option is also incompatible with use of the [&#95;&#95;LINE&#95;&#95; predefined macro](../../preprocessor/predefined-macros.md). Code compiled with **/ZI** cannot use **&#95;&#95;LINE&#95;&#95;** as a non-type template argument, although **&#95;&#95;LINE&#95;&#95;** can used in macro expansions.

The **/ZI** option forces both the [/Gy (Enable Function-Level Linking)](../../build/reference/gy-enable-function-level-linking.md) and [/FC (Full Path of Source Code File in Diagnostics)](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) options to be used in your compilation.

**/ZI** is not compatible with [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
> The **/ZI** option is only available in the compilers targeting x86 and x64 processors; this compiler option is not available in the compilers targeting ARM processors.

The compiler names the PDB file *project*.pdb. If you compile a file outside of a project, the compiler creates a PDB file named VC*x*0.pdb, where *x* is the major version number of the Visual Studio version in use. The compiler embeds the name of the PDB in each .obj file created using this option, pointing the debugger to the location of symbolic and line-number information. When you use this option, your .obj files are smaller, because debugging information is stored in the .pdb file rather than in .obj files.

If you create a library from objects that were compiled using this option, the associated .pdb file must be available when the library is linked to a program. Thus, if you distribute the library, you must distribute the PDB.

To create a library that contains debugging information without using .pdb files, you must select the compiler's C 7.0-Compatible (**/Z7**) option. If you use the precompiled headers options, debugging information for both the precompiled header and the rest of the source code is placed in the PDB file. The **/Yd** option is ignored when the Program Database option is specified.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Open the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Debug Information Format** property. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.

## See also

[Compiler Options](../../build/reference/compiler-options.md)  
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)  

