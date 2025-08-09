---
title: "Compiler Error C2835"
description: "Learn more about: Compiler Error C2835"
ms.date: 11/04/2016
f1_keywords: ["C2835"]
helpviewer_keywords: ["C2835"]
---
# Compiler Error C2835

> user-defined conversion 'type' takes no formal parameters

## Remarks

User-defined type conversions cannot take formal parameters.

## Example

The following sample generates C2835:

```cpp
// C2835.cpp
class A {
public:
   char v_char;

   A() {
      v_char = 'A';
   }
   operator char(char a) {   // C2835
   // try the following line instead
   // operator char() {
      return v_char + 1;
   }
};

int main() {
   A a;
}
```
