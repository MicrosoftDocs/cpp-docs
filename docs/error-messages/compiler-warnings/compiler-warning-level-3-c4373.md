---
description: "Learn more about: Compiler Warning (level 4) C4373"
title: "Compiler Warning (level 4) C4373"
ms.date: "11/04/2016"
f1_keywords: ["C4373"]
helpviewer_keywords: ["C4373"]
---
# Compiler Warning (level 4) C4373

> '*function*': virtual function overrides '*base_function*', previous versions of the compiler did not override when parameters only differed by const/volatile qualifiers

## Remarks

Your application contains a method in a derived class that overrides a virtual method in a base class. The parameters in the overriding method differ by a [`const`](../../cpp/const-cpp.md) or [`volatile`](../../cpp/volatile-cpp.md) qualifier from the parameters of the virtual method.

Before Visual Studio 2008, the compiler would bind the function to the method in the base class. Later versions of the compiler ignore the **`const`** or **`volatile`** qualifier, bind the function to the method in the derived class, then issue warning **C4373**. The latter behavior conforms to the C++ standard.

## Example

The following code example generates warning C4373. To resolve this issue, make the override use the same CV-qualifiers as the base member function. If you didn't intend to create an override, rename the function in the derived class.

```cpp
// c4373.cpp
// compile with: /c /W4
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
