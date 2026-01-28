---
title: "Compiler Error C2833"
description: "Learn more about: Compiler Error C2833"
ms.date: 11/04/2016
f1_keywords: ["C2833"]
helpviewer_keywords: ["C2833"]
---
# Compiler Error C2833

> 'operator *operator-name*' is not a recognized operator or type

## Remarks

The word **`operator`** must be followed by an *operator-name* that you want to override or a type you want to convert.

For a list of the operators that you can define in a managed type, see [User-defined Operators](../../dotnet/user-defined-operators-cpp-cli.md).

## Example

The following example generates C2833:

```cpp
// C2833.cpp
// compile with: /c
class A {};

void operator ::* ();   // C2833
void operator :: ();   // OK
```
