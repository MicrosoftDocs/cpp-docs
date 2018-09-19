---
title: "Compiler Warning (level 1) C4052 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4052"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4052"]
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4052

function declarations different; one contains variable arguments

One declaration of the function does not contain variable arguments. It is ignored.

The following sample generates C4052:

```
// C4052.c
// compile with: /W4 /c
int f();
int f(int i, ...);   // C4052
```