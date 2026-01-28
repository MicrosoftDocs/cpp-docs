---
title: "Compiler Error C3669"
description: "Learn more about: Compiler Error C3669"
ms.date: 11/04/2016
f1_keywords: ["C3669"]
helpviewer_keywords: ["C3669"]
---
# Compiler Error C3669

> 'member' : override specifier 'override' not allowed on static member functions or constructors

## Remarks

An override was specified incorrectly. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

## Example

The following example generates C3669.

```cpp
// C3669.cpp
// compile with: /clr
public ref struct R {
   R() override {}   // C3669
};
```
