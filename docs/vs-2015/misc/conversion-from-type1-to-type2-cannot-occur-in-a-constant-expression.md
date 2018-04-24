---
title: "Conversion from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39; cannot occur in a constant expression | Microsoft Docs"
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
  - "bc30060"
  - "vbc30060"
helpviewer_keywords: 
  - "BC30060"
ms.assetid: bea60254-67b6-4881-91d2-47854c4d073c
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversion from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39; cannot occur in a constant expression
The initialization expression in a `Const` statement evaluates to a data type that cannot be converted to the declared type of the constant.  
  
 **Error ID:** BC30060  
  
### To correct this error  
  
1.  Initialize the constant with an expression of a data type that can be converted to the type declared for the constant.  
  
## See Also  
 [Const Statement](http://msdn.microsoft.com/library/495b318d-b7c5-4198-94f8-0790a541b07a)   
 [Type Conversions in Visual Basic](http://msdn.microsoft.com/library/1cdacd21-ba31-4b62-b5be-395e41eeaa17)