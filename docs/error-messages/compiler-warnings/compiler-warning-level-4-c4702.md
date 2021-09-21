---
description: "Learn more about: Compiler Warning (level 4) C4702"
title: "Compiler Warning (level 4) C4702"
ms.date: 09/20/2021
f1_keywords: ["C4702"]
helpviewer_keywords: ["C4702"]
ms.assetid: d8198c1e-8762-42a6-9e6b-cb568b7a1686
---
# Compiler Warning (level 4) C4702

> unreachable code

When the compiler back end detects unreachable code, it generates C4702 as a level 4 warning.

To address this warning, remove the unreachable code or assure that all source code is reachable by some flow of execution.

## Examples

The following sample generates C4702. To fix it, remove the unreachable code.

```cpp
// C4702.cpp
// compile with: /W4
#include <stdio.h>

int main() {
   return 1;
   printf_s("I won't print.\n");   // C4702 unreachable
}
```

Error C4702 can occur in some versions of the compiler when you compile using the **`/GX`**, **`/EHc`**, **`/EHsc`**, or **`/EHac`** options, and use `extern "C"` functions. Because the compiler assumes `extern "C"` functions don't throw, the catch block isn't reachable. If you feel that this warning isn't valid because a function can throw, compile with **`/EHa`** or **`/EHs`**, depending on the exception thrown.

For more information, see [`/EH` (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md).

The following sample generates C4702:

```cpp
// C4702b.cpp
// compile with: /W4 /EHsc
#include <iostream>

using namespace std;
extern "C" __declspec(dllexport) void Function2(){}

int main() {
   try {
      Function2();
   }
   catch (...) {
      cout << "Exp: Function2!" << endl;   // C4702
   }
}
```
