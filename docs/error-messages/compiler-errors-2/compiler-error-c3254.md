---
title: "Compiler Error C3254"
description: "Learn more about: Compiler Error C3254"
ms.date: 11/04/2016
f1_keywords: ["C3254"]
helpviewer_keywords: ["C3254"]
---
# Compiler Error C3254

> 'explicit override' : class contains explicit override 'override' but does not derive from an interface that contains the function declaration

## Remarks

When you [explicitly override](../../cpp/explicit-overrides-cpp.md) a method, the class that contains the override must derive, directly or indirectly, from the type that contains the function you are overriding.

## Example

The following example generates C3254:

```cpp
// C3254.cpp
__interface I
{
   void f();
};

__interface I1 : I
{
};

struct A /* : I1 */
{
   void I1::f()
   {   // C3254, uncomment : I1 to resolve this C3254
   }
};

int main()
{
}
```
