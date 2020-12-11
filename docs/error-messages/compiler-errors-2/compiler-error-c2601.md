---
description: "Learn more about: Compiler Error C2601"
title: "Compiler Error C2601"
ms.date: "11/04/2016"
f1_keywords: ["C2601"]
helpviewer_keywords: ["C2601"]
ms.assetid: 88275582-5f37-45d7-807d-05f06ba00965
---
# Compiler Error C2601

'function' : local function definitions are illegal

Code tries to define a function within a function.

Or, there may be an extra brace in your source code before the location of the C2601 error.

The following sample generates C2601:

```cpp
// C2601.cpp
int main() {
   int i = 0;

   void funcname(int j) {   // C2601
      j++;
   }
}
```
