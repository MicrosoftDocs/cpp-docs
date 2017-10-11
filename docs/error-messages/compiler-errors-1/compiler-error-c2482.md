---
title: "Compiler Error C2482 | Microsoft Docs"
ms.custom: ""
ms.date: "09/15/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2482"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2482"]
ms.assetid: 98c87da2-625c-4cc2-9bf7-78d15921e779
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2482

>'*identifier*' : dynamic initialization of 'thread' data not allowed

This error message is obsolete in Visual Studio 2015 and later versions. In previous versions, variables declared by using the `thread` attribute cannot be initialized with an expression that requires run-time evaluation. A static expression is required to initialize `thread` data.

## Example

The following sample generates C2482 in Visual Studio 2013 and earlier:

```cpp
// C2482.cpp
// compile with: /c
#define Thread __declspec( thread )
Thread int tls_i = tls_i;   // C2482

int j = j;   // OK in C++; C error
Thread int tls_i = sizeof( tls_i );   // Okay in C and C++
```
