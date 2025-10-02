---
title: "Compiler Error C3898"
description: "Learn more about: Compiler Error C3898"
ms.date: 11/04/2016
f1_keywords: ["C3898"]
helpviewer_keywords: ["C3898"]
---
# Compiler Error C3898

> 'var' : type data members can only be members of managed types

## Remarks

An [initonly](../../dotnet/initonly-cpp-cli.md) data member was declared in a native class.  An **`initonly`** data member can only be declared in a CLR class.

## Example

The following example generates C3898:

```cpp
// C3898.cpp
// compile with: /clr
struct Y1 {
   initonly
   static int data_var = 9;   // C3898
};
```

Possible resolution:

```cpp
// C3898b.cpp
// compile with: /clr /c
ref struct Y1 {
   initonly
   static int data_var = 9;
};
```
