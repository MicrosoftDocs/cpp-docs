---
title: "Compiler Error C3618"
description: "Learn more about: Compiler Error C3618"
ms.date: 11/04/2016
f1_keywords: ["C3618"]
helpviewer_keywords: ["C3618"]
---
# Compiler Error C3618

> 'function': a method marked DllImport cannot be defined

## Remarks

A method marked with <xref:System.Runtime.InteropServices.DllImportAttribute> is defined in the specified.DLL.

## Example

The following example generates C3618.

```cpp
// C3618.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[ DllImport("user32.dll", EntryPoint="MessageBox", CharSet=CharSet::Ansi) ]  // CHANGED
void Func();

void Func() {}   // C3618, remove this function definition to resolve
```
