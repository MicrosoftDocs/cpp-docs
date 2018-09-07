---
title: "Compiler Warning (level 1) C4160 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4160"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4160"]
ms.assetid: a9610cb7-cac4-4a74-8b4e-049030ebb92b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4160

> #pragma (pop,...) : did not find previously pushed identifier '*identifier*'

## Remarks

A pragma statement in your source code tries to pop an identifier that has not been pushed. To avoid this warning, be sure that the identifier being popped has been properly pushed.

## Example

The following example generates C4160 and shows how to fix it:

```cpp
// C4160.cpp
// compile with: /W1
#pragma pack(push)

#pragma pack(pop, id)   // C4160
// use identifier when pushing to resolve the warning
// #pragma pack(push, id)

int main() {
}
```