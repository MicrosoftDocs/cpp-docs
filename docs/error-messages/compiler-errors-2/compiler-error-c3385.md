---
description: "Learn more about: Compiler Error C3385"
title: "Compiler Error C3385"
ms.date: "11/04/2016"
f1_keywords: ["C3385"]
helpviewer_keywords: ["C3385"]
ms.assetid: 5f1838c1-986e-47db-8dbc-e06976b83cf3
---
# Compiler Error C3385

'class::function' : a function that has a DllImport Custom attribute cannot return an instance of a class

A function defined as being in a .dll file specified with the `DllImport` attribute cannot return an instance of a class.

The following sample generates C3385:

```cpp
// C3385.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

struct SomeStruct1 {};

public ref struct Wrap {
   [ DllImport("somedll.dll", CharSet=CharSet::Unicode) ]
   static SomeStruct1 f1([In, Out] SomeStruct1 *pS);   // C3385
};
```
