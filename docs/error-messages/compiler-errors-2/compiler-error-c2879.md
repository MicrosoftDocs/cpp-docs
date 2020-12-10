---
description: "Learn more about: Compiler Error C2879"
title: "Compiler Error C2879"
ms.date: "11/04/2016"
f1_keywords: ["C2879"]
helpviewer_keywords: ["C2879"]
ms.assetid: ac92b645-2394-49de-8632-43d44e0553ed
---
# Compiler Error C2879

'symbol' : only an existing namespace can be given an alternative name by a namespace alias definition

You cannot create a [namespace alias](../../cpp/namespaces-cpp.md#namespace_aliases) to a symbol other than a namespace.

The following sample generates C2879:

```cpp
// C2879.cpp
int main() {
   int i;
   namespace A = i;   // C2879 i is not a namespace
}
```
