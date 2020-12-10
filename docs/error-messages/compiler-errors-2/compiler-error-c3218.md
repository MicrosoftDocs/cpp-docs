---
description: "Learn more about: Compiler Error C3218"
title: "Compiler Error C3218"
ms.date: "11/04/2016"
f1_keywords: ["C3218"]
helpviewer_keywords: ["C3218"]
ms.assetid: 0eea19e0-503e-4e07-ae8b-2cb2e95922cd
---
# Compiler Error C3218

'type' : type not allowed as a constraint

For a type to be a constraint, it must be either a value type or reference to a managed class or interface.

## Example

The following sample generates C3218.

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
