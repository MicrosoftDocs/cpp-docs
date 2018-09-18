---
title: "Compiler Error C3273 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3273"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3273"]
ms.assetid: 1d2ce9d9-222b-4cab-94e2-d2c1a9f5ebe0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3273

__finally cannot be used on an exception block in unmanaged code.

The following sample generates C3273:

```
// C3273.cpp
// compile with: /GX
int main()
{
   try
   {
   }
   catch (int)
   {
   }
   __finally   // C3273, remove __finally clause
   {
   }
}
```