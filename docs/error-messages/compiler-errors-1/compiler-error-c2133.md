---
description: "Learn more about: Compiler Error C2133"
title: "Compiler Error C2133"
ms.date: "11/04/2016"
f1_keywords: ["C2133"]
helpviewer_keywords: ["C2133"]
ms.assetid: 8942f9e8-9818-468f-97db-09dbd124fcae
---
# Compiler Error C2133

'identifier' : unknown size

An unsized array is declared as a member of a class, structure, union, or enumeration. The /Za (ANSI C) option does not allow unsized member arrays.

The following sample generates C2133:

```cpp
// C2133.cpp
// compile with: /Za
struct X {
   int a[0];   // C2133 unsized array
};
```

Possible resolution:

```cpp
// C2133b.cpp
// compile with: /c
struct X {
   int a[0];   // no /Za
};
```
