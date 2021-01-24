---
description: "Learn more about: Compiler Error C3493"
title: "Compiler Error C3493"
ms.date: "11/04/2016"
f1_keywords: ["C3493"]
helpviewer_keywords: ["C3493"]
ms.assetid: 734b4257-12a3-436f-8488-c8c55ec81634
---
# Compiler Error C3493

'var' cannot be implicitly captured because no default capture mode has been specified

The empty lambda expression capture, `[]`, specifies that the lambda expression does not explicitly or implicitly capture any variables.

### To correct this error

- Provide a default capture mode, or

- Explicitly capture one or more variables.

## Examples

The following example generates C3493 because it modifies an external variable but specifies the empty capture clause:

```cpp
// C3493a.cpp

int main()
{
   int m = 55;
   [](int n) { m = n; }(99); // C3493
}
```

The following example resolves C3493 by specifying by-reference as the default capture mode.

```cpp
// C3493b.cpp

int main()
{
   int m = 55;
   [&](int n) { m = n; }(99);
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
