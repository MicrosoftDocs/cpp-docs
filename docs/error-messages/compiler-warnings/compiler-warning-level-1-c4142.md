---
description: "Learn more about: Compiler Warning (level 1) C4142"
title: "Compiler Warning (level 1) C4142"
ms.date: "11/04/2016"
f1_keywords: ["C4142"]
helpviewer_keywords: ["C4142"]
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
---
# Compiler Warning (level 1) C4142

benign redefinition of type

A type is redefined in a manner that has no effect on the generated code.

To fix by checking the following possible causes:

- A member function of a derived class has a different return type from the corresponding member function of the base class.

- A type defined with the **`typedef`** command is redefined using different syntax.

The following sample generates C4142:

```c
// C4142.c
// compile with: /W1
float X2;
X2 = 2.0 + 1.0;   // C4142

int main() {
   float X2;
   X2 = 2.0 + 1.0;   // OK
}
```
