---
title: "Compiler Warning (level 1) C4551 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4551"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4551"]
ms.assetid: 458b59bd-e2d7-425f-9ba6-268ff200424f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4551

function call missing argument list

A function call must include the open and close parentheses after the function name even if the function takes no parameters.

The following sample generates C4551:

```
// C4551.cpp
// compile with: /W1
void function1() {
}

int main() {
   function1;   // C4551
   function1();   // OK
}
```