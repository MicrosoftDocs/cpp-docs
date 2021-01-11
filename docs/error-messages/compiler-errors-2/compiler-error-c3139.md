---
description: "Learn more about: Compiler Error C3139"
title: "Compiler Error C3139"
ms.date: "11/04/2016"
f1_keywords: ["C3139"]
helpviewer_keywords: ["C3139"]
ms.assetid: 95c92263-10ac-4ff3-b385-6312dd92adbc
---
# Compiler Error C3139

'struct' : cannot export a UDT without members

You attempted to apply the [export](../../windows/attributes/export.md) attribute to an empty UDT (user-defined type). For example:

```cpp
// C3139.cpp
#include "unknwn.h"
[emitidl];
[module(name=xx)];

[export] struct MyStruct {   // C3139 empty type
};
int main(){}
```
