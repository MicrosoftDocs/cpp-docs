---
title: "Compiler Error C2318 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2318"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2318"]
ms.assetid: 169e30b9-df78-46cb-90bf-576ad3c32fd4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2318

no try block associated with this catch handler

A `catch` handler is defined but not preceded by a `try` block.

The following sample generates C2318:

```
// C2318.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
   // no try block
   catch( int ) {}   // C2318
}
```

Possible resolution:

```
// C2318b.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
   try{}
   catch( int ) {}
}
```