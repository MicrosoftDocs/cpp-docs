---
description: "Learn more about: Compiler Error C3384"
title: "Compiler Error C3384"
ms.date: "11/04/2016"
f1_keywords: ["C3384"]
helpviewer_keywords: ["C3384"]
ms.assetid: c9f92c6a-62a9-4333-b2b1-bc55c7f288b6
---
# Compiler Error C3384

'type_parameter' : the value constraint and the ref constraint are mutually exclusive

You cannot constrain a generic type to both **`value class`** and **`ref class`**.

See [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) for more information.

## Example

The following sample generates C3384.

```cpp
// C3384.cpp
// compile with: /c /clr
generic <typename T>
where T : ref class
where T : value class   // C3384
ref class List {};
```
