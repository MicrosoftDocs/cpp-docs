---
title: "Structure &#39;&lt;structurename&gt;&#39; cannot contain an instance of itself: &lt;error&gt;"
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
  - "vbc30294"
  - "bc30294"
helpviewer_keywords: 
  - "BC30294"
ms.assetid: 17780e11-2425-4860-9345-b5db019d2bf3
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
# Structure &#39;&lt;structurename&gt;&#39; cannot contain an instance of itself: &lt;error&gt;
A structure declares a variable and initializes it with an instance of itself.  
  
 A structure can contain instances of other structures, but not an internal instance of itself. An attempt to do so would lead to infinite recursion.  
  
 **Error ID:** BC30294  
  
### To correct this error  
  
1.  Check the spelling of the initialization expression in the declaration statement.  
  
2.  If you intend to create another instance of the same structure, you must declare and create it outside the structure.  
  
## See Also  
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)