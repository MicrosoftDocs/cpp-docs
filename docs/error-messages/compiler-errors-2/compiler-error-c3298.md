---
description: "Learn more about: Compiler Error C3298"
title: "Compiler Error C3298"
ms.date: "11/04/2016"
f1_keywords: ["C3298"]
helpviewer_keywords: ["C3298"]
ms.assetid: 458c2680-95bb-4d5e-895f-ce4115844193
---
# Compiler Error C3298

'constraint_1' : cannot use 'constraint_2' as a constraint because 'constraint_2' has the ref constraint and 'constraint_1' has the value constraint

You cannot specify mutually exclusive characteristics for a constraint. For example, a generic type parameter cannot be constrained to both a value type and a reference type.

For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## Example

The following sample generates C3298.

```cpp
// C3298.cpp
// compile with: /clr /c
generic<class T, class U>
where T : ref class
where U : T, value class   // C3298
public ref struct R {};
```
