---
title: "Compiler Error C3813"
description: "Learn more about: Compiler Error C3813"
ms.date: 11/04/2016
f1_keywords: ["C3813"]
helpviewer_keywords: ["C3813"]
---
# Compiler Error C3813

> a property declaration can only appear within the definition of a managed or WinRT type

## Remarks

A [property](../../dotnet/how-to-use-properties-in-cpp-cli.md) can only be declared within a managed or Windows Runtime type. Native types do not support the **`property`** keyword.

## Example

The following example generates C3813 and shows how to fix it:

```cpp
// C3813.cpp
// compile by using: cl /c /clr C3813.cpp
class A
{
   property int Int; // C3813
};

ref class B
{
   property int Int; // OK - declared within managed type
};
```
