---
title: "Compiler Error C2766 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2766"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2766"]
ms.assetid: 8032f4ca-6827-4f04-9c61-c44643c85cc4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2766

explicit specialization; 'specialization' has already been defined

Duplicate explicit specializations are not allowed. For more information, see [Explicit Specialization of Function Templates](../../cpp/explicit-specialization-of-function-templates.md).

The following sample generates C2766:

```
// C2766.cpp
// compile with: /c
template<class T>
struct A {};

template<>
struct A<int> {};

template<>
struct A<int> {};   // C2766
// try the following line instead
// struct A<char> {};
```