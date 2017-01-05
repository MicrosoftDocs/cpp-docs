---
title: "-Z7, -Zi, -ZI (Debug Information Format) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.DebugInformationFormat"
  - "/zi"
  - "/z7"
  - "VC.Project.VCCLWCECompilerTool.DebugInformationFormat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C7 compatible compiler option [C++]"
  - "-Zl compiler option [C++]"
  - "Debug Information Format compiler option"
  - "ZI compiler option"
  - "-Zi compiler option [C++]"
  - "/ZI compiler option [C++]"
  - "Z7 compiler option [C++]"
  - "debugging [C++], debug information files"
  - "Zi compiler option [C++]"
  - "none compiler option [C++]"
  - "/Zi compiler option [C++]"
  - "program database compiler option [C++]"
  - "full symbolic debugging information"
  - "/Z7 compiler option [C++]"
  - "line numbers only compiler option [C++]"
  - "cl.exe compiler, debugging options"
  - "-Z7 compiler option [C++]"
ms.assetid: ce9fa7e1-0c9b-47e3-98ea-26d1a16257c8
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /Z7, /Zi, /ZI (Debug Information Format)
Select the type of debugging information created for your program and whether this information is kept in object (.obj) files or in a program database (PDB).  
  
## Syntax  
  
```  
/Z{7|i|I}  
```  
  
## Remarks  
 The options are described in the following table.  
  
 None  
 Produces no debugging information, so compilation is faster.  
  
 **/Z7**  
 Produces an .obj file containing full symbolic debugging information for use with the debugger. The symbolic debugging information includes the names and types of variables, as well as functions and line numbers. No .pdb file is produced.  
  
 For distributors of third-party libraries, there is an advantage to not having a .pdb file. However, the .obj files for the precompiled headers are necessary during the link phase, and debugging. If there is only type information (and no code) in the .pch object files, you will also have to compile with [/Yl (Inject PCH Reference for Debug Library)](../../build/reference/yl-inject-pch-reference-for-debug-library.md).  
  
 **/Zi**  
 Produces a program database (PDB) that contains type information and symbolic debugging information for use with the debugger. The symbolic debugging information includes the names and types of variables, as well as functions and line numbers.  
  
 **/Zi** does not affect optimizations. However, **/Zi** does imply **/debug**; see [/DEBUG (Generate Debug Info)](../../build/reference/debug-generate-debug-info.md) for more information.  
  
 Type information is placed in the .pdb file, and not in the .obj file.  
  
 You can use [/Gm (Enable Minimal Rebuild)](../../build/reference/gm-enable-minimal-rebuild.md) with **/Zi**, whereas **/Gm** is not available when compiling with **/Z7**.  
  
 When compiling with **/Zi** and **/clr**, the <xref:System.Diagnostics.DebuggableAttribute> attribute will not be placed in the assembly metadata; you must specify it in source code, if you want it. This attribute can affect the runtime performance of the application. For more information about how the Debuggable attribute affects performance and how you can modify the performance impact, see [Making an Image Easier to Debug](http://msdn.microsoft.com/Library/7d90ea7a-150f-4f97-98a7-f9c26541b9a3).  
  
 **/ZI**  
 Produces a program database, as described above, in a format that supports the Edit and Continue feature. If you want to use Edit and Continue debugging, you must use this option. Because most optimizations are incompatible with Edit and Continue, using **/ZI** disables any `#pragma optimize` statements in your code.  
  
 **/ZI** causes [/Gy (Enable Function-Level Linking)](../../build/reference/gy-enable-function-level-linking.md) and [/FC (Full Path of Source Code File in Diagnostics)](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) to be used in your compilation.  
  
 **/ZI** is not compatible with [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
> [!NOTE]
>  **/ZI** is only available in the compilers targeting x86 and x64 processors; this compiler option is not available in the compilers targeting ARM processors.  
  
 The compiler names the program database *project*.pdb. If you compile a file without a project, the compiler creates a database named VC*x*0.pdb., where *x* is the major version of [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] in use. The compiler embeds the name of the PDB in each .obj file created using this option, pointing the debugger to the location of symbolic and line-number information. When you use this option, your .obj files will be smaller, because debugging information is stored in the .pdb file rather than in .obj files.  
  
 If you create a library from objects that were compiled using this option, the associated .pdb file must be available when the library is linked to a program. Thus, if you distribute the library, you must distribute the PDB.  
  
 To create a library that contains debugging information without using .pdb files, you must select the compiler's C 7.0-Compatible (**/Z7**) option. If you use the precompiled headers options, debugging information for both the precompiled header and the rest of the source code is placed in the PDB. The **/Yd** option is ignored when the Program Database option is specified.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Debug Information Format** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)