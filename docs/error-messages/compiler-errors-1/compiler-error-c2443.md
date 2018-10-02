---
title: "Compiler Error C2443 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2443"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2443"]
ms.assetid: 315330d5-24bc-4193-a531-0642095be58f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2443

operand size conflict

The instruction requires operands to be the same size.

The following sample generates C2443:

```
// C2443.cpp
// processor: x86
short var;
int main() {
   __asm xchg ax,bl   // C2443
   __asm mov al,red   // C2443
   __asm mov al,BYTE PTR var   // OK
}
```