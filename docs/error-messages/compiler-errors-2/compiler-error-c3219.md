---
title: "Compiler Error C3219 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3219"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3219"]
ms.assetid: 9c9757b0-1256-4cdf-9d8c-a3a72f300ce5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3219

'param' : generic parameter cannot be constrained by multiple non-interfaces : 'class'

It is not valid to constrain a generic parameter by two or more managed classes.

The following sample generates C3219:

```
// C3219.cpp
// compile with: /clr
ref class A {};
ref class B {};

generic <class T>
where T : A, B
ref class E {};   // C3219
```

The following sample demonstrates a possible resolution:

```
// C3219b.cpp
// compile with: /clr /c
ref class A {};

interface struct C {};

generic <class T>
where T : A
ref class E {};
```