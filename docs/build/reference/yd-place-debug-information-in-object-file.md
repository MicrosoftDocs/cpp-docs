---
title: "-Yd (Place Debug Information in Object File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/yd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Yd compiler option [C++]"
  - "-Yd compiler option [C++]"
  - "debugging [C++], debug information files"
  - "Yd compiler option [C++]"
ms.assetid: c5a699fe-65ce-461e-964c-7f5eb2a8320a
caps.latest.revision: 14
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
# /Yd (Place Debug Information in Object File)
Paces complete debugging information in all object files created from a precompiled header (.pch) file when used with the [/Yc](../../build/reference/yc-create-precompiled-header-file.md) and [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md) options. Deprecated.  
  
## Syntax  
  
```  
/Yd  
```  
  
## Remarks  
 **/Yd** is deprecated; [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] now supports multiple objects writing to a single .pdb file, use **/Zi** instead. For more information, see [Deprecated Compiler Options in Visual C++ 2005](http://msdn.microsoft.com/en-us/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
 Unless you need to distribute a library containing debugging information, use the [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) option rather than **/Z7** and **/Yd**.  
  
 Storing complete debugging information in every .obj file is necessary only to distribute libraries that contain debugging information. It slows compilation and requires considerable disk space. When **/Yc** and **/Z7** are used without **/Yd**, the compiler stores common debugging information in the first .obj file created from the .pch file. The compiler does not insert this information into .obj files subsequently created from the .pch file; it inserts cross-references to the information. No matter how many .obj files use the .pch file, only one .obj file contains the common debugging information.  
  
 Although this default behavior results in faster build times and reduces disk-space demands, it is undesirable if a small change requires rebuilding the .obj file containing the common debugging information. In this case, the compiler must rebuild all .obj files containing cross-references to the original .obj file. Also, if a common .pch file is used by different projects, reliance on cross-references to a single .obj file is difficult.  
  
 For more information on precompiled headers, see:  
  
-   [/Y (Precompiled Headers)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Examples  
 Suppose you have two base files, F.cpp and G.cpp, each containing these **#include** statements:  
  
```  
#include "windows.h"  
#include "etc.h"  
```  
  
 The following command creates the precompiled header file ETC.pch and the object file F.obj:  
  
```  
CL /YcETC.H /Z7 F.CPP  
```  
  
 The object file F.obj includes type and symbol information for WINDOWS.h and ETC.h (and any other header files they include). Now you can use the precompiled header ETC.pch to compile the source file G.cpp:  
  
```  
CL /YuETC.H /Z7 G.CPP  
```  
  
 The object file G.obj does not include the debugging information for the precompiled header but simply references that information in the F.obj file. Note that you must link with the F.obj file.  
  
 If your precompiled header was not compiled with **/Z7**, you can still use it in later compilations using **/Z7**. However, the debugging information is placed in the current object file, and local symbols for functions and types defined in the precompiled header are not available to the debugger.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)