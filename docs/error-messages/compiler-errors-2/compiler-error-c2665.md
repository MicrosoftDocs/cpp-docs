---
description: "Learn more about: Compiler Error C2665"
title: "Compiler Error C2665"
ms.date: "11/04/2016"
f1_keywords: ["C2665"]
helpviewer_keywords: ["C2665"]
ms.assetid: a7f99b61-2eae-4f2b-ba75-ea68fd1e8312
---
# Compiler Error C2665

'function' : none of the number1 overloads can convert parameter number2 from type 'type'

A parameter of the overloaded function cannot be converted to the required type.  Possible resolutions:

- Supply a conversion operator.

- Use explicit conversion.

## Example

The following sample generates C2665.

```cpp
// C2665.cpp
void func(short, char*){}
void func(char*, char*){}

int main() {
   func(0, 1);   // C2665
   func((short)0, (char*)1);   // OK
}
```
