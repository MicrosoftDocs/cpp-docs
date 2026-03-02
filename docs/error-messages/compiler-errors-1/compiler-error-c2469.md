---
title: "Compiler Error C2469"
description: "Learn more about: Compiler Error C2469"
ms.date: 2/27/2026
f1_keywords: ["C2469"]
helpviewer_keywords: ["C2469"]
---
# Compiler Error C2469

> '`new`': cannot allocate '`void`' objects

## Remarks

The [`new` operator](../../cpp/new-operator-cpp.md) allocates memory and constructs an object of the specified type. Since `void` isn't a constructible type, use `::operator new(size)` to allocate raw memory without object construction.

## Example: Wrong allocation type

```cpp
// compile with /c
int main()
{
    void* ptr1 = new void;   // C2469
    int*  ptr2 = new int;    // OK
}
```

## Example: Allocate untyped memory

To allocate untyped memory, use `::operator new`:

```cpp
// compile with /c
int main()
{
    void* ptr1 = new void;            // C2469
    void* ptr2 = ::operator new(4);   // OK
}
```
