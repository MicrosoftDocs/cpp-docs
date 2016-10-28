---
title: "-c (Compile Without Linking)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
  
-   To set this compiler option programmatically, see \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly*>.  
  
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
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)