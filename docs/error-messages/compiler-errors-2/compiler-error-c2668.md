---
description: "Learn more about: Compiler Error C2668"
title: "Compiler Error C2668"
ms.date: "03/28/2017"
f1_keywords: ["C2668"]
helpviewer_keywords: ["C2668"]
ms.assetid: 041e9627-1c76-420e-a653-cfc83f933bd3
---
# Compiler Error C2668

'function' : ambiguous call to overloaded function

The specified overloaded function call could not be resolved. You may want to explicitly cast one or more of the actual parameters.

You can also get this error through template use. If, in the same class, you have a regular member function and a templated member function with the same signature, the templated one must come first. This is a limitation of the current implementation of Visual C++.

## Examples

The following sample generates C2668:

```cpp
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

Another way to resolve this error is with a [using declaration](../../cpp/using-declaration.md):

```cpp
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

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: ambiguous conversion on cast of constant 0.

Conversion on a cast using constant 0 is ambiguous since int requires a conversion both to long and to void*. To resolve this error, cast 0 to the exact type of the function parameter it is being used for so that no conversions need to take place (this code will be valid in the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++).

```cpp
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

This error can occur because the CRT now has float and double forms of all math functions.

```cpp
// C2668d.cpp
#include <math.h>
int main() {
   int i = 0;
   float f;
   f = cos(i);   // C2668
   f = cos((float)i);   // OK
}
```

This error can occur because the pow(int, int) was removed from math.h in the CRT.

```cpp
// C2668e.cpp
#include <math.h>
int main() {
   pow(9,9);   // C2668
   pow((double)9,9);   // OK
}
```

This code succeeds in Visual Studio 2015 but fails in Visual Studio 2017 and later with C2668. In Visual Studio 2015, the compiler erroneously treated copy-list-initialization in the same way as regular copy-initialization; it considered only converting constructors for overload resolution.

```cpp
struct A {
    explicit A(int) {}
};

struct B {
    B(int) {}
};

void f(const A&) {}
void f(const B&) {}

int main()
{
    f({ 1 }); // error C2668: 'f': ambiguous call to overloaded function
}
```
