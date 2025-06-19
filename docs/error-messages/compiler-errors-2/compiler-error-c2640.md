---
title: "Compiler Error C2640"
description: "Learn more about: Compiler Error C2640"
ms.date: "03/17/2025"
f1_keywords: ["C2640"]
helpviewer_keywords: ["C2640"]
---
# Compiler Error C2640

> 'abstract declarator': __based modifier illegal on reference

The [**`__based`**](../../cpp/based-pointers-cpp.md) modifier can be used on pointers only.

The following sample generates C2640:

```cpp
// C2640.cpp
int* ptr;

int main()
{
    int __based(ptr)& based_ref;   // C2640
    int __based(ptr)* based_ptr;   // OK
}
```
