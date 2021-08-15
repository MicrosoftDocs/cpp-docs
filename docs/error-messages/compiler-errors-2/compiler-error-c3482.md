---
description: "Learn more about: Compiler Error C3482"
title: "Compiler Error C3482"
ms.date: "11/04/2016"
f1_keywords: ["C3482"]
helpviewer_keywords: ["C3482"]
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
---
# Compiler Error C3482

'this' can only be used as a lambda capture within a non-static member function

You cannot pass **`this`** to the capture list of a lambda expression that is declared in a static method or a global function.

### To correct this error

- Convert the enclosing function to a non-static method, or

- Remove the **`this`** pointer from the capture list of the lambda expression.

## Example

The following example generates C3482:

```cpp
// C3482.cpp
// compile with: /c

class C
{
public:
   static void staticMethod()
   {
      [this] {}(); // C3482
   }
};
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
