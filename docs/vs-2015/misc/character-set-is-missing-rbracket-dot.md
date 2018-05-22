---
title: "Character set is missing &#39;]&#39;. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
---
# Character set is missing &#39;]&#39;.
This error generally occurs when the closing bracket (`]`) is missing for a regular expression specified in a find or replace string.  
  
### To correct this error  
  
1.  To find the literal character `]`, use `\]`.  
  
2.  To match a character set, enter the missing bracket `]`.  
  
## See Also  
 [Using Regular Expressions in Visual Studio](http://msdn.microsoft.com/library/718a617d-0e05-47e1-a218-9746971527f4)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](http://msdn.microsoft.com/library/989e0737-46d7-4474-8453-fad52a74669d)