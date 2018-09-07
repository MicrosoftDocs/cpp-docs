---
title: "Compiler Error C2678 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2678"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2678"]
ms.assetid: 1f0a4e26-b429-44f5-9f94-cb66441220c8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2678
binary 'operator' : no operator defined which takes a left-hand operand of type 'type' (or there is no acceptable conversion)  
  
 To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.  
  
## Example  
 C2678 can occur when the left-hand operand is const-qualified but the operator is defined to take a non-const argument.  
  
 The following sample generates C2678 and shows how to fix it:  
  
```  
// C2678a.cpp  
// Compile by using: cl /EHsc /W4 C2678a.cpp  
struct Combo {  
   int number;  
   char letter;  
};  
  
inline Combo& operator+=(Combo& lhs, int rhs) {  
   lhs.number += rhs;  
   return lhs;  
}  
  
int main() {  
   Combo const combo1{ 42, 'X' };  
   Combo combo2{ 13, 'Z' };  
  
   combo1 += 6; // C2678  
   combo2 += 9; // OK - operator+= matches non-const Combo  
}  
```  
  
## Example  
 C2678 can also occur if you do not pin a native member before calling a member function on it.  
  
 The following sample generates C2678 and shows how to fix it.  
  
```  
// C2678.cpp  
// compile with: /clr /c  
struct S { int _a; };  
  
ref class C {  
public:  
   void M( S param ) {  
      test = param;   // C2678  
  
      // OK  
      pin_ptr<S> ptest = &test;  
      *ptest = param;  
   }  
   S test;  
};  
```  
