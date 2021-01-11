---
description: "Learn more about: Compiler Error C3645"
title: "Compiler Error C3645"
ms.date: "11/04/2016"
f1_keywords: ["C3645"]
helpviewer_keywords: ["C3645"]
ms.assetid: 346da528-ae86-4cd0-9654-f41bee26ac0d
---
# Compiler Error C3645

'function' : __clrcall cannot be used on functions compiled to native code

The presence of some keywords in a function will cause the function to be compiled to native.

## Example

The following sample generates C3645.

```cpp
// C3645.cpp
// compile with: /clr /c
#pragma unmanaged
int __clrcall dog() {}   // C3645
```
