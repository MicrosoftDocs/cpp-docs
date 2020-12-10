---
description: "Learn more about: Compiler Error C3226"
title: "Compiler Error C3226"
ms.date: "11/04/2016"
f1_keywords: ["C3226"]
helpviewer_keywords: ["C3226"]
ms.assetid: 636106ca-6f4e-4303-a6a0-8803221ec67d
---
# Compiler Error C3226

A template declaration is not allowed inside a generic declaration

Use a generic declaration inside a generic class.

The following sample generates C3226:

```cpp
// C3226.cpp
// compile with: /clr
generic <class T>
ref class C {
   template <class T1>   // C3226
   ref struct S1 {};
};
```

The following sample demonstrates a possible resolution:

```cpp
// C3226b.cpp
// compile with: /clr /c
generic <class T>
ref class C {
   generic <class T1>
   ref struct S1 {};
};
```
