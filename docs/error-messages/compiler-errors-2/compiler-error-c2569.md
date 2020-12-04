---
description: "Learn more about: Compiler Error C2569"
title: "Compiler Error C2569"
ms.date: "11/04/2016"
f1_keywords: ["C2569"]
helpviewer_keywords: ["C2569"]
ms.assetid: 092bed1e-f631-436c-9586-7750629f6fac
---
# Compiler Error C2569

'EnumOrUnion' : enum/union cannot be used as a base class

If you must derive a type from the specified union or enumeration, change the union or enumeration to a class or structure.

The following sample generates C2569:

```cpp
// C2569.cpp
// compile with: /c
union ubase {};
class cHasPubUBase : public ubase {};   // C2569
// OK
struct sbase {};
class cHasPubUBase : public sbase {};
```
