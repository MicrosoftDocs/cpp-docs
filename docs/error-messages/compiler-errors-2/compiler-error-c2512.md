---
description: "Learn more about: Compiler Error C2512"
title: "Compiler Error C2512"
ms.date: "02/09/2018"
f1_keywords: ["C2512"]
helpviewer_keywords: ["C2512"]
ms.assetid: 15206da9-1164-451a-b869-280e00711aad
---
# Compiler Error C2512

> '*identifier*' : no appropriate default constructor available

A *default constructor*, a constructor that requires no arguments, is not available for the specified class, structure, or union. The compiler supplies a default constructor only if no user-defined constructors are provided.

If you provide a constructor that takes a non-void parameter, and you want to allow your class to be created with no parameters (for example, as the elements of an array), you must also provide a default constructor. The default constructor can be a constructor with default values for all parameters.

## Example

A common cause of error C2512 is when you define a class or struct constructor that takes arguments, and then you attempt to declare an instance of your class or struct without any arguments. For example, `struct B` below declares a constructor that requires a `char *` argument, but not one that takes no arguments. In `main`, an instance of B is declared, but no argument is supplied. The compiler generates C2512 because it can't find a default constructor for B.

```cpp
// C2512.cpp
// Compile with: cl /W4 c2512.cpp
// C2512 expected
struct B {
   B (char *) {}
   // Uncomment the following line to fix.
   // B() {}
};

int main() {
   B b;   // C2512 - This requires a default constructor
}
```

You can fix this issue by defining a default constructor for your struct or class, such as `B() {}`, or a constructor where all the arguments have default values, such as `B (char * = nullptr) {}`.
