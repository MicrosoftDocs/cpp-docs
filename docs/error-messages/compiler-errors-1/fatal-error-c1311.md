---
title: "Fatal Error C1311 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1311"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1311"]
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1311

COFF format cannot statically initialize 'var' with number byte(s) of an address

An address whose value is not known at compile time cannot be statically assigned to a variable whose type has storage of less than four bytes.

This error can occur on code that is otherwise valid C++.

The following example shows one condition that might cause C1311.

```
char c = (char)"Hello, world";   // C1311
char *d = (char*)"Hello, world";   // OK
```