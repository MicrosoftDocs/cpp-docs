---
description: "Learn more about: Compiler Error C2780"
title: "Compiler Error C2780"
ms.date: "11/04/2016"
f1_keywords: ["C2780"]
helpviewer_keywords: ["C2780"]
ms.assetid: 423793d8-a3b2-4f35-85f8-ae1d043e2b69
---
# Compiler Error C2780

'declaration' : expects N arguments - M provided

A function template has too few or too many arguments.

The following sample generates C2780 and shows how to fix it:

```cpp
// C2780.cpp
template<typename T>
void f(T, T){}

int main() {
   f(1);  // C2780
   // try the following line instead
   // f(1,2);
}
```
