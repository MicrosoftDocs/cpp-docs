---
title: "Compiler Error C2781"
description: "Learn more about: Compiler Error C2781"
ms.date: 11/04/2016
f1_keywords: ["C2781"]
helpviewer_keywords: ["C2781"]
---
# Compiler Error C2781

> 'declaration' : expects at least value1 argument - value2 provided

## Remarks

A function template with a variable parameter list has too few arguments.

## Example

The following example generates C2781:

```cpp
// C2781.cpp
template<typename T>
void f(T, T, ...){}

int main() {
   f(1);   // C2781

   // try the following line instead
   f(1,1);
}
```
