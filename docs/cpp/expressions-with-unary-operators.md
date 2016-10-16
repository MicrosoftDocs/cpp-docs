---
title: "Expressions with Unary Operators"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "expressions [C++], unary operators"
  - "unary operators, expressions with"
  - "expressions [C++], operators"
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Expressions with Unary Operators
Unary operators act on only one operand in an expression. The unary operators are as follows:  
  
-   [Indirection operator (*)](../cpp/indirection-operator---.md)  
  
-   [Address-of operator (&)](../cpp/address-of-operator---.md)  
  
-   [Unary plus operator (+)](../cpp/unary-plus-and-negation-operators----and--.md)  
  
-   [Unary negation operator (–)](../notintoc/unary-negation-operator---.md)  
  
-   [Logical negation operator (!)](../cpp/logical-negation-operator--!.md)  
  
-   [One's complement operator (~)](../cpp/one-s-complement-operator--~.md)  
  
-   [Prefix increment operator (++)](../cpp/prefix-increment-and-decrement-operators-----and---.md)  
  
-   [Prefix decrement operator (––)](../cpp/prefix-increment-and-decrement-operators-----and---.md)  
  
-   [Cast operator ()](../cpp/cast-operator----.md)  
  
-   [sizeof operator](../cpp/sizeof-operator.md)  
  
-   [__uuidof operator](../cpp/__uuidof-operator.md)  
  
-   [__alignof operator](../cpp/__alignof-operator.md)  
  
-   [new operator](../cpp/new-operator--c---.md)  
  
-   [delete operator](../cpp/delete-operator--c---.md)  
  
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
  
 Any *postfix-expression* is considered a *unary-expression*, and because any primary expression is considered a *postfix-expression*, any primary expressions is considered a *unary-expression* also. For more information, see [Postfix Expressions](../cpp/postfix-expressions.md) and [Primary Expressions](../cpp/primary-expressions.md).  
  
 A *unary-operator* consists of one or more of the following symbols: `* &``+``–``!``~`  
  
 The *cast-expression* is a unary expression with an optional cast to change the type. For more information see [Cast Operator: ()](../cpp/cast-operator----.md).  
  
 An *expression* can be any expression. For more information, see [Expressions](../cpp/expressions--c---.md).  
  
 The *allocation-expression* refers to the `new` operator. The *deallocation-expression* refers to the `delete` operator. For more information, see the links earlier in this topic.  
  
## See Also  
 [Types of Expressions](../cpp/types-of-expressions.md)