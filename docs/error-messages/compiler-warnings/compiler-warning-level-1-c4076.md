---
title: "Compiler Warning (level 1) C4076 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4076"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4076"]
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4076

> '*type modifier*' : can not be used with type '*typename*'

## Remarks

A type modifier, whether it is **signed** or **unsigned**, cannot be used with a non-integer type. *type modifier* is ignored.
  
## Example  

The following sample generates C4076; to fix it, remove the **unsigned** type modifier:

```cpp
// C4076.cpp  
// compile with: /W1 /LD  
unsigned double x;   // C4076  
```