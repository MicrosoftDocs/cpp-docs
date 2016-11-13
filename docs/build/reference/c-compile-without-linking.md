---
title: "-c (Compile Without Linking) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/c"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "suppress link"
  - "cl.exe compiler, compiling without linking"
  - "-c compiler option [C++]"
  - "c compiler option [C++]"
  - "/c compiler option [C++]"
ms.assetid: 8017fc3d-e5dd-4668-a1f7-3120daa95d20
caps.latest.revision: 9
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
# /c (Compile Without Linking)
Prevents the automatic call to LINK.  
  
## Syntax  
  
```  
/c  
```  
  
## Remarks  
 Compiling with **/c** creates .obj files only. You must call LINK explicitly with the proper files and options to perform the linking phase of the build.  
  
 Any internal project created in the development environment uses the **/c** option by default.  
  
### To set this compiler option in the Visual Studio development environment  
  
-   This option is not available from within the development environment.  
  
### To set this compiler option programmatically  
  
-   To set this compiler option programmatically, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly%2A>.  
  
## Example  
 The following command line creates the object files FIRST.obj and SECOND.obj. THIRD.obj is ignored.  
  
```  
CL /c FIRST.C SECOND.C THIRD.OBJ  
```  
  
 To create an executable file, you must invoke LINK:  
  
```  
LINK firsti.obj second.obj third.obj /OUT:filename.exe  
```  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)