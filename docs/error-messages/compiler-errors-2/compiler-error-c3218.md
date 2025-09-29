---
title: "Compiler Error C3218"
description: "Learn more about: Compiler Error C3218"
ms.date: 11/04/2016
f1_keywords: ["C3218"]
helpviewer_keywords: ["C3218"]
---
# Compiler Error C3218

> 'type' : type not allowed as a constraint

## Remarks

For a type to be a constraint, it must be either a value type or reference to a managed class or interface.

## Example

The following example generates C3218.

```cpp
// C3218.cpp
// compile with: /clr /c
class A {};
ref class B {};

// Delete the following 3 lines to resolve.
generic <class T>
where T : A   // C3218
ref class C {};

// OK
generic <class T>
where  T : B
ref class D {};
```
