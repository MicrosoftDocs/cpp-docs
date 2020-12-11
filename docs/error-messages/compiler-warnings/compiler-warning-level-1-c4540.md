---
description: "Learn more about: Compiler Warning (level 1) C4540"
title: "Compiler Warning (level 1) C4540"
ms.date: "11/04/2016"
f1_keywords: ["C4540"]
helpviewer_keywords: ["C4540"]
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
---
# Compiler Warning (level 1) C4540

dynamic_cast used to convert to inaccessible or ambiguous base; run-time test will fail ('type1' to 'type2')

You used **`dynamic_cast`** to convert from one type to another. The compiler determined that the cast would always fail (return **NULL**) because a base class is inaccessible (**`private`**, for instance) or ambiguous (appears more than once in the class hierarchy, for instance).

The following shows an example of this warning. Class **B** is derived from class **A**. The program uses **`dynamic_cast`** to cast from class **B** (the derived class) to class **A**, which will always fail because class **B** is **`private`** and thus inaccessible. Changing the access of **A** to **`public`** will resolve the warning.

```cpp
// C4540.cpp
// compile with: /W1

struct A {
   virtual void g() {}
};

struct B : private A {
   virtual void g() {}
};

int main() {
   B b;
   A * ap = dynamic_cast<A*>(&b);   // C4540
}
```
