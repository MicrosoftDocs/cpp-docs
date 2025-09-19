---
title: "Compiler Error C3387"
description: "Learn more about: Compiler Error C3387"
ms.date: 11/04/2016
f1_keywords: ["C3387"]
helpviewer_keywords: ["C3387"]
---
# Compiler Error C3387

> 'member' : __declspec(dllexport)/\__declspec(dllimport) cannot be applied to a member of a managed or WinRT type

## Remarks

The `dllimport` and [dllexport](../../cpp/dllexport-dllimport.md) **`__declspec`** modifiers are not valid on members of a managed or Windows Runtime type.

## Example

The following example generates C3387 and shows how to fix it:

```cpp
// C3387a.cpp
// compile with: /clr /c
ref class X2 {
   void __declspec(dllexport) mf() {   // C3387
   // try the following line instead
   // void mf() {
   }
};
```
