---
title: "Compiler Error C2714 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2714"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2714"]
ms.assetid: 401a5a42-660c-4bad-9d63-1a2d092bc489
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2714

__alignof(void) is not allowed

An invalid value was passed to an operator.

See [__alignof Operator](../../cpp/alignof-operator.md) for more information.

## Example

The following sample generates C2714.

```
// C2714.cpp
int main() {
   return __alignof(void);   // C2714
   return __alignof(char);   // OK
}
```