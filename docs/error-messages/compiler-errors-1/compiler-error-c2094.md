---
title: "Compiler Error C2094 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2094"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2094"]
ms.assetid: 9e4f8f88-f189-46e7-91c9-481bacc7af87
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2094

label 'identifier' was undefined

The label used by a [goto](../../cpp/goto-statement-cpp.md) statement does not exist in the function.

## Example

The following sample generates C2094:

```cpp
// C2094.c
int main() {
   goto test;
}   // C2094
```

Possible resolution:

```cpp
// C2094b.c
int main() {
   goto test;
   test:
   {
   }
}
```