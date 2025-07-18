---
title: "Compiler Error C2196"
description: "Learn more about: Compiler Error C2196"
ms.date: 11/04/2016
f1_keywords: ["C2196"]
helpviewer_keywords: ["C2196"]
---
# Compiler Error C2196

> case value 'value' already used.

## Remarks

A switch statement uses the same case value more than once.

## Example

The following example generates C2196:

```cpp
// C2196.cpp
int main() {
   int i = 0;
   switch( i ) {
   case 0:
      break;
   case 0:   // C2196
   // try the following line instead
   // case 1:
      break;
   }
}
```
