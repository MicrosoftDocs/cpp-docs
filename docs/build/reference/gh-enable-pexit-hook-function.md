---
title: "-GH (Enable _pexit Hook Function) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_pexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gh compiler option [C++]"
  - "Gh compiler option [C++]"
  - "_pexit function"
  - "-Gh compiler option [C++]"
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
caps.latest.revision: 11
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
# /GH (Enable _pexit Hook Function)
Calls the `_pexit` function at the end of every method or function.  
  
## Syntax  
  
```  
/GH  
```  
  
## Remarks  
 The `_pexit` function is not part of any library and it is up to you to provide a definition for `_pexit`.  
  
 Unless you plan to explicitly call `_pexit`, you do not need to provide a prototype. The function must appear as if it had the following prototype, and it must push the content of all registers on entry and pop the unchanged content on exit:  
  
```  
void __declspec(naked) _cdecl _pexit( void );  
```  
  
 `_pexit` is similar to `_penter`; see [/Gh (Enable _penter Hook Function)](../../build/reference/gh-enable-penter-hook-function.md) for an example of how to write a `_pexit` function.  
  
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