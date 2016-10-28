---
title: "The &#39;&lt;keyword&gt;&#39; keyword is used to overload inherited members; do not use the &#39;&lt;keyword&gt;&#39; keyword when overloading &#39;Sub New&#39;"
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
  - "vbc32040"
  - "bc32040"
helpviewer_keywords: 
  - "BC32040"
ms.assetid: 39e6ee0d-b8a0-498e-bdaf-a4ceb13892fe
caps.latest.revision: 10
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
# The &#39;&lt;keyword&gt;&#39; keyword is used to overload inherited members; do not use the &#39;&lt;keyword&gt;&#39; keyword when overloading &#39;Sub New&#39;
A constructor is declared with the `Overloads` keyword.  
  
 Visual Basic does not support inheriting or overloading constructors.  
  
 **Error ID:** BC32040  
  
### To correct this error  
  
-   Remove the `Overloads` keyword from all constructor declarations.  
  
## See Also  
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Using Constructors and Destructors](assetId:///548eebe1-86c4-4377-b2f5-447cb8be3d90)