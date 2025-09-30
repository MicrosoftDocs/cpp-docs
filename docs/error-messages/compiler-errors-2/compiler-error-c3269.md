---
title: "Compiler Error C3269"
description: "Learn more about: Compiler Error C3269"
ms.date: 11/04/2016
f1_keywords: ["C3269"]
helpviewer_keywords: ["C3269"]
---
# Compiler Error C3269

> 'function' : a member-function of a managed or WinRTtype cannot be declared with '...'

## Remarks

Managed and WinRT class member functions cannot declare variable-length parameter lists.

## Example

The following example generates C3269 and shows how to fix it:

```cpp
// C3269_2.cpp
// compile with: /clr

ref struct A
{
   void func(int i, ...)   // C3269
   // try the following line instead
   // void func(int i )
   {
   }
};

int main()
{
}
```
