---
title: "-bigobj (Increase Number of Sections in .Obj file) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/bigobj"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-bigobj compiler option [C++]"
  - "/bigobj compiler option [C++]"
  - "bigobj compiler option [C++]"
ms.assetid: ba94d602-4015-4a8d-86ec-49241ab74c12
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
# /bigobj (Increase Number of Sections in .Obj file)
**/bigobj** increases the number of sections that an object file can contain.  
  
## Syntax  
  
```  
/bigobj  
```  
  
## Remarks  
 By default, an object file can hold up to 65,536 (2^16) addressable sections. This is the case no matter which target platform is specified. **/bigobj** increases that address capacity to 4,294,967,296 (2^32).  
  
 Most modules will never generate an .obj file that contains more than 65,536 sections. However, machine generated code, or code that makes heavy use of template libraries may require .obj files that can hold more sections. **/bigobj** is enabled by default on Windows Store projects because the machine-generated XAML code includes a large number of headers. If you disable this option on a Windows Store app project you are likely to encounter compiler error C1128.  
  
 Linkers that shipped prior to Visual C++ 2005 cannot read .obj files that were produced with **/bigobj**.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)