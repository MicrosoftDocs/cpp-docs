---
title: "-Fm (Name Mapfile) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/fm"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Fm compiler option [C++]"
  - "mapfiles [C++], creating linker"
  - "files [C++], creating map"
  - "Fm compiler option [C++]"
  - "/Fm compiler option [C++]"
ms.assetid: 8154448a-93a7-4546-8e4c-5c44d0aff45d
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
# /Fm (Name Mapfile)
Tells the linker to produce a mapfile containing a list of segments in the order in which they appear in the corresponding .exe file or DLL.  
  
## Syntax  
  
```  
/Fmpathname  
```  
  
## Remarks  
 By default, the mapfile is given the base name of the corresponding C or C++ source file with a .MAP extension.  
  
 Specifying **/Fm** has the same effect as if you had specified the [/MAP (Generate Mapfile)](../../build/reference/map-generate-mapfile.md) linker option.  
  
 If you specify [/c (Compile Without Linking)](../../build/reference/c-compile-without-linking.md) to suppress linking, **/Fm** has no effect.  
  
 Global symbols in a mapfile usually have one or more leading underscores because the compiler adds a leading underscore to variable names. Many global symbols that appear in the mapfile are used internally by the compiler and the standard libraries.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)