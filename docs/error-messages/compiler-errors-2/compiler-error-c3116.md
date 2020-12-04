---
description: "Learn more about: Compiler Error C3116"
title: "Compiler Error C3116"
ms.date: "11/04/2016"
f1_keywords: ["C3116"]
helpviewer_keywords: ["C3116"]
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
---
# Compiler Error C3116

'storage specifier' : invalid storage class for interface method

You used **`typedef`**, **`register`**, or **`static`** as the storage class for an interface method. These storage classes are not permitted on interface members.

The following sample generates C3116:

```cpp
// C3116.cpp
__interface ImyInterface
{
   static void myFunc();   // C3116
};
```
