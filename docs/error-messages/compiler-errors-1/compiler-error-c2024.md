---
title: "Compiler Error C2024"
description: "Learn more about: Compiler Error C2024"
ms.date: 08/18/2022
f1_keywords: ["C2024"]
helpviewer_keywords: ["C2024"]
---
# Compiler Error C2024

> 'alignas' attribute applies to variables, data members and tag types only

## Remarks

The compiler found an **`alignas`** specifier applied to a function or other type that can't be aligned.

To resolve this error, remove the **`alignas`** specifier.

## Example

The following example generates C2024:

```cpp
// C2024.cpp
namespace alignas(2) ns {   // C2024
   void func(alignas(8) int x) {}   // C2024
}
```

Possible resolution:

```cpp
// C2024b.cpp
// compile with: /c
namespace ns {
   void func(int x) {}
}
```
