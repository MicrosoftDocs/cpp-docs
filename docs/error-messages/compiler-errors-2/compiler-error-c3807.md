---
title: "Compiler Error C3807"
description: "Learn more about: Compiler Error C3807"
ms.date: 11/04/2016
f1_keywords: ["C3807"]
helpviewer_keywords: ["C3807"]
---
# Compiler Error C3807

> 'type' : a class with the ComImport attribute cannot derive from 'type2', only interface implementation is allowed

## Remarks

A type that derived from <xref:System.Runtime.InteropServices.ComImportAttribute> can only implement an interface.

## Example

The following example generates C3807.

```cpp
// C3807.cpp
// compile with: /clr /c
ref struct S {};
interface struct I {};

[System::Runtime::InteropServices::ComImportAttribute()]
ref struct S1 : S {};   // C3807
ref struct S2 : I {};
```
