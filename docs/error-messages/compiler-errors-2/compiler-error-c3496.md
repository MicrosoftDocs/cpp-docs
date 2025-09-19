---
title: "Compiler Error C3496"
description: "Learn more about: Compiler Error C3496"
ms.date: 11/04/2016
f1_keywords: ["C3496"]
helpviewer_keywords: ["C3496"]
---
# Compiler Error C3496

> 'this' is always captured by value: '&' ignored

## Remarks

You cannot capture the **`this`** pointer by reference.

### To correct this error

- Capture the **`this`** pointer by value.

## Example

The following example generates C3496 because a reference to the **`this`** pointer appears in the capture list of a lambda expression:

```cpp
// C3496.cpp
// compile with: /c

class C
{
   void f()
   {
      [&this] {}(); // C3496
   }
};
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
