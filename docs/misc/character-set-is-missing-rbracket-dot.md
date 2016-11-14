---
title: "Character set is missing &#39;]&#39;. | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_RE_SETMISSINGCLOSE"
  - "vs.message.0x800A00C0"
ms.assetid: 97d2436c-498d-4eb0-a08c-8efcc7797fc0
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# Character set is missing &#39;]&#39;.
This error generally occurs when the closing bracket (`]`) is missing for a regular expression specified in a find or replace string.  
  
### To correct this error  
  
1.  To find the literal character `]`, use `\]`.  
  
2.  To match a character set, enter the missing bracket `]`.  
  
## See Also  
 [Using Regular Expressions in Visual Studio](/visual-studio/ide/using-regular-expressions-in-visual-studio)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](/visual-studio/ide/find-in-files)