---
description: "Learn more about: Compiler Error C3236"
title: "Compiler Error C3236"
ms.date: "11/04/2016"
f1_keywords: ["C3236"]
helpviewer_keywords: ["C3236"]
ms.assetid: 4ef1871f-a348-44ae-922b-1e2081de20d0
---
# Compiler Error C3236

explicit instantiation of a generic is not allowed

The compiler does not allow explicit instantiation of generic classes.

The following sample generates C3236:

```cpp
// C3236.cpp
// compile with: /clr
generic<class T>
public ref class X {};

generic ref class X<int>;   // C3236
```

The following sample demonstrates a possible resolution:

```cpp
// C3236b.cpp
// compile with: /clr /c
generic<class T>
public ref class X {};
```
