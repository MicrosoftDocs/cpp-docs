---
description: "Learn more about: Compiler Warning (level 3) C4373"
title: "Compiler Warning (level 3) C4373"
ms.date: "11/04/2016"
f1_keywords: ["C4373"]
helpviewer_keywords: ["C4373"]
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
---
# Compiler Warning (level 3) C4373

> '*function*': virtual function overrides '*base_function*', previous versions of the compiler did not override when parameters only differed by const/volatile qualifiers

## Remarks

Your application contains a method in a derived class that overrides a virtual method in a base class, and the parameters in the overriding method differ by only a [const](../../cpp/const-cpp.md) or [volatile](../../cpp/volatile-cpp.md) qualifier from the parameters of the virtual method. This means the compiler must bind a function reference to the method in either the base or derived class.

Versions of the compiler prior to Visual Studio 2008 bind the function to the method in the base class, then issue a warning message. Subsequent versions of the compiler ignore the **`const`** or **`volatile`** qualifier, bind the function to the method in the derived class, then issue warning **C4373**. This latter behavior complies with the C++ standard.

## Example

The following code example generates warning C4373. To resolve this issue, you can either make the override use the same CV-qualifiers as the base member function, or if you did not intend to create an override, you can give the function in the derived class a different name.

```cpp
// c4373.cpp
// compile with: /c /W3
#include <stdio.h>
struct Base
{
    virtual void f(int i) {
        printf("base\n");
    }
};

struct Derived : Base
{
    void f(const int i) {  // C4373
        printf("derived\n");
    }
};

int main()
{
    Derived d;
    Base* p = &d;
    p->f(1);
}
```

```Output
derived
```
