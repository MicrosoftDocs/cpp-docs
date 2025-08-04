---
title: "Compiler Error C2051"
description: "Learn more about: Compiler Error C2051"
ms.date: 11/04/2016
f1_keywords: ["C2051"]
helpviewer_keywords: ["C2051"]
---
# Compiler Error C2051

> case expression not constant

## Remarks

Case expressions must be integer constants.

## Example

The following example generates C2051:

```cpp
// C2051.cpp
class X {};

int main() {
   static X x;
   int i = 0;

   switch (i) {
      case x:   // C2051 use constant expression to resolve error
         break;
      default:
         break;
   }
}
```

Possible resolution:

```cpp
// C2051b.cpp
class X {};

int main() {
   static X x;
   int i = 0;

   switch (i) {
      case 1:
         break;
      default:
         break;
   }
}
```
