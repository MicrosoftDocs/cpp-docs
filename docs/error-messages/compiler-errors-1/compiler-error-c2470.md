---
title: "Compiler Error C2470 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2470"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2470"]
ms.assetid: e17d2cb8-b84c-447c-976a-625f0c96f3fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2470

'function' : looks like a function definition, but there is no parameter list; skipping apparent body

A function definition is missing its argument list.

The following sample generates C2470:

```
// C2470.cpp
int MyFunc {};  // C2470
void MyFunc2() {};  //OK

int main(){
   MyFunc();
   MyFunc2();
}
```