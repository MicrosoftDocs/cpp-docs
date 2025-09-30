---
title: "Compiler Error C3370"
description: "Learn more about: Compiler Error C3370"
ms.date: 11/04/2016
f1_keywords: ["C3370"]
helpviewer_keywords: ["C3370"]
---
# Compiler Error C3370

> 'idl_module name': idl_module not yet defined

## Remarks

Before you can use [idl_module](../../windows/attributes/idl-module.md) to specify an entry point in a DLL, you must first use `idl_module` to specify the DLL name.

## Example

The following example generates C3370:

```cpp
// C3370.cpp
[module(name=MyLibrary)];
// uncomment the following line to resolve the error
// [idl_module(name="name1", dllname=x.dll)];
[idl_module(name="name1"), entry(100)] // C3370
int f1();

int main()
{
}
```
