---
description: "Learn more about: Compiler Error C3219"
title: "Compiler Error C3219"
ms.date: "11/04/2016"
f1_keywords: ["C3219"]
helpviewer_keywords: ["C3219"]
ms.assetid: 9c9757b0-1256-4cdf-9d8c-a3a72f300ce5
---
# Compiler Error C3219

'param' : generic parameter cannot be constrained by multiple non-interfaces : 'class'

It is not valid to constrain a generic parameter by two or more managed classes.

The following sample generates C3219:

```cpp
// C3219.cpp
// compile with: /clr
ref class A {};
ref class B {};

generic <class T>
where T : A, B
ref class E {};   // C3219
```

The following sample demonstrates a possible resolution:

```cpp
// C3219b.cpp
// compile with: /clr /c
ref class A {};

interface struct C {};

generic <class T>
where T : A
ref class E {};
```
