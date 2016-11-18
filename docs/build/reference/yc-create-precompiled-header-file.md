---
title: "-Yc (Create Precompiled Header File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.UsePrecompiledHeader"
  - "/yc"
  - "VC.Project.VCCLWCECompilerTool.PrecompiledHeaderThrough"
  - "VC.Project.VCCLWCECompilerTool.UsePrecompiledHeader"
  - "VC.Project.VCCLCompilerTool.PrecompiledHeaderThrough"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "precompiled header files, creating"
  - "PCH files, creating"
  - ".pch files, creating"
  - "-Yc compiler option [C++]"
  - "/Yc compiler option [C++]"
  - "Yc compiler option [C++]"
ms.assetid: 47c2e555-b4f5-46e6-906e-ab5cf21f0678
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /Yc (Create Precompiled Header File)
Instructs the compiler to create a precompiled header (.pch) file that represents the state of compilation at a certain point.  
  
## Syntax  
  
```  
/Yc[filename]  
```  
  
## Arguments  
 `filename`  
 Specifies a header (.h) file. When this argument is used, the compiler compiles all code up to and including the .h file.  
  
## Remarks  
 When **/Yc** is specified without an argument, the compiler compiles all code up to the end of the base source file, or to the point in the base file where a [hdrstop](../../preprocessor/hdrstop.md) occurs. The resulting .pch file has the same base name as your base source file unless you specify a different file name using the **hdrstop** pragma or the **/Fp** option.  
  
 The precompiled code is saved in a file with a name created from the base name of the file specified with the **/Yc** option and a .pch extension. You can also use the [/Fp (Name .Pch File)](../../build/reference/fp-name-dot-pch-file.md) option to specify a name for the precompiled header file.  
  
 If you use **/Yc**`filename`, the compiler compiles all code up to and including the specified file for subsequent use with the **/Yu** option.  
  
 If the options **/Yc**`filename` and [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md)`filename` occur on the same command line and both reference, or imply, the same file name, **/Yc**`filename` takes precedence. This feature simplifies the writing of makefiles.  
  
 For more information on precompiled headers, see:  
  
-   [/Y (Precompiled Headers)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Select a .cpp file. The .cpp file must #include the .h file that contains precompiled header information. The project's **/Yc** setting can be overridden at the file level.  
  
2.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
3.  Click the **C/C++** folder.  
  
4.  Click the **Precompiled Headers** property page.  
  
5.  Modify the **Create/Use PCH Through File** property or the **Create/Use Precompiled Header** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.  
  
## Example  
 Consider the following code:  
  
```  
#include <afxwin.h>   // Include header for class library  
#include "resource.h" // Include resource definitions  
#include "myapp.h"    // Include information specific to this app  
...  
```  
  
 When this code is compiled with the command `CL /YcMYAPP.H PROG.CPP`, the compiler saves all the preprocessing for AFXWIN.h, RESOURCE.h, and MYAPP.h in a precompiled header file called MYAPP.pch.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)