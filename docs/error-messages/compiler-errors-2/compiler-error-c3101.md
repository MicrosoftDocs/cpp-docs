---
title: "Compiler Error C3101"
description: "Learn more about: Compiler Error C3101"
ms.date: 11/04/2016
f1_keywords: ["C3101"]
helpviewer_keywords: ["C3101"]
---
# Compiler Error C3101

> illegal expression for named attribute argument 'field'

## Remarks

When initializing a named attribute argument, the value must be a compile time constant.

For more information on attributes, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3101.

```cpp
// C3101.cpp
// compile with: /clr /c
ref class AAttribute : System::Attribute {
public:
   int Field;
};

extern int i;

[assembly:A(Field = i)];   // C3101
[assembly:A(Field = 0)];   // OK
```
