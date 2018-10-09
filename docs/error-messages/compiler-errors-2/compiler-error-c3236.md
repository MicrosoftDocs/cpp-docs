---
title: "Compiler Error C3236 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3236"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3236"]
ms.assetid: 4ef1871f-a348-44ae-922b-1e2081de20d0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3236

explicit instantiation of a generic is not allowed

The compiler does not allow explicit instantiation of generic classes.

The following sample generates C3236:

```
// C3236.cpp
// compile with: /clr
generic<class T>
public ref class X {};

generic ref class X<int>;   // C3236
```

The following sample demonstrates a possible resolution:

```
// C3236b.cpp
// compile with: /clr /c
generic<class T>
public ref class X {};
```