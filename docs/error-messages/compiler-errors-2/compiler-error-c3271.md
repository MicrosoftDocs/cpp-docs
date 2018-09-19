---
title: "Compiler Error C3271 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3271"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3271"]
ms.assetid: 16d8bd1d-2e30-4c6a-a07f-0c4f3342fab5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3271

'member': invalid value 'value' for the FieldOffset attribute

A negative number was passed to the **FieldOffset** attribute.

The following sample generates C3271:

```
// C3271.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Explicit)]
value class MyStruct1 {
   public: [FieldOffset(0)] int a;
   public: [FieldOffset(-1)] long b;   // C3271
};
```
