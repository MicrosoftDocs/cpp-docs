---
description: "Learn more about: Compiler Error C2835"
title: "Compiler Error C2835"
ms.date: "11/04/2016"
f1_keywords: ["C2835"]
helpviewer_keywords: ["C2835"]
ms.assetid: 41c70630-983f-4da2-8342-513cf48b0519
---
# Compiler Error C2835

user-defined conversion 'type' takes no formal parameters

User-defined type conversions cannot take formal parameters.

The following sample generates C2835:

```cpp
// C2835.cpp
class A {
public:
   char v_char;

   A() {
      v_char = 'A';
   };
   operator char(char a) {   // C2835
   // try the following line instead
   // operator char() {
      return v_char + 1;
   };
};

int main() {
   A a;
}
```
