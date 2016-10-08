---
title: "-Z7, -Zi, -ZI (Debug Information Format)"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /Z7, /Zi, /ZI (Debug Information Format)
ms.assetid: ce9fa7e1-0c9b-47e3-98ea-26d1a16257c8
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# -Z7, -Zi, -ZI (Debug Information Format)
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
  
 For distributors of third-party libraries, there is an advantage to not having a .pdb file. However, the .obj files for the precompiled headers are necessary during the link phase, and debugging. If there is only type information (and no code) in the .pch object files, you will also have to compile with [/Yl (Inject PCH Reference for Debug Library)](../VS_visualcpp/-Yl--Inject-PCH-Reference-for-Debug-Library-.md).  
  
 **/Zi**  
 Produces a program database (PDB) that contains type information and symbolic debugging information for use with the debugger. The symbolic debugging information includes the names and types of variables, as well as functions and line numbers.  
  
 **/Zi** does not affect optimizations. However, **/Zi** does imply **/debug**; see [/DEBUG (Generate Debug Info)](../VS_visualcpp/-DEBUG--Generate-Debug-Info-.md) for more information.  
  
 Type information is placed in the .pdb file, and not in the .obj file.  
  
 You can use [/Gm (Enable Minimal Rebuild)](../VS_visualcpp/-Gm--Enable-Minimal-Rebuild-.md) with **/Zi**, whereas **/Gm** is not available when compiling with **/Z7**.  
  
 When compiling with **/Zi** and **/clr**, the <xref:System.Diagnostics.DebuggableAttribute?qualifyHint=False> attribute will not be placed in the assembly metadata; you must specify it in source code, if you want it. This attribute can affect the runtime performance of the application. For more information about how the Debuggable attribute affects performance and how you can modify the performance impact, see [Making an Image Easier to Debug](../Topic/Making%20an%20Image%20Easier%20to%20Debug.md).  
  
 **/ZI**  
 Produces a program database, as described above, in a format that supports the Edit and Continue feature. If you want to use Edit and Continue debugging, you must use this option. Because most optimizations are incompatible with Edit and Continue, using **/ZI** disables any `#pragma optimize` statements in your code.  
  
 **/ZI** causes [/Gy (Enable Function-Level Linking)](../VS_visualcpp/-Gy--Enable-Function-Level-Linking-.md) and [/FC (Full Path of Source Code File in Diagnostics)](../VS_visualcpp/-FC--Full-Path-of-Source-Code-File-in-Diagnostics-.md) to be used in your compilation.  
  
 **/ZI** is not compatible with [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
> [!NOTE]
>  **/ZI** is only available in the compilers targeting x86 and x64 processors; this compiler option is not available in the compilers targeting ARM processors.  
  
 The compiler names the program database *project*.pdb. If you compile a file without a project, the compiler creates a database named VC*x*0.pdb., where *x* is the major version of Visual C++ in use. The compiler embeds the name of the PDB in each .obj file created using this option, pointing the debugger to the location of symbolic and line-number information. When you use this option, your .obj files will be smaller, because debugging information is stored in the .pdb file rather than in .obj files.  
  
 If you create a library from objects that were compiled using this option, the associated .pdb file must be available when the library is linked to a program. Thus, if you distribute the library, you must distribute the PDB.  
  
 To create a library that contains debugging information without using .pdb files, you must select the compiler's C 7.0-Compatible (**/Z7**) option. If you use the precompiled headers options, debugging information for both the precompiled header and the rest of the source code is placed in the PDB. The **/Yd** option is ignored when the Program Database option is specified.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Debug Information Format** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)