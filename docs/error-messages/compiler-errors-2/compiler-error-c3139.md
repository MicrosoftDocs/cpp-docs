---
title: "Compiler Error C3139"
description: "Learn more about: Compiler Error C3139"
ms.date: 11/04/2016
f1_keywords: ["C3139"]
helpviewer_keywords: ["C3139"]
---
# Compiler Error C3139

> 'struct' : cannot export a UDT without members

## Remarks

You attempted to apply the [export](../../windows/attributes/export.md) attribute to an empty UDT (user-defined type).

## Example

For example:

```cpp
// C3139.cpp
#include "unknwn.h"
[emitidl];
[module(name=xx)];

[export] struct MyStruct {   // C3139 empty type
};
int main(){}
```
