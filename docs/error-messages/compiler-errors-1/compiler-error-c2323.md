---
title: "Compiler Error C2323"
description: "Learn more about: Compiler Error C2323"
ms.date: "03/20/2024"
f1_keywords: ["C2323"]
helpviewer_keywords: ["C2323"]
---
# Compiler Error C2323

> 'identifier': non-member operator `new` or `delete` functions may not be declared `static` or in a namespace other than the global namespace.

## Remarks

The `new` and `delete` overload operators must be non-static, defined in the global namespace or as class members.

## Example

The following generates C2323:

```cpp
// C2323.cpp
// compile with: /c
static void* operator new(size_t);   // C2323 since static
static void operator delete(void*);  // C2323 since static

namespace NS
{
    void* operator new(size_t);   // C2323 since not defined in the global namespace
    void operator delete(void*);  // C2323 since not defined in the global namespace
}
```

## See also

[`new` and `delete` operators](../../cpp/new-and-delete-operators.md)
