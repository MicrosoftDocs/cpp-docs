---
title: "Compiler Error C3371"
description: "Learn more about: Compiler Error C3371"
ms.date: 11/04/2016
f1_keywords: ["C3371"]
helpviewer_keywords: ["C3371"]
---
# Compiler Error C3371

> 'idl_module': only the 'name' property is allowed here

## Remarks

[idl_module](../../windows/attributes/idl-module.md) usage directly on a function declaration cannot have any parameters other than name.

## Example

The following example generates C3371:

```cpp
// C3371.cpp
[idl_module(name="Name", dllname="Some.dll")];
[idl_module(name="Name", helpstring="Some help")]   // C3371
int f1();
// try
// [idl_module(name="Name")]
// int f1();

int main()
{
}
```
