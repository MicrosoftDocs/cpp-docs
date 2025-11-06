---
title: "Compiler Error C3400"
description: "Learn more about: Compiler Error C3400"
ms.date: 11/04/2016
f1_keywords: ["C3400"]
helpviewer_keywords: ["C3400"]
---
# Compiler Error C3400

> circular constraint dependency involving 'constraint_1' and 'constraint_2'

## Remarks

The compiler detected circular constraints.

For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## Example

The following example generates C3400.

```cpp
// C3400.cpp
// compile with: /clr /c
generic<class T, class U>
where T : U
where U : T   // C3400
public ref struct R {};
```
