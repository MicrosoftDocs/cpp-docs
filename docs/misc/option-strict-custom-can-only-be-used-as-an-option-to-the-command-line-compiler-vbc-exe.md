---
title: "Option Strict Custom can only be used as an option to the command-line compiler (vbc.exe) | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31141"
  - "bc31141"
helpviewer_keywords: 
  - "BC31141"
ms.assetid: c32ae8ff-aacc-40b4-960a-6f2d5d246671
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Option Strict Custom can only be used as an option to the command-line compiler (vbc.exe)
The `Option Strict` statement takes only `On` and `Off` as arguments; `Option Strict Custom` is not allowed.  
  
 Use the `/optionstrict:custom` compiler option to warn when strict language semantics are not respected.  
  
 **Error ID:** BC31141  
  
### To correct this error  
  
1.  Remove `Option Strict Custom` from the source code.  
  
2.  Specify the `/optionstrict:custom` option. For more information, see [/optionstrict](/dotnet/articles/visual-basic/reference/command-line-compiler/optionstrict).  
  
## See Also  
 [Option \<keyword> Statement](../Topic/Option%20%3Ckeyword%3E%20Statement.md)   
 [Option Strict Statement](/dotnet/articles/visual-basic/language-reference/statements/option-strict-statement)   
 [/optionstrict](/dotnet/articles/visual-basic/reference/command-line-compiler/optionstrict)