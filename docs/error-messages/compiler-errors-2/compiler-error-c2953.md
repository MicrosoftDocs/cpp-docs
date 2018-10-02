---
title: "Compiler Error C2953 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2953"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2953"]
ms.assetid: 8dbcfa24-8296-4e40-bdc4-5526c07d8892
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2953

'identifier' : class template has already been defined

Check the source file and include files for other definitions.

The following sample generates C2953:

```
// C2953.cpp
// compile with: /c
template <class T>  class A {};
template <class T>  class A {};   // C2953
template <class T>  class B {};   // OK
```