---
description: "Learn more about: Compiler Error C3485"
title: "Compiler Error C3485"
ms.date: "11/04/2016"
f1_keywords: ["C3485"]
helpviewer_keywords: ["C3485"]
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
---
# Compiler Error C3485

a lambda definition cannot have any cv-qualifiers

You cannot use a **`const`** or **`volatile`** qualifier as part of the definition of a lambda expression.

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

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
