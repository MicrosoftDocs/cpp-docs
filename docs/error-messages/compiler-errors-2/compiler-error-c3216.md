---
description: "Learn more about: Compiler Error C3216"
title: "Compiler Error C3216"
ms.date: "11/04/2016"
f1_keywords: ["C3216"]
helpviewer_keywords: ["C3216"]
ms.assetid: bbab1efe-8779-4489-8bb0-b11e45f5cbe5
---
# Compiler Error C3216

constraint must be a generic parameter, not 'type'

A constraint was ill formed.

The following sample generates C3216:

```cpp
// C3216.cpp
// compile with: /clr
interface struct A {};

generic <class T>
where F : A   // C3216
// Try the following line instead:
// where T : A    // C3216
ref class C {};
```

The following example demonstrates a possible resolution:

```cpp
// C3216b.cpp
// compile with: /clr /c
interface struct A {};

generic <class T>
where T : A
ref class C {};
```
