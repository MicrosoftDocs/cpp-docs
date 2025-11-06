---
title: "Compiler Error C2487"
description: "Learn more about: Compiler Error C2487"
ms.date: 03/04/2024
f1_keywords: ["C2487"]
helpviewer_keywords: ["C2487"]
---
# Compiler Error C2487

> 'identifier' : member of dll interface class may not be declared with dll interface

## Remarks

You can declare a whole class, or certain members of a non-DLL interface class, with DLL interface. You cannot declare a class with DLL interface and then declare a member of that class with DLL interface.

## Example

The following example generates C2487:

```cpp
// C2487.cpp
// compile with: /c
class __declspec(dllexport) C
{
    __declspec(dllexport) void func() {}   // C2487
};
```

To resolve this error, remove the DLL interface on the class or the members.

## See also

[Using `dllimport` and `dllexport` in C++ classes](../../cpp/using-dllimport-and-dllexport-in-cpp-classes.md)
