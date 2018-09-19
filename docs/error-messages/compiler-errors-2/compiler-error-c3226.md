---
title: "Compiler Error C3226 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3226"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3226"]
ms.assetid: 636106ca-6f4e-4303-a6a0-8803221ec67d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3226

A template declaration is not allowed inside a generic declaration

Use a generic declaration inside a generic class.

The following sample generates C3226:

```
// C3226.cpp
// compile with: /clr
generic <class T>
ref class C {
   template <class T1>   // C3226
   ref struct S1 {};
};
```

The following sample demonstrates a possible resolution:

```
// C3226b.cpp
// compile with: /clr /c
generic <class T>
ref class C {
   generic <class T1>
   ref struct S1 {};
};
```