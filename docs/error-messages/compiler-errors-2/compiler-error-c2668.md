---
title: "Compiler Error C2668 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2668"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2668"
ms.assetid: 041e9627-1c76-420e-a653-cfc83f933bd3
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
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
# Compiler Error C2668
'function' : ambiguous call to overloaded function  
  
 The specified overloaded function call could not be resolved. You may want to explicitly cast one or more of the actual parameters.  
  
 You can also get this error through template use. If, in the same class, you have a regular member function and a templated member function with the same signature, the templated one must come first. This is a limitation of the current implementation of Visual C++.  
  
 See Knowledge Base article Q240869 for more information on partial ordering of function templates.  
  
 If you are building an ATL project containing a COM object supporting `ISupportErrorInfo`, see Knowledge Base article Q243298.  
  
## Example  
 The following sample generates C2668:  
  
```  
// C2668.cpp  
struct A {};  
struct B : A {};  
struct X {};  
struct D : B, X {};  
  
void func( X, X ){}  
void func( A, B ){}  
D d;  
int main() {  
   func( d, d );   // C2668 D has an A, B, and X   
   func( (X)d, (X)d );   // OK, uses func( X, X )  
}  
```  
  
## Example  
 Another way to resolve this error is with a [using declaration](../../cpp/using-declaration.md):  
  
```  
// C2668b.cpp  
// compile with: /EHsc /c  
// C2668 expected  
#include <iostream>  
class TypeA {  
public:  
   TypeA(int value) {}  
};  
  
class TypeB {  
   TypeB(int intValue);  
   TypeB(double dbValue);  
};  
  
class TestCase {  
public:  
   void AssertEqual(long expected, long actual, std::string  
                    conditionExpression = "");  
};  
  
class AppTestCase : public TestCase {  
public:  
   // Uncomment the following line to resolve.  
   // using TestCase::AssertEqual;  
   void AssertEqual(const TypeA expected, const TypeA actual,  
                    std::string conditionExpression = "");  
   void AssertEqual(const TypeB expected, const TypeB actual,  
                    std::string conditionExpression = "");  
};  
  
class MyTestCase : public AppTestCase {  
   void TestSomething() {  
      int actual = 0;  
      AssertEqual(0, actual, "Value");  
   }  
};  
```  
  
## Example  
 This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: ambiguous conversion on cast of constant 0.  
  
 Conversion on a cast using constant 0 is ambiguous since int requires a conversion both to long and to void*. To resolve this error, cast 0 to the exact type of the function parameter it is being used for so that no conversions need to take place (this code will be valid in the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++).  
  
```  
// C2668c.cpp  
#include "stdio.h"  
void f(long) {  
   printf_s("in f(long)\n");  
}  
void f(void*) {  
   printf_s("in f(void*)\n");  
}  
int main() {  
   f((int)0);   // C2668  
  
   // OK  
   f((long)0);  
   f((void*)0);  
}  
```  
  
## Example  
 This error can occur because the CRT now has float and double forms of all math functions.  
  
```  
// C2668d.cpp  
#include <math.h>  
int main() {  
   int i = 0;  
   float f;  
   f = cos(i);   // C2668  
   f = cos((float)i);   // OK  
}  
```  
  
## Example  
 This error can occur because the pow(int, int) was removed from math.h in the CRT.  
  
```  
// C2668e.cpp  
#include <math.h>  
int main() {  
   pow(9,9);   // C2668  
   pow((double)9,9);   // OK  
}  
```