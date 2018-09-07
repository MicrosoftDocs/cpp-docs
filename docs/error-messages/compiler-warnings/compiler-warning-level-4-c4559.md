---
title: "Compiler Warning (level 4) C4559 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4559"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4559"]
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4559

> '*function*' : redefinition; the function gains __declspec(*modifier*)

## Remarks

A function was redefined or redeclared and the second definition or declaration added a **__declspec** modifier (*modifier*). This warning is informational. To fix this warning, delete one of the definitions.

## Example

The following sample generates C4559:

```cpp
// C4559.cpp
// compile with: /W4 /LD
void f();
__declspec(noalias) void f();   // C4559
```