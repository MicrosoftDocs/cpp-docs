---
title: "-Fe (Name EXE File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/fe"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Fe compiler option [C++]"
  - "executable files, renaming"
  - "rename file compiler option [C++]"
  - "/Fe compiler option [C++]"
  - "Fe compiler option [C++]"
ms.assetid: 49f594fd-5e94-45fe-a1bf-7c9f2abb6437
caps.latest.revision: 10
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
# /Fe (Name EXE File)
Specifies a name and a directory for the .exe file or DLL created by the compiler.  
  
## Syntax  
  
```  
/Fepathname  
```  
  
## Remarks  
 Without this option, the compiler gives the file a default name using the base name of the first source or object file specified on the command line and the extension .exe or .dll.  
  
 If you specify the[/c (Compile Without Linking)](../../build/reference/c-compile-without-linking.md), to compile without linking, **/Fe** has no effect.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **General**property page.  
  
4.  Modify the **Output File** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.  
  
## Example  
 The following command line compiles and links all C source files in the current directory. The resulting executable file is named PROCESS.exe and is created in the directory C:\BIN.  
  
```  
CL /FeC:\BIN\PROCESS *.C  
```  
  
## Example  
 The following command line creates an executable file in `C:\BIN` with the same base name as the first source or object file:  
  
```  
CL /FeC:\BIN\ *.C  
```  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)