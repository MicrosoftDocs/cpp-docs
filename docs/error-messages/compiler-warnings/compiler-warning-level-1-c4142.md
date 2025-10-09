---
title: "Compiler Warning (level 1) C4142"
description: "Learn more about: Compiler Warning (level 1) C4142"
ms.date: 11/04/2016
f1_keywords: ["C4142"]
helpviewer_keywords: ["C4142"]
---
# Compiler Warning (level 1) C4142

> benign redefinition of type

## Remarks

A type is redefined in a manner that has no effect on the generated code.

To fix by checking the following possible causes:

- A member function of a derived class has a different return type from the corresponding member function of the base class.

- A type defined with the **`typedef`** command is redefined using different syntax.

## Example

The following example generates C4142:

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
