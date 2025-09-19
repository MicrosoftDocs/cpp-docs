---
title: "Compiler Error C3394"
description: "Learn more about: Compiler Error C3394"
ms.date: 11/04/2016
f1_keywords: ["C3394"]
helpviewer_keywords: ["C3394"]
---
# Compiler Error C3394

> syntax error in constraint clause: found 'identifier' expected a type

## Remarks

A constraint was ill formed.  For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## Example

The following example generates C3394:

```cpp
// C3394.cpp
// compile with: /clr /c
ref class MyClass {};
ref class R {
   generic<typename T>
   where T : static   // C3394
   // try the following line instead
   // where T : MyClass
   void f() {}
};
```
