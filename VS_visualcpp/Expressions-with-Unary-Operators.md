---
title: "Expressions with Unary Operators"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
caps.latest.revision: 8
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
# Expressions with Unary Operators
Unary operators act on only one operand in an expression. The unary operators are as follows:  
  
-   [Indirection operator (*)](../VS_visualcpp/Indirection-Operator---.md)  
  
-   [Address-of operator (&)](../VS_visualcpp/Address-of-Operator---.md)  
  
-   [Unary plus operator (+)](../VS_visualcpp/Unary-Plus-and-Negation-Operators----and--.md)  
  
-   [Unary negation operator (–)](../Topic/Unary%20Negation%20Operator:%20-.md)  
  
-   [Logical negation operator (!)](../VS_visualcpp/Logical-Negation-Operator--!.md)  
  
-   [One's complement operator (~)](../VS_visualcpp/One-s-Complement-Operator--~.md)  
  
-   [Prefix increment operator (++)](../VS_visualcpp/Prefix-Increment-and-Decrement-Operators-----and---.md)  
  
-   [Prefix decrement operator (––)](../VS_visualcpp/Prefix-Increment-and-Decrement-Operators-----and---.md)  
  
-   [Cast operator ()](../VS_visualcpp/Cast-Operator----.md)  
  
-   [sizeof operator](../VS_visualcpp/sizeof-Operator.md)  
  
-   [__uuidof operator](../VS_visualcpp/__uuidof-Operator.md)  
  
-   [__alignof operator](../VS_visualcpp/__alignof-Operator.md)  
  
-   [new operator](../VS_visualcpp/new-Operator--C---.md)  
  
-   [delete operator](../VS_visualcpp/delete-Operator--C---.md)  
  
 These operators have right-to-left associativity. Unary expressions generally involve syntax that precedes a postfix or primary expression.  
  
 The following are the possible forms of unary expressions.  
  
-   *postfix-expression*  
  
-   `++` *unary-expression*  
  
-   `––` *unary-expression*  
  
-   *unary-operator* *cast-expression*  
  
-   `sizeof` *unary-expression*  
  
-   `sizeof(` *type-name* `)`  
  
-   `decltype(` *expression* `)`  
  
-   *allocation-expression*  
  
-   *deallocation-expression*  
  
 Any *postfix-expression* is considered a *unary-expression*, and because any primary expression is considered a *postfix-expression*, any primary expressions is considered a *unary-expression* also. For more information, see [Postfix Expressions](../VS_visualcpp/Postfix-Expressions.md) and [Primary Expressions](../VS_visualcpp/Primary-Expressions.md).  
  
 A *unary-operator* consists of one or more of the following symbols: `* &``+``–``!``~`  
  
 The *cast-expression* is a unary expression with an optional cast to change the type. For more information see [Cast Operator: ()](../VS_visualcpp/Cast-Operator----.md).  
  
 An *expression* can be any expression. For more information, see [Expressions](../VS_visualcpp/Expressions--C---.md).  
  
 The *allocation-expression* refers to the `new` operator. The *deallocation-expression* refers to the `delete` operator. For more information, see the links earlier in this topic.  
  
## See Also  
 [Types of Expressions](../VS_visualcpp/Types-of-Expressions.md)