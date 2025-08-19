---
title: "Compiler Error C3480"
description: "Learn more about: Compiler Error C3480"
ms.date: 11/04/2016
f1_keywords: ["C3480"]
helpviewer_keywords: ["C3480"]
---
# Compiler Error C3480

> 'var': a lambda capture variable must be from an enclosing function scope

## Remarks

The lambda capture variable is not from an enclosing function scope.

### To correct this error

- Remove the variable from the capture list of the lambda expression.

## Example

The following example generates C3480 because the variable `global` is not from an enclosing function scope:

```cpp
// C3480a.cpp

int global = 0;
int main()
{
   [&global] { global = 5; }(); // C3480
}
```

The following example resolves C3480 by removing the variable `global` from the capture list of the lambda expression:

```cpp
// C3480b.cpp

int global = 0;
int main()
{
   [] { global = 5; }();
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
