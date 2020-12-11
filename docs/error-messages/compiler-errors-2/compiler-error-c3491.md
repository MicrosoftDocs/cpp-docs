---
description: "Learn more about: Compiler Error C3491"
title: "Compiler Error C3491"
ms.date: "11/04/2016"
f1_keywords: ["C3491"]
helpviewer_keywords: ["C3491"]
ms.assetid: 7f0e71b2-46a0-4d25-bd09-6158a280f509
---
# Compiler Error C3491

'var': a by-value capture cannot be modified in a non-mutable lambda

A non-mutable lambda expression cannot modify the value of a variable that is captured by value.

### To correct this error

- Declare your lambda expression with the **`mutable`** keyword, or

- Pass the variable by reference to the capture list of the lambda expression.

## Examples

The following example generates C3491 because the body of a non-mutable lambda expression modifies the capture variable `m`:

```cpp
// C3491a.cpp

int main()
{
   int m = 55;
   [m](int n) { m = n; }(99); // C3491
}
```

The following example resolves C3491 by declaring the lambda expression with the **`mutable`** keyword:

```cpp
// C3491b.cpp

int main()
{
   int m = 55;
   [m](int n) mutable { m = n; }(99);
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
