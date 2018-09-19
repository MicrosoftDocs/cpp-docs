---
title: "Compiler Error C2756 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2756"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2756"]
ms.assetid: 42eb988d-4043-4dee-8fd4-596949f69a55
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2756

'template type' : default template arguments not allowed on a partial specialization

The template for a partial specialization may not contain a default argument.

The following sample generates C2756 and shows how to fix it:

```
// C2756.cpp
template <class T>
struct S {};

template <class T=int>
// try the following line instead
// template <class T>
struct S<T*> {};   // C2756
```