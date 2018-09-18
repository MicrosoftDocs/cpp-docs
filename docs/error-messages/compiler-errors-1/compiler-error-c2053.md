---
title: "Compiler Error C2053 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2053"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2053"]
ms.assetid: 13324c85-13a8-4996-bd42-a31bfe7ff80f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2053

'identifier' : wide string mismatch

The wide string is assigned to an incompatible type.

The following sample generates C2053:

```
// C2053.c
int main() {
   char array[] = L"Rika";   // C2053
}
```