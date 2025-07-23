---
description: "Learn more about: Compiler Error C2469"
title: "Compiler Error C2469"
ms.date: "11/04/2016"
f1_keywords: ["C2469"]
helpviewer_keywords: ["C2469"]
ms.assetid: 3814bdff-581a-4d3e-8b47-8de6887cea69
---
# Compiler Error C2469

> '`new`': cannot allocate '`void`' objects

## Remarks

An operator was passed an invalid type.

## Example: Wrong allocation type

Check if you meant to allocate `void` or some other type, such as `int`:

```cpp
// C2469_wrong_allocation_type.cpp

int main()
{
    int* ptr1 = new void;   // C2469
    int* ptr2 = new int;    // OK
}
```
