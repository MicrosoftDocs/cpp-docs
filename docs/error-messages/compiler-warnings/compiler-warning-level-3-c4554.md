---
title: "Compiler Warning (level 3) C4554 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4554"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4554"]
ms.assetid: 55bb68f0-2e80-4330-8921-51083c4f8d53
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4554

'operator' : check operator precedence for possible error; use parentheses to clarify precedence

The following sample generates C4554:

```
// C4554.cpp
// compile with: /W3 /WX
int main() {
   int a = 0, b = 0, c = 0;
   a = a << b + c;   // C4554
   // probably intended (a << b) + c,
   // but will get a << (b + c)
}
```