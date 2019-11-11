---
title: "Compiler Warning (level 1) C4530"
ms.date: "11/04/2016"
f1_keywords: ["C4530"]
helpviewer_keywords: ["C4530"]
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
---
# Compiler Warning (level 1) C4530

C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

C++ exception handling was used but [/EHsc](../../build/reference/eh-exception-handling-model.md) was not selected.

When the /EHsc option has not been enabled, an object with automatic storage in the frame, between the function doing the throw and the function catching the throw, will not be destroyed. However, an object with automatic storage created in a **try** or **catch** block will be destroyed.

The following sample generates C4530:

```cpp
// C4530.cpp
// compile with: /W1
int main() {
   try{} catch(int*) {}   // C4530
}
```

Compile the sample with /EHsc to resolve the warning.