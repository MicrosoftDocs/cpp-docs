---
title: "Expressions in Parentheses"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: b8636147-6982-408c-9e64-29e40678ee43
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Expressions in Parentheses
You can enclose any operand in parentheses without changing the type or value of the enclosed expression. For example, in the expression:  
  
```  
( 10 + 5 ) / 5  
```  
  
 the parentheses around `10 + 5` mean that the value of `10 + 5` is evaluated first and it becomes the left operand of the division (**/**) operator. The result of `( 10 + 5 ) / 5` is 3. Without the parentheses, `10 + 5 / 5` would evaluate to 11.  
  
 Although parentheses affect the way operands are grouped in an expression, they cannot guarantee a particular order of evaluation in all cases. For example, neither the parentheses nor the left-to-right grouping of the following expression guarantees what the value of `i` will be in either of the subexpressions:  
  
```  
( i++ +1 ) * ( 2 + i )  
```  
  
 The compiler is free to evaluate the two sides of the multiplication in any order. If the initial value of `i` is zero, the whole expression could be evaluated as either of these two statements:  
  
```  
( 0 + 1 + 1 ) * ( 2 + 1 )   
( 0 + 1 + 1 ) * ( 2 + 0 )  
```  
  
 Exceptions resulting from side effects are discussed in [Side Effects](../VS_visualcpp/Side-Effects.md).  
  
## See Also  
 [C Primary Expressions](../VS_visualcpp/C-Primary-Expressions.md)