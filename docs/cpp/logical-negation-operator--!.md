---
title: "Logical Negation Operator: !"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "!"
  - "Not"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "! operator"
  - "NOT operator"
  - "logical negation"
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
caps.latest.revision: 9
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
# Logical Negation Operator: !
## Syntax  
  
```  
  
! cast-expression  
```  
  
## Remarks  
 The logical negation operator (**!**) reverses the meaning of its operand. The operand must be of arithmetic or pointer type (or an expression that evaluates to arithmetic or pointer type). The operand is implicitly converted to type `bool`. The result is **true** if the converted operand is **false**; the result is **false** if the converted operand is **true**. The result is of type `bool`.  
  
 For an expression *e*, the unary expression **!***e* is equivalent to the expression **(***e* `==` 0), except where overloaded operators are involved.  
  
## Operator Keyword for !  
 The **not** operator is the text equivalent of **!**. There are two ways to access the **not** operator in your programs: include the header file `iso646.h`, or compile with the [/Za](../buildref/-za---ze--disable-language-extensions-.md) (Disable language extensions) compiler option.  
  
## Example  
  
```  
// expre_Logical_NOT_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main() {  
   int i = 0;  
   if (!i)  
      cout << "i is zero" << endl;  
}  
```  
  
## See Also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)   
 [C++ Operators](../notintoc/c---operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/c---built-in-operators--precedence-and-associativity.md)   
 [Unary Arithmetic Operators](../c/unary-arithmetic-operators.md)