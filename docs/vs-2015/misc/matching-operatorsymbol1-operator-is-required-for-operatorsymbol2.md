---
title: "Matching &#39;&lt;operatorsymbol1&gt;&#39; operator is required for &#39;&lt;operatorsymbol2&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33033"
  - "vbc33033"
helpviewer_keywords: 
  - "BC33033"
ms.assetid: d2805e4f-08a8-4760-9539-565f51b88d13
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Matching &#39;&lt;operatorsymbol1&gt;&#39; operator is required for &#39;&lt;operatorsymbol2&gt;&#39;
An operator is defined when its required matching operator is not defined.  
  
 The following operators must be defined as matched pairs:  
  
-   `=` and `<>`  
  
-   `>` and `<`  
  
-   `>=` and `<=`  
  
-   `IsTrue` and `IsFalse`  
  
 If you define any of these operators in a class or structure, you must also define its matching operator in the same class or structure.  
  
 Even if you do not use the matching operator explicitly, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] might need to use it. For example, if you define a class or structure that you use as the counter variable in a [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9), [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] requires both the `>=` and `<=` operators (as well as the `+` operator).  
  
 **Error ID:** BC33033  
  
### To correct this error  
  
-   Define the matching operator in the same class or structure. Make every effort to define it meaningfully, because [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] might use it in a situation you do not anticipate.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)   
 [Operators and Expressions](http://msdn.microsoft.com/library/b86f3131-94ee-448f-96cd-79611e028b26)