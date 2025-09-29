---
title: "Compiler Error C3174"
description: "Learn more about: Compiler Error C3174"
ms.date: 11/04/2016
f1_keywords: ["C3174"]
helpviewer_keywords: ["C3174"]
---
# Compiler Error C3174

> module attribute was not specified

## Remarks

A program that uses Visual C++ attributes did not also use the [module](../../windows/attributes/module-cpp.md) attribute, which is required in any program that uses attributes.

## Example

The following example generates C3174:

```cpp
// C3174.cpp
// C3174 expected
// uncomment the following line to resolve this C3174
// [module(name="x")];
[export]
struct S
{
   int i;
};

int main()
{
}
```
