---
title: "Logical AND Operator: &amp;&amp; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "&&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "logical AND operator"
  - "AND operator"
  - "&& operator"
ms.assetid: 50cfa664-a8c4-4b31-9bab-2f80d7cd2d1f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Logical AND Operator: &amp;&amp;
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Logical AND Operator: &amp;&amp;](https://docs.microsoft.com/cpp/cpp/logical-and-operator-amp-amp).  
  
Syntax  
  
```  
  
expression   
&&  
 expression  
  
```  
  
## Remarks  
 The logical AND operator (**&&**) returns the boolean value **true** if both operands are **true** and returns **false** otherwise. The operands are implicitly converted to type `bool` prior to evaluation, and the result is of type `bool`. Logical AND has left-to-right associativity.  
  
 The operands to the logical AND operator need not be of the same type, but they must be of integral or pointer type. The operands are commonly relational or equality expressions.  
  
 The first operand is completely evaluated and all side effects are completed before continuing evaluation of the logical AND expression.  
  
 The second operand is evaluated only if the first operand evaluates to true (nonzero). This evaluation eliminates needless evaluation of the second operand when the logical AND expression is false. You can use this short-circuit evaluation to prevent null-pointer dereferencing, as shown in the following example:  
  
```  
char *pch = 0;  
...  
(pch) && (*pch = 'a');  
```  
  
 If `pch` is null (0), the right side of the expression is never evaluated. Therefore, the assignment through a null pointer is impossible.  
  
## Operator Keyword for &&  
 The **and** operator is the text equivalent of **&&**. There are two ways to access the **and** operator in your programs: include the header file `iso646.h`, or compile with the [/Za](../build/reference/za-ze-disable-language-extensions.md) (Disable language extensions) compiler option.  
  
## Example  
  
```  
// expre_Logical_AND_Operator.cpp  
// compile with: /EHsc  
// Demonstrate logical AND  
#include <iostream>  
  
using namespace std;  
  
int main() {  
   int a = 5, b = 10, c = 15;  
   cout  << boolalpha  
         << "The true expression "  
         << "a < b && b < c yields "  
         << (a < b && b < c) << endl  
         << "The false expression "  
         << "a > b && b < c yields "  
         << (a > b && b < c) << endl;  
}  
```  
  
## See Also  
 [Logical Operators](../misc/logical-operators.md)   
 [C++ Operators](../misc/cpp-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [C Logical Operators](../c-language/c-logical-operators.md)





