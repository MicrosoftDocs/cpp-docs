---
title: "Command-Line Warning D9042"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "D9042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9042"
ms.assetid: d710693b-e422-40b2-b2dd-79e1b163b9e6
caps.latest.revision: 3
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
---
# Command-Line Warning D9042
invalid value 'value' for '/option'; assuming 'value'; Code Analysis warnings are not available in this edition of the compiler  
  
 A Code Analysis warning number was added to the **/wd**, **/we**, **/wo**, or **/wl** command line option and the **/analyze** command line option was specified on a platform that does not support Code Analysis. To remedy this warning, either switch to the x86 version of Visual Studio Team System, or remove the **/analyze** command line option.  
  
## Example  
 The following command line example generates the warning D9042 on an x64 or Itanium system:  
  
```  
cl /EHsc /LD /wd6001 /analyze filename.cpp  
```  
  
 To remedy this warning, either switch to the x86 version of Visual Studio Team System, or remove the **/analyze** and **/wd6001** command line options.  
  
## See Also  
 [Command-Line Errors D8000 Through D9999](../othererrors/command-line-errors-d8000-through-d9999.md)   
 [Compiler Options](../buildref/compiler-options.md)