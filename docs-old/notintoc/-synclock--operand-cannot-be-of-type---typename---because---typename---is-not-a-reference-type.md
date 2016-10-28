---
title: "&#39;SyncLock&#39; operand cannot be of type &#39;&lt;typename&gt;&#39; because &#39;&lt;typename&gt;&#39; is not a reference type"
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
  - "vbc30582"
  - "bc30582"
helpviewer_keywords: 
  - "BC30582"
ms.assetid: 953aecf2-629a-4272-94bd-abf88f785e63
caps.latest.revision: 8
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
# &#39;SyncLock&#39; operand cannot be of type &#39;&lt;typename&gt;&#39; because &#39;&lt;typename&gt;&#39; is not a reference type
The `SyncLock` statement allows statements to be synchronized on a single expression by ensuring that multiple threads do not execute the same statements at the same time. The type of expression in a `SyncLock` statement must be a reference type, such as a class, a module, an interface, an array, or a delegate.  
  
 **Error ID:** BC30582  
  
### To correct this error  
  
-   Change the type to an appropriate reference type.  
  
## See Also  
 [SyncLock Statement](../Topic/SyncLock%20Statement.md)   
 [NOT IN BUILD: Multithreading in Visual Basic](assetId:///c731a50c-09c1-4468-9646-54c86b75d269)