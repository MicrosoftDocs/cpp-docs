---
title: "-WX (Treat Linker Warnings as Errors) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/WX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/WX linker option"
  - "-WX linker option"
  - "WX linker option"
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
caps.latest.revision: 7
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
# /WX (Treat Linker Warnings as Errors)
```  
/WX[:NO]  
```  
  
## Remarks  
 /WX causes no output file to be generated if the linker generates a warning.  
  
 This is similar to **/WX** for the compiler (see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../../build/reference/compiler-option-warning-level.md) for more information). However, specifying **/WX** for the compilation does not imply that **/WX** will also be in effect for the link phase; you must explicitly specify **/WX** for each tool.  
  
 By default, **/WX** is not in effect. To treat linker warnings as errors, specify **/WX**. **/WX:NO** is the same as not specifying **/WX**.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)