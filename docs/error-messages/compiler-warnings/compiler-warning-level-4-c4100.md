---
description: "Learn more about: Compiler Warning (level 4) C4100"
title: "Compiler Warning (level 4) C4100"
ms.date: 04/22/2025
f1_keywords: ["C4100"]
helpviewer_keywords: ["C4100"]
---
# Compiler Warning (level 4) C4100

> 'identifier' : unreferenced formal parameter

The formal parameter is not referenced in the body of the function. The unreferenced parameter is ignored.

C4100 can also be issued when code calls a destructor on an otherwise unreferenced parameter of primitive type.

The following sample generates C4100:

```cpp
// C4100.cpp
// compile with: /W4
void func(int i) {   // C4100, delete the unreferenced parameter to resolve the warning
   // i;   // Or uncomment this line to add a reference
}

int main()
{
   func(1);
}
```
