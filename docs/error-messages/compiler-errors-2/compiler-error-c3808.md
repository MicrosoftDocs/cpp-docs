---
description: "Learn more about: Compiler Error C3808"
title: "Compiler Error C3808"
ms.date: "11/04/2016"
f1_keywords: ["C3808"]
helpviewer_keywords: ["C3808"]
ms.assetid: 2ee8ac97-3ea4-417a-8710-be73a7f98cf4
---
# Compiler Error C3808

> '*type*' : a class with the ComImport attribute cannot define member '*member*', only abstract or dllimport functions are allowed

## Remarks

A type that derived from <xref:System.Runtime.InteropServices.ComImportAttribute> cannot define *member*.

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Example

The following sample generates C3808.

```cpp
// C3808.cpp
// compile with: /c /clr:pure user32.lib
using namespace System::Runtime::InteropServices;

[System::Runtime::InteropServices::ComImportAttribute()]
ref struct S1 {
   int f() {}   // C3808
   virtual int g() abstract;   // OK

   [DllImport("msvcrt.dll")]
   int printf(System::String ^, int i);   // OK
};
```
