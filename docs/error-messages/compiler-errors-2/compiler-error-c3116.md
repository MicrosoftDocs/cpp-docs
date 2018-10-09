---
title: "Compiler Error C3116 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3116"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3116"]
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3116

'storage specifier' : invalid storage class for interface method

You used `typedef`, `register`, or `static` as the storage class for an interface method. These storage classes are not permitted on interface members.

The following sample generates C3116:

```
// C3116.cpp
__interface ImyInterface
{
   static void myFunc();   // C3116
};
```