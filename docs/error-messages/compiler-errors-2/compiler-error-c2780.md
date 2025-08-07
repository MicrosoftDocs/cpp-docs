---
title: "Compiler Error C2780"
description: "Learn more about: Compiler Error C2780"
ms.date: 11/04/2016
f1_keywords: ["C2780"]
helpviewer_keywords: ["C2780"]
---
# Compiler Error C2780

> 'declaration' : expects N arguments - M provided

## Remarks

A function template has too few or too many arguments.

## Example

The following example generates C2780 and shows how to fix it:

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
