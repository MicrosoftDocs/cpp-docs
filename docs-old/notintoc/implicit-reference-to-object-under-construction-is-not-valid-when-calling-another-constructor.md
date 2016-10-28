---
title: "Implicit reference to object under construction is not valid when calling another constructor"
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
  - "vbc31096"
  - "bc31096"
helpviewer_keywords: 
  - "BC31096"
ms.assetid: 558a2beb-aa5d-41a8-8655-ad3d16ac8acd
caps.latest.revision: 9
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
# Implicit reference to object under construction is not valid when calling another constructor
A reference was made to an object member before the objects constructor finished constructing the object.  
  
 **Error ID:** BC31096  
  
### To correct this error  
  
-   Do not use `MyBase`, `MyClass`, or `Me` when calling a constructor from another constructor.  
  
## See Also  
 [Object Lifetime: How Objects Are Created and Destroyed](../Topic/Object%20Lifetime:%20How%20Objects%20Are%20Created%20and%20Destroyed%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Using Constructors and Destructors](assetId:///548eebe1-86c4-4377-b2f5-447cb8be3d90)