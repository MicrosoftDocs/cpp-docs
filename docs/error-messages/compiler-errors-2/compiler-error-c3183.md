---
description: "Learn more about: Compiler Error C3183"
title: "Compiler Error C3183"
ms.date: "11/04/2016"
f1_keywords: ["C3183"]
helpviewer_keywords: ["C3183"]
ms.assetid: dbd0f020-c739-43c9-947e-9ce21537331b
---
# Compiler Error C3183

cannot define unnamed class, struct or union inside of managed or WinRT type 'type'

A type that is embedded in a managed or WinRT type must be named.

The following sample generates C3183:

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
