---
title: "Compiler Error C2531"
description: "Learn more about: Compiler Error C2531"
ms.date: 11/04/2016
f1_keywords: ["C2531"]
helpviewer_keywords: ["C2531"]
---
# Compiler Error C2531

> 'identifier' : reference to a bit field illegal

## Remarks

References to bit fields are not allowed.

## Example

The following example generates C2531:

```cpp
// C2531.cpp
// compile with: /c
class P {
   int &b1 : 10;   // C2531
   int b2 : 10;   // OK
};
```
