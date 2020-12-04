---
description: "Learn more about: Compiler Error C3297"
title: "Compiler Error C3297"
ms.date: "11/04/2016"
f1_keywords: ["C3297"]
helpviewer_keywords: ["C3297"]
ms.assetid: 2a718b4c-6cdb-4418-92c0-fc3a259431c4
---
# Compiler Error C3297

'constraint_2' : cannot use 'constraint_1' as a constraint because 'constraint_1' has the value constraint

Value classes are sealed. If a constraint is a value class, another constraint can never derive from it.

For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## Example

The following sample generates C3297.

```cpp
// C3297.cpp
// compile with: /clr /c
generic<class T, class U>
where T : value class
where U : T   // C3297
public ref struct R {};
```
