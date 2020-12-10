---
description: "Learn more about: Compiler Error C3388"
title: "Compiler Error C3388"
ms.date: "11/04/2016"
f1_keywords: ["C3388"]
helpviewer_keywords: ["C3388"]
ms.assetid: 34336545-ed13-4d81-ab5f-f869799fe4c2
---
# Compiler Error C3388

'type' : not allowed as a constraint, assuming 'ref class' to continue parsing

A constraint was specified on a generic type, but the constraint was not specified correctly. See [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) for more information.

## Example

The following sample generates C3388.

```cpp
// C3388.cpp
// compile with: /clr /c
interface class AA {};

generic <class T>
where T : interface class   // C3388
ref class C {};

// OK
generic <class T>
where T : AA
ref class D {};
```
