---
title: "Option Strict Custom can only be used as an option to the command-line compiler (vbc.exe)"
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
  - "vbc31141"
  - "bc31141"
helpviewer_keywords: 
  - "BC31141"
ms.assetid: c32ae8ff-aacc-40b4-960a-6f2d5d246671
caps.latest.revision: 5
ms.author: "billchi"
manager: "douge"
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
  
2.  Specify the `/optionstrict:custom` option. For more information, see [/optionstrict](../Topic/-optionstrict.md).  
  
## See Also  
 [Option \<keyword> Statement](../Topic/Option%20%3Ckeyword%3E%20Statement.md)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [/optionstrict](../Topic/-optionstrict.md)