---
title: "Compiler Error C2541 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2541"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2541"]
ms.assetid: ed95180f-00df-4e62-a8e9-1b6dab8281bf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2541

'delete' : delete : cannot delete objects that are not pointers

The [delete](../../cpp/delete-operator-cpp.md) operator was used on an object that is not a pointer.

The following sample generates C2541:

```
// C2541.cpp
int main() {
   int i;
   delete i;   // C2541 i not a pointer

   // OK
   int *ip = new int;
   delete ip;
}
```