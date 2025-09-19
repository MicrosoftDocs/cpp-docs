---
title: "Compiler Error C3481"
description: "Learn more about: Compiler Error C3481"
ms.date: 11/04/2016
f1_keywords: ["C3481"]
helpviewer_keywords: ["C3481"]
---
# Compiler Error C3481

> 'var': lambda capture variable not found

## Remarks

The compiler could not find the definition of a variable that you passed to the capture list of a lambda expression.

### To correct this error

- Remove the variable from the capture list of the lambda expression.

## Example

The following example generates C3481 because the variable `n` is not defined:

```cpp
// C3481.cpp

int main()
{
   [n] {}(); // C3481
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
