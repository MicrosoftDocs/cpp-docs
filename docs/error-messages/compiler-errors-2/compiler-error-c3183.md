---
title: "Compiler Error C3183"
description: "Learn more about: Compiler Error C3183"
ms.date: 11/04/2016
f1_keywords: ["C3183"]
helpviewer_keywords: ["C3183"]
---
# Compiler Error C3183

> cannot define unnamed class, struct or union inside of managed or WinRT type 'type'

## Remarks

A type that is embedded in a managed or WinRT type must be named.

## Example

The following example generates C3183:

```cpp
// C3183a.cpp
// compile with: /clr /c
ref class Test
{
   ref class
   {  // C3183, delete class or name it
      int a;
      int b;
   };
};
```
