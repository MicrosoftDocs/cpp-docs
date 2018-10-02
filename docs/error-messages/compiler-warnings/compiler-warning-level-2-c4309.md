---
title: "Compiler Warning (level 2) C4309 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4309"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4309"]
ms.assetid: cb3f41ef-fd8a-4def-baa1-924e751fca68
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4309

'conversion' : truncation of constant value

The type conversion causes a constant to exceed the space allocated for it. You may need to use a larger type for the constant.

The following sample generates C4309:

```
// C4309.cpp
// compile with: /W2
int main()
{
   char c = 128;   // C4309
}
```