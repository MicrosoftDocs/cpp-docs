---
title: "Compiler Error C2075 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2075"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2075"]
ms.assetid: 8b1865d2-540b-4117-b982-e7a58a0b6cf7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2075

'identifier' : array initialization needs curly braces

There were no curly braces around the specified array initializer.

The following sample generates C2075:

```
// C2075.c
int main() {
   int i[] = 1, 2, 3 };   // C2075
}
```

Possible resolution:

```
// C2075b.c
int main() {
   int j[] = { 1, 2, 3 };
}
```