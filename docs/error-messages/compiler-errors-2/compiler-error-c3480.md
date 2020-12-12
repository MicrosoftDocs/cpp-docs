---
description: "Learn more about: Compiler Error C3480"
title: "Compiler Error C3480"
ms.date: "11/04/2016"
f1_keywords: ["C3480"]
helpviewer_keywords: ["C3480"]
ms.assetid: 7b2e055a-9604-4d13-861b-b38bda1a6940
---
# Compiler Error C3480

'var': a lambda capture variable must be from an enclosing function scope

The lambda capture variable is not from an enclosing function scope.

### To correct this error

- Remove the variable from the capture list of the lambda expression.

## Examples

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
