---
title: "Overloading Unary Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unary operators, plus"
  - "increment operators, overloaded"
  - "unary operators, minus"
  - "operators [C++], unary"
  - "redefinable unary operators"
  - "unary operators"
  - "pointer dereference operator overloading"
  - "plus operator"
ms.assetid: 7683ef08-42a4-4283-928f-d3dd4f3ab4c0
caps.latest.revision: 10
author: "mikeblome"
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
# Overloading Unary Operators
The unary operators that can be overloaded are the following:  
  
1.  `!` ([logical NOT](../cpp/logical-negation-operator-exclpt.md))  
  
2.  `&` ([address-of](../cpp/address-of-operator-amp.md))  
  
3.  `~` ([one's complement](../cpp/one-s-complement-operator-tilde.md))  
  
4.  `*` ([pointer dereference](../cpp/indirection-operator-star.md))  
  
5.  `+` ([unary plus](../cpp/additive-operators-plus-and.md))  
  
6.  `-` ([unary negation](../cpp/additive-operators-plus-and.md))  
  
7.  `++` ([increment](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))  
  
8.  `--` ([decrement](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))  
  
9. conversion operators  
  
 The postfix increment and decrement operators (`++` and **––**) are treated separately in [Increment and Decrement](../cpp/increment-and-decrement-operator-overloading-cpp.md).  
  
 Conversion operators are also discussed in a separate topic; see [User-Defined Type Conversions](../cpp/user-defined-type-conversions-cpp.md).  
  
 The following rules are true of all other unary operators. To declare a unary operator function as a nonstatic member, you must declare it in the form:  
  
 `ret-type operator` `op` `()`  
  
 where `ret-type` is the return type and `op` is one of the operators listed in the preceding table.  
  
 To declare a unary operator function as a global function, you must declare it in the form:  
  
 `ret-type operator` `op` (`arg` )  
  
 where `ret-type` and `op` are as described for member operator functions and the `arg` is an argument of class type on which to operate.  
  
> [!NOTE]
>  There is no restriction on the return types of the unary operators. For example, it makes sense for logical NOT (`!`) to return an integral value, but this is not enforced.  
  
## See Also  
 [Operator Overloading](../cpp/operator-overloading.md)