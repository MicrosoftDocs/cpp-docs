---
title: "Lvalues and Rvalues (Visual C++) | Microsoft Docs"
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
  - "R-values"
  - "L-values"
ms.assetid: a8843344-cccc-40be-b701-b71f7b5cdcaf
caps.latest.revision: 14
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
# Lvalues and Rvalues (Visual C++)
Every C++ expression is either an lvalue or an rvalue. An lvalue refers to an object that persists beyond a single expression. You can think of an lvalue as an object that has a name. All variables, including nonmodifiable (`const`) variables, are lvalues. An rvalue is a temporary value that does not persist beyond the expression that uses it. To better understand the difference between lvalues and rvalues, consider the following example:  
  
```  
// lvalues_and_rvalues1.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
int main()  
{  
   int x = 3 + 4;  
   cout << x << endl;  
}  
```  
  
 In this example, `x` is an lvalue because it persists beyond the expression that defines it. The expression `3 + 4` is an rvalue because it evaluates to a temporary value that does not persist beyond the expression that defines it.  
  
 The following example demonstrates several correct and incorrect usages of lvalues and rvalues:  
  
```  
// lvalues_and_rvalues2.cpp  
int main()  
{  
   int i, j, *p;  
  
   // Correct usage: the variable i is an lvalue.  
   i = 7;  
  
   // Incorrect usage: The left operand must be an lvalue (C2106).  
   7 = i; // C2106  
   j * 4 = 7; // C2106  
  
   // Correct usage: the dereferenced pointer is an lvalue.  
   *p = i;   
  
   const int ci = 7;  
   // Incorrect usage: the variable is a non-modifiable lvalue (C3892).  
   ci = 9; // C3892  
  
   // Correct usage: the conditional operator returns an lvalue.  
   ((i < 3) ? i : j) = 7;  
}  
```  
  
> [!NOTE]
>  The examples in this topic illustrate correct and incorrect usage when operators are not overloaded. By overloading operators, you can make an expression such as `j * 4` an lvalue.  
  
 The terms *lvalue* and *rvalue* are often used when you refer to object references. For more information about references, see [Lvalue Reference Declarator: &](../cpp/lvalue-reference-declarator-amp.md) and [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## See Also  
 [Basic Concepts](../cpp/basic-concepts-cpp.md)   
 [Lvalue Reference Declarator: &](../cpp/lvalue-reference-declarator-amp.md)   
 [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md)