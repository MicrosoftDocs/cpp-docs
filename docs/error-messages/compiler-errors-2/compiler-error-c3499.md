---
description: "Learn more about: Compiler Error C3499"
title: "Compiler Error C3499"
ms.date: "11/04/2016"
f1_keywords: ["C3499"]
helpviewer_keywords: ["C3499"]
ms.assetid: 6717de5c-ae0f-4024-bdf2-b5598009e7b6
---
# Compiler Error C3499

a lambda that has been specified to have a void return type cannot return a value

The compiler generates this error when a lambda expression that specifies **`void`** as the return type returns a value; or when a lambda expression contains more than one statement and returns a value, but does not specify its return type.

### To correct this error

- Do not return a value from the lambda expression, or

- Provide the return type of the lambda expression, or

- Combine the statements that make up the body of the lambda expression into a single statement.

## Examples

The following example generates C3499 because the body of a lambda expression contains multiple statements and returns a value, but the lambda expression does not specify the return type:

```cpp
// C3499a.cpp

int main()
{
   [](int x) { int n = x * 2; return n; } (5); // C3499
}
```

The following example shows two possible resolutions to C3499. The first resolution provides the return type of the lambda expression. The second resolution combines the statements that make up the body of the lambda expression into a single statement.

```cpp
// C3499b.cpp

int main()
{
   // Possible resolution 1:
   // Provide the return type of the lambda expression.
   [](int x) -> int { int n = x * 2; return n; } (5);

   // Possible resolution 2:
   // Combine the statements that make up the body of
   // the lambda expression into a single statement.
   [](int x) { return x * 2; } (5);
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
