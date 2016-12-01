---
title: "Indirection Operator: * | Microsoft Docs"
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
  - "* operator"
  - "indirection operator"
  - "operators [C++], indirection"
  - "indirection operator, syntax"
ms.assetid: c50309e1-6c02-4184-9fcb-2e13c1f4ac03
caps.latest.revision: 7
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
# Indirection Operator: *
## Syntax  
  
```  
  
* cast-expression  
```  
  
## Remarks  
 The unary indirection operator (**\***) dereferences a pointer; that is, it converts a pointer value to an l-value. The operand of the indirection operator must be a pointer to a type. The result of the indirection expression is the type from which the pointer type is derived. The use of the **\*** operator in this context is different from its meaning as a binary operator, which is multiplication.  
  
 If the operand points to a function, the result is a function designator. If it points to a storage location, the result is an l-value designating the storage location.  
  
 The indirection operator may be used cumulatively to dereference pointers to pointers. For example:  
  
```  
// expre_Indirection_Operator.cpp  
// compile with: /EHsc  
// Demonstrate indirection operator  
#include <iostream>  
using namespace std;  
int main() {  
   int n = 5;  
   int *pn = &n;  
   int **ppn = &pn;  
  
   cout  << "Value of n:\n"  
         << "direct value: " << n << endl  
         << "indirect value: " << *pn << endl  
         << "doubly indirect value: " << **ppn << endl  
         << "address of n: " << pn << endl  
         << "address of n via indirection: " << *ppn << endl;  
}  
```  
  
 If the pointer value is invalid, the result is undefined. The following list includes some of the most common conditions that invalidate a pointer value.  
  
-   The pointer is a null pointer.  
  
-   The pointer specifies the address of a local item that is not visible at the time of the reference.  
  
-   The pointer specifies an address that is inappropriately aligned for the type of the object pointed to.  
  
-   The pointer specifies an address not used by the executing program.  
  
## See Also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Address-of Operator: &](../cpp/address-of-operator-amp.md)   
 [Indirection and Address-of Operators](../c-language/indirection-and-address-of-operators.md)