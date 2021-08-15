---
description: "Learn more about: Compiler Warning (level 1) C4177"
title: "Compiler Warning (level 1) C4177"
ms.date: "11/04/2016"
f1_keywords: ["C4177"]
helpviewer_keywords: ["C4177"]
ms.assetid: 2b05a5b3-696e-4f21-818e-227b9335e748
---
# Compiler Warning (level 1) C4177

\#pragma pragma should be at global scope

The [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) pragma should not be used within a local scope. The **pragma** will not be valid until global scope is encountered after the current scope.

The following sample generates C4177:

```cpp
// C4177.cpp
// compile with: /W1
// #pragma bss_seg("global")   // OK

int main() {
   #pragma bss_seg("local")    // C4177
}
```
