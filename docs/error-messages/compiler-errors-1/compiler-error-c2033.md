---
title: "Compiler Error C2033"
description: "Learn more about: Compiler Error C2033"
ms.date: 11/04/2016
f1_keywords: ["C2033"]
helpviewer_keywords: ["C2033"]
---
# Compiler Error C2033

> '*identifier*': bit field cannot have indirection

## Remarks

Bit fields can't be declared as a pointer, reference, or array. For more information, see [C++ Bit Fields](../../cpp/cpp-bit-fields.md).

## Example

The following example generates C2033:

```cpp
// C2033.cpp
// compile with: /c

struct S
{
    int* ptr : 1;     // C2033
    int& ref : 1;     // C2033
    int arr[3] : 1;   // C2033
};
```

## See also

[Compiler Error C2531](../compiler-errors-2/compiler-error-c2531.md)
