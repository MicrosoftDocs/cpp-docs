---
title: "Compiler Error C2033"
description: "Learn more about: Compiler Error C2033"
ms.date: 11/04/2016
f1_keywords: ["C2033"]
helpviewer_keywords: ["C2033"]
---
# Compiler Error C2033

> 'identifier' : bit field cannot have indirection

## Remarks

The bit field was declared as a pointer, which is not allowed.

## Example

The following example generates C2033:

```cpp
// C2033.cpp
struct S {
   int *b : 1;  // C2033
};
```

Possible resolution:

```cpp
// C2033b.cpp
// compile with: /c
struct S {
   int b : 1;
};
```
