---
description: "Learn more about: Compiler Warning (level 4) C4610"
title: "Compiler Warning (level 4) C4610"
ms.date: "11/04/2016"
f1_keywords: ["C4610"]
helpviewer_keywords: ["C4610"]
ms.assetid: 23c1a16c-9ca9-4bf6-9911-a72b785560c2
---
# Compiler Warning (level 4) C4610

object 'class' can never be instantiated - user-defined constructor required

The class has no user-defined or default constructors. No instantiation is performed. The following sample generates C4610:

```cpp
// C4610.cpp
// compile with: /W4
struct A {
   int &j;

   A& A::operator=( const A& );
};   // C4610

/* use this structure definition to resolve the warning
struct B {
   int &k;

   B(int i = 0) : k(i) {
   }

   B& B::operator=( const B& );
} b;
*/

int main() {
}
```
