---
title: "-diagnostics (Compiler diagnostic options) | Microsoft Docs"
ms.custom: ""
ms.date: "11/11/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/diagnostics"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/diagnostics compiler diagnostic options [C++]"
  - "-diagnostics compiler diagnostic options [C++]"
  - "diagnostics compiler diagnostic options [C++]"
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
caps.latest.revision: 15
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
# /diagnostics (Compiler diagnostic options)  
Use the **/diagnostics** compiler option to specify the display of error and warning location information.  
  
## Syntax
```  
/diagnostics:{caret|classic|column}
```  

## Remarks  
The **/diagnostics** compiler option controls the display of error and warning information.  
  
The **/diagnostics:classic** option is the default, which reports only the line number where the issue was found.  

The **/diagnostics:column** option also includes the column where the issue was found. This can help you identify the specific language construct or character that is causing the issue.  

The **/diagnostics:caret** option includes the column where the issue was found and places a caret (^) under the location in the line of code where the issue was detected.

Note that in some cases, the compiler does not detect an issue where it occurred. For example, a missing semicolon may not be detected until other, unexpected symbols have been encountered. The column is reported and the caret is placed where the compiler detected that something was wrong, which is not always where you need to make your correction.  

The /diagnostics option is available starting in Visual Studio 2017 RC.
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)