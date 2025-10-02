---
title: "Compiler Error C3485"
description: "Learn more about: Compiler Error C3485"
ms.date: 06/01/2022
f1_keywords: ["C3485"]
helpviewer_keywords: ["C3485"]
---
# Compiler Error C3485

> a lambda definition cannot have any cv-qualifiers

## Remarks

You can't use a **`const`** or **`volatile`** qualifier as part of the definition of a lambda expression.

This error is obsolete in Visual Studio 2022.

### To correct this error

- Remove the **`const`** or **`volatile`** qualifier from the definition of your lambda expression.

## Example

The following example generates C3485 because it uses the **`const`** qualifier as part of the definition of a lambda expression:

```cpp
// C3485.cpp

int main()
{
   auto x = []() const mutable {}; // C3485
}
```

To fix it, remove the **`const`** qualifier.

## See also

[Lambda expressions](../../cpp/lambda-expressions-in-cpp.md)
