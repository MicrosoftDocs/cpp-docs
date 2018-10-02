---
title: "Compiler Warning (level 4) C4408 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4408"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4408"]
ms.assetid: 8488a186-ed1d-425c-aaeb-c72472c1da68
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4408

anonymousstruct or union did not declare any data members

An anonymous struct or union must have at least one data member.

The following sample generates C4408:

```
// C4408.cpp
// compile with: /W4 /LD
static union
{
   // int i;
};
// a named union can have no data members
// } MyUnion;
```