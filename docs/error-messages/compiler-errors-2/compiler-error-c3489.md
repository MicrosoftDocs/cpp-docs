---
description: "Learn more about: Compiler Error C3489"
title: "Compiler Error C3489"
ms.date: "11/04/2016"
f1_keywords: ["C3489"]
helpviewer_keywords: ["C3489"]
ms.assetid: 47b58d69-459d-4499-abc7-5f0b9303d773
---
# Compiler Error C3489

'var' is required when the default capture mode is by-value

When you specify that the default capture mode for a lambda expression is by-value, you cannot pass a variable by value to the capture clause of that expression.

### To correct this error

- Do not explicitly pass the variable to the capture clause, or

- Do not specify by-value as the default capture mode, or

- Specify by-reference as the default capture mode, or

- Pass the variable by reference to the capture clause. (This might change the behavior of the lambda expression.)

## Examples

The following example generates C3489 variable `n` appears by value in the capture clause of a lambda expression whose default mode is by-value:

```cpp
// C3489a.cpp

int main()
{
   int n = 5;
   [=, n]() { return n; } (); // C3489
}
```

The following example shows four possible resolutions to C3489:

```cpp
// C3489b.cpp

int main()
{
   int n = 5;

   // Possible resolution 1:
   // Do not explicitly pass n to the capture clause.
   [=]() { return n; } ();

   // Possible resolution 2:
   // Do not specify by-value as the default capture mode.
   [n]() { return n; } ();

   // Possible resolution 3:
   // Specify by-reference as the default capture mode.
   [&, n]() { return n; } ();

   // Possible resolution 4:
   // Pass n by reference to the capture clause.
   [&n]() { return n; } ();
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
