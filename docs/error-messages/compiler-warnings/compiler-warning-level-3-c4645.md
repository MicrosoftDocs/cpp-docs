---
description: "Learn more about: Compiler Warning (level 3) C4645"
title: "Compiler Warning (level 3) C4645"
ms.date: "11/04/2016"
f1_keywords: ["C4645"]
helpviewer_keywords: ["C4645"]
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
---
# Compiler Warning (level 3) C4645

function declared with __declspec(noreturn) has a return statement

A [return](../../cpp/program-termination.md) statement was found in a function that is marked with the [noreturn](../../cpp/noreturn.md) **`__declspec`** modifier. The **`return`** statement was ignored.

The following sample generates C4645:

```cpp
// C4645.cpp
// compile with:  /W3
void __declspec(noreturn) func() {
   return;   // C4645, delete this line to resolve
}

int main() {
}
```
