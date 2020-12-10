---
description: "Learn more about: Compiler Warning (level 1) C4551"
title: "Compiler Warning (level 1) C4551"
ms.date: "11/04/2016"
f1_keywords: ["C4551"]
helpviewer_keywords: ["C4551"]
ms.assetid: 458b59bd-e2d7-425f-9ba6-268ff200424f
---
# Compiler Warning (level 1) C4551

function call missing argument list

A function call must include the open and close parentheses after the function name even if the function takes no parameters.

The following sample generates C4551:

```cpp
// C4551.cpp
// compile with: /W1
void function1() {
}

int main() {
   function1;   // C4551
   function1();   // OK
}
```
