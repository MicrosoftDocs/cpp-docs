---
title: "Compiler Error C2581"
description: "Learn more about: Compiler Error C2581"
ms.date: 11/04/2016
f1_keywords: ["C2581"]
helpviewer_keywords: ["C2581"]
---
# Compiler Error C2581

> 'type' : static 'operator =' function is illegal

## Remarks

The assignment (`=`) operator is incorrectly declared as **`static`**. Assignment operators cannot be **`static`**. For more information, see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## Example

The following example generates C2581.

```cpp
// C2581.cpp
// compile with: /clr /c
ref struct Y {
   static Y ^ operator = (Y^ me, int i);   // C2581
   Y^ operator =(int i);   // OK
};
```
