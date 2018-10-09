---
title: "Compiler Error C2362 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2362"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2362"]
ms.assetid: 7aafecbc-b3cf-45a6-9ec3-a17e3f222511
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2362

initialization of 'identifier' is skipped by 'goto label'

When compiling with [/Za](../../build/reference/za-ze-disable-language-extensions.md), jumping to the label prevents the identifier from being initialized.

You cannot jump past a declaration with an initializer unless the declaration is enclosed in a block that is not entered, or the variable has already been initialized.

The following sample generates C2326:

```
// C2362.cpp
// compile with: /Za
int main() {
   goto label1;
   int i = 1;      // C2362, initialization skipped
label1:;
}
```

Possible resolution:

```
// C2362b.cpp
// compile with: /Za
int main() {
   goto label1;
   {
      int j = 1;   // OK, this block is never entered
   }
label1:;
}
```