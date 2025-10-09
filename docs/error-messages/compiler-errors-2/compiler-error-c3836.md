---
title: "Compiler Error C3836"
description: "Learn more about: Compiler Error C3836"
ms.date: 11/04/2016
f1_keywords: ["C3836"]
helpviewer_keywords: ["C3836"]
---
# Compiler Error C3836

> static constructor is not allowed to have a member initializer list

## Remarks

A managed class cannot have a static constructor that also has a member initialization list. Static class constructors are called by the common language runtime to do class initialization, initializing static data members.

## Example

The following example generates C3836:

```cpp
// C3836a.cpp
// compile with: /clr
ref class M
{
   static int s_i;

public:
   static M() :  s_i(1234)   // C3836, delete initializer to resolve
   {
   }
};

int main()
{
}
```
