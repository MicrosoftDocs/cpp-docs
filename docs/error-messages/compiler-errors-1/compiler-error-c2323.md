---
title: "Compiler Error C2323"
description: "Learn more about: Compiler Error C2323"
ms.date: "03/20/2024"
f1_keywords: ["C2323"]
helpviewer_keywords: ["C2323"]
---
# Compiler Error C2323

'identifier': non-member operator new or delete functions may not be declared static or in a namespace other than the global namespace

Overloads for the `new` and `delete` operators must be defined as non-static in the global namespace or as a class member function.

The following sample generates C2323:

```cpp
// C2323.cpp
// compile with: /c
static void* operator new(size_t);   // C2323
static void operator delete(void*);   // C2323

namespace NS
{
    void* operator new(size_t);   // C2323
    void operator delete(void*);   // C2323
}
```

## See also

[`new` and `delete` operators](../../cpp/new-and-delete-operators.md)
