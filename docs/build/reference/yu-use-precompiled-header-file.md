---
title: "-Yu (Use Precompiled Header File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/yu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Yu compiler option [C++]"
  - "/Yu compiler option [C++]"
  - "-Yu compiler option [C++]"
  - "PCH files, use existing"
  - ".pch files, use existing"
  - "precompiled header files, use existing"
ms.assetid: 24f1bd0e-b624-4296-a17e-d4b53e374e1f
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
# /Yu (Use Precompiled Header File)
Instructs the compiler to use an existing precompiled header (.pch) file in the current compilation.  
  
## Syntax  
  
```  
/Yu[filename]  
```  
  
## Arguments  
 *filename*  
 The name of a header file, which is included in the source file using an **#include** preprocessor directive.  
  
## Remarks  
 The name of the include file must be the same for both the **/Yc** option that creates the precompiled header and any subsequent **/Yu** option indicating use of the precompiled header.  
  
 For **/Yc**, `filename` specifies the point at which precompilation stops; the compiler precompiles all code though `filename` and names the resulting precompiled header using the base name of the include file and an extension of .pch.  
  
 The .pch file must have been created using **/Yc**.  
  
 The compiler treats all code occurring before the .h file as precompiled. It skips to just beyond the **#include** directive associated with the .h file, uses the code contained in the .pch file, and then compiles all code after `filename`.  
  
 On the command line, no space is allowed between **/Yu** and `filename`.  
  
 When you specify the **/Yu** option without a file name, your source program must contain a [#pragma hdrstop](../../preprocessor/hdrstop.md) pragma that specifies the file name of the precompiled header, .pch file. In this case, the compiler will use the precompiled header (.pch file) named by [/Fp (Name .Pch File)](../../build/reference/fp-name-dot-pch-file.md). The compiler skips to the location of that pragma, restores the compiled state from the precompiled header file specified by the pragma, and then compiles only code that follows the pragma. If **#pragma hdrstop** does not specify a file name, the compiler looks for a file with a name derived from the base name of the source file with a .pch extension. You can also use the **/Fp** option to specify a different .pch file.  
  
 If you specify the **/Yu** option without a file name and fail to specify a **hdrstop** pragma, an error message is generated and the compilation is unsuccessful.  
  
 If the **/Yc**`filename` and **/Yu**`filename` options occur on the same command line and both reference the same file name, **/Yc**`filename` takes precedence, precompiling all code up to and including the named file. This feature simplifies the writing of makefiles.  
  
 Because .pch files contain information about the machine environment as well as memory address information about the program, you should only use a pch file on the machine where it was created.  
  
 For more information on precompiled headers, see:  
  
-   [/Y (Precompiled Headers)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Specify [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md) on a .cpp file in your project.  
  
2.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
3.  Click the **C/C++** folder.  
  
4.  Click the **Precompiled Headers** property page.  
  
5.  Modify the **Create/Use PCH Through File** property or the **Create/Use Precompiled Header** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.  
  
## Examples  
 If the following code:  
  
```  
#include <afxwin.h>   // Include header for class library  
#include "resource.h" // Include resource definitions  
#include "myapp.h"    // Include information specific to this app  
...  
```  
  
 is compiled with the command line `CL /YuMYAPP.H PROG.CPP`, the compiler does not process the three include statements but uses precompiled code from MYAPP.pch, thereby saving the time involved in preprocessing all three of the files (and any files they might include).  
  
 You can use the [/Fp (Name .Pch File)](../../build/reference/fp-name-dot-pch-file.md) option with the **/Yu** option to specify the name of the .pch file if the name is different from either the file name argument to **/Yc** or the base name of the source file, as in the following:  
  
```  
CL /YuMYAPP.H /FpMYPCH.pch PROG.CPP  
```  
  
 This command specifies a precompiled header file named MYPCH.pch. The compiler uses its contents to restore the precompiled state of all header files up to and including MYAPP.h. The compiler then compiles the code that occurs after the MYAPP.h **include** statement.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)