---
title: "-Qimprecise_fwaits (Remove fwaits Inside Try Blocks) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Qimprecise_fwaits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Qimprecise_fwaits compiler option (C++)"
  - "/Qimprecise_fwaits compiler option (C++)"
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
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
# /Qimprecise_fwaits (Remove fwaits Inside Try Blocks)
Removes the `fwait` commands internal to `try` blocks when you use the [/fp:except](../../build/reference/fp-specify-floating-point-behavior.md) compiler option.  
  
## Syntax  
  
```  
/Qimprecise_fwaits  
```  
  
## Remarks  
 This option has no effect if **/fp:except** is not also specified. If you specify the **/fp:except** option, the compiler will insert a `fwait` command around each line of code in a `try` block. In this way, the compiler can identify the specific line of code that produces an exception. **/Qimprecise_fwaits** removes internal `fwait` instructions, leaving only the waits around the `try` block. This improves performance, but the compiler will only be able to say which `try` block causes an exception, not which line.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../../build/reference/q-options-low-level-operations.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)