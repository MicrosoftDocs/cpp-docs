---
title: "Compiler Error C3483"
description: "Learn more about: Compiler Error C3483"
ms.date: 11/04/2016
f1_keywords: ["C3483"]
helpviewer_keywords: ["C3483"]
---
# Compiler Error C3483

> 'var' is already part of the lambda capture list

## Remarks

You passed the same variable to the capture list of a lambda expression more than one time.

### To correct this error

- Remove all additional instances of the variable from the capture list.

## Example

The following example generates C3483 because the variable `n` appears more than one time in the capture list of the lambda expression:

```cpp
// C3483.cpp

int main()
{
   int m = 6, n = 5;
   [m,n,n] { return n + m; }(); // C3483
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
