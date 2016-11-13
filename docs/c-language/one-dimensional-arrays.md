---
title: "One-Dimensional Arrays | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "brackets [ ]"
  - "brackets [ ], arrays"
  - "one-dimensional arrays"
  - "arrays [C++], one-dimensional"
  - "square brackets [ ]"
  - "square brackets [ ], arrays"
  - "subscript expressions"
ms.assetid: e28536e5-3b77-46b5-97fd-9b938c771816
caps.latest.revision: 8
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
# One-Dimensional Arrays
A postfix expression followed by an expression in square brackets (**[ ]**) is a subscripted representation of an element of an array object. A subscript expression represents the value at the address that is *expression* positions beyond *postfix-expression* when expressed as  
  
```  
  
postfix-expression  
[  
expression  
]  
  
```  
  
 Usually, the value represented by *postfix-expression* is a pointer value, such as an array identifier, and *expression* is an integral value. However, all that is required syntactically is that one of the expressions be of pointer type and the other be of integral type. Thus the integral value could be in the *postfix-expression* position and the pointer value could be in the brackets in the *expression*, or "subscript," position. For example, this code is legal:  
  
```  
// one_dimensional_arrays.c  
int sum, *ptr, a[10];  
int main() {  
   ptr = a;  
   sum = 4[ptr];  
}  
```  
  
 Subscript expressions are generally used to refer to array elements, but you can apply a subscript to any pointer. Whatever the order of values, *expression* must be enclosed in brackets (**[ ]**).  
  
 The subscript expression is evaluated by adding the integral value to the pointer value, then applying the indirection operator (**\***) to the result. (See [Indirection and Address-of Operators](../c-language/indirection-and-address-of-operators.md) for a discussion of the indirection operator.) In effect, for a one-dimensional array, the following four expressions are equivalent, assuming that `a` is a pointer and `b` is an integer:  
  
```  
a[b]  
*(a + b)  
*(b + a)  
b[a]  
```  
  
 According to the conversion rules for the addition operator (given in [Additive Operators](../c-language/c-additive-operators.md)), the integral value is converted to an address offset by multiplying it by the length of the type addressed by the pointer.  
  
 For example, suppose the identifier `line` refers to an array of `int` values. The following procedure is used to evaluate the subscript expression `line[ i ]`:  
  
1.  The integer value `i` is multiplied by the number of bytes defined as the length of an `int` item. The converted value of `i` represents `i` `int` positions.  
  
2.  This converted value is added to the original pointer value (`line`) to yield an address that is offset `i` `int` positions from `line`.  
  
3.  The indirection operator is applied to the new address. The result is the value of the array element at that position (intuitively, `line [ i ]`).  
  
 The subscript expression `line[0]` represents the value of the first element of line, since the offset from the address represented by `line` is 0. Similarly, an expression such as `line[5]` refers to the element offset five positions from line, or the sixth element of the array.  
  
## See Also  
 [Subscript Operator:](../cpp/subscript-operator.md)