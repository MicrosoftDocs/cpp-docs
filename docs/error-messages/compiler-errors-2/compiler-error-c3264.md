---
title: "Compiler Error C3264"
description: "Learn more about: Compiler Error C3264"
ms.date: 11/04/2016
f1_keywords: ["C3264"]
helpviewer_keywords: ["C3264"]
---
# Compiler Error C3264

> 'class' : a class-constructor cannot have a return type

## Remarks

Class constructors cannot have return types.

## Example

The following example generates C3264:

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
