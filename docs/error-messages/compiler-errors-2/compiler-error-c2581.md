---
description: "Learn more about: Compiler Error C2581"
title: "Compiler Error C2581"
ms.date: "11/04/2016"
f1_keywords: ["C2581"]
helpviewer_keywords: ["C2581"]
ms.assetid: 24a4e4c1-24d3-4e42-b760-7dcaf9740b16
---
# Compiler Error C2581

'type' : static 'operator =' function is illegal

The assignment (`=`) operator is incorrectly declared as **`static`**. Assignment operators cannot be **`static`**. For more information, see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## Example

The following sample generates C2581.

```cpp
// C2581.cpp
// compile with: /clr /c
ref struct Y {
   static Y ^ operator = (Y^ me, int i);   // C2581
   Y^ operator =(int i);   // OK
};
```
