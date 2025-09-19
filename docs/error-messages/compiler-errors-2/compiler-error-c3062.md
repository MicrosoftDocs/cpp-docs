---
title: "Compiler Error C3062"
description: "Learn more about: Compiler Error C3062"
ms.date: 11/04/2016
f1_keywords: ["C3062"]
helpviewer_keywords: ["C3062"]
---
# Compiler Error C3062

> 'enum': enumerator requires value since the underlying type is 'type'

## Remarks

You can specify an underlying type for an enumeration. However, some types require you to assign values to each enumerator.

For more information on enums, see [enum class](../../extensions/enum-class-cpp-component-extensions.md).

## Example

The following example generates C3062:

```cpp
// C3062.cpp
// compile with: /clr

enum class MyEnum : bool { a };   // C3062
enum class MyEnum2 : bool { a = true};   // OK
```
