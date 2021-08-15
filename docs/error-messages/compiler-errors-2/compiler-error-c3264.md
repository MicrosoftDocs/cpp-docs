---
description: "Learn more about: Compiler Error C3264"
title: "Compiler Error C3264"
ms.date: "11/04/2016"
f1_keywords: ["C3264"]
helpviewer_keywords: ["C3264"]
ms.assetid: 94ece687-2364-4f7a-8ebb-7afd3ae9d63d
---
# Compiler Error C3264

'class' : a class-constructor cannot have a return type

Class constructors cannot have return types.

The following sample generates C3264:

```cpp
// C3264_2.cpp
// compile with: /clr

ref class X {
   public:
      static int X()   { // C3264
      }

      /* use the code below to resolve the error
      static X() {
      }
      */
};
int main() {
}
```
