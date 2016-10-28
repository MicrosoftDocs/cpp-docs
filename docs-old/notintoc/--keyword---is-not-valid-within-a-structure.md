---
title: "&#39;&lt;keyword&gt;&#39; is not valid within a structure"
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
  - "bc30044"
  - "vbc30044"
helpviewer_keywords: 
  - "BC30044"
ms.assetid: 252510cf-e084-47e4-9592-4aa8f94fabe4
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
# &#39;&lt;keyword&gt;&#39; is not valid within a structure
Structures are value types, not reference types. A structure is not an instance created from a class, so the `Me`, `MyClass`, and `MyBase` keywords are meaningless in a structure.  
  
 **Error ID:** BC30044  
  
### To correct this error  
  
-   Change the structure to a class, or remove the keyword from the procedure.  
  
## See Also  
 [Me](assetId:///a65973c7-cf06-4547-9b25-9fba885525c2)   
 [MyClass - delete](assetId:///5db36f9b-f796-4b6a-ba34-cac1fde6eb62)   
 [MyBase - delete](assetId:///52491d06-6451-4f6f-9aa6-8fab59bbc2b9)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)