---
title: "Compiler Error C2765 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2765"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2765"]
ms.assetid: 47ad86f3-a7e0-47ad-85ff-0f5534458cb9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2765

'function' : an explicit specialization of a function template cannot have any default arguments

Default arguments are not allowed on an explicit specialization of a function template. For more information, see [Explicit Specialization of Function Templates](../../cpp/explicit-specialization-of-function-templates.md).

The following sample generates C2765:

```
// C2765.cpp
template<class T> void f(T t) {};

template<> void f<char>(char c = 'a') {}   // C2765
// try the following line instead
// template<> void f<char>(char c) {}
```