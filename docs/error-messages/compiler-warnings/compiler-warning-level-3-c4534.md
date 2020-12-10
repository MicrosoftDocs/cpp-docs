---
description: "Learn more about: Compiler Warning (level 3) C4534"
title: "Compiler Warning (level 3) C4534"
ms.date: "11/04/2016"
f1_keywords: ["c4534"]
helpviewer_keywords: ["C4534"]
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
---
# Compiler Warning (level 3) C4534

'constructor' will not be a default constructor for class 'class' due to the default argument

An unmanaged class can have a constructor with parameters that have default values and the compiler will use this as the default constructor. A class marked with the `value` keyword will not use a constructor with default values for its parameters as a default constructor.

For more information, see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md).

The following sample generates C4534:

```cpp
// C4534.cpp
// compile with: /W3 /clr /WX
value class MyClass {
public:
   int ii;
   MyClass(int i = 9) {   // C4534, will not be the default constructor
      i++;
   }
};

int main() {
   MyClass ^ xx = gcnew MyClass;
   xx->ii = 0;
}
```
