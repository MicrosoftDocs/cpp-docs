---
title: "Compiler Error C3393"
description: "Learn more about: Compiler Error C3393"
ms.date: 11/04/2016
f1_keywords: ["C3393"]
helpviewer_keywords: ["C3393"]
---
# Compiler Error C3393

> syntax error in constraint clause: 'identifier' is not a type

## Remarks

The identifier passed to a constraint, which must be a type, was not a type.  For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## Example

The following example generates C3393:

```cpp
// C3393.cpp
// compile with: /clr /c
void MyInterface() {}
interface class MyInterface2 {};

generic<typename T>
where T : MyInterface   // C3393
// try the following line instead
// where T : MyInterface2
ref class R {};
```
