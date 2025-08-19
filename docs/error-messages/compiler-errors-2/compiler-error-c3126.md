---
title: "Compiler Error C3126"
description: "Learn more about: Compiler Error C3126"
ms.date: 11/04/2016
f1_keywords: ["C3126"]
helpviewer_keywords: ["C3126"]
---
# Compiler Error C3126

> cannot define a union 'union' inside of managed type 'type'

## Remarks

A union cannot be defined inside a managed type.

## Example

The following example generates C3126:

```cpp
// C3126_2.cpp
// compile with: /clr /c
ref class Test
{
   union x
   {   // C3126
      int a;
      int b;
   };
};
```
