---
title: "Expression is of type &#39;&lt;typename&gt;&#39;, which is not a collection type"
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
  - "bc32023"
  - "vbc32023"
helpviewer_keywords: 
  - "BC32023"
ms.assetid: d0f151be-6b65-498b-b571-03faf24df0d8
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
# Expression is of type &#39;&lt;typename&gt;&#39;, which is not a collection type
The group variable specified in a `For Each` statement is not a collection object or an array, and its type does not implement the \<xref:System.Collections.IEnumerable> interface. The type must either support the [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] collection design pattern or implement \<xref:System.Collections.IEnumerable>.  
  
 **Error ID:** BC32023  
  
### To correct this error  
  
-   Declare the group variable to be of a class type that either supports the [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] collection design or implements \<xref:System.Collections.IEnumerable>.  
  
## See Also  
 \<xref:System.Collections.IEnumerable>   
 [For Each...Next Statement](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)   
 [Visual Basic Collection Class](assetId:///0cb2d1ad-c58d-42c0-8e69-d81f5a15e532)