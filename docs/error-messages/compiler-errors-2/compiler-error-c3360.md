---
description: "Learn more about: Compiler Error C3360"
title: "Compiler Error C3360"
ms.date: "11/04/2016"
f1_keywords: ["C3360"]
helpviewer_keywords: ["C3360"]
ms.assetid: 6acf983a-dbb6-422b-b045-a34bb4ba6761
---
# Compiler Error C3360

'string': cannot create name

The value that was passed to the [uuid](../../windows/attributes/uuid-cpp-attributes.md) attribute was not valid.

The following sample generates C3360:

```cpp
// C3360.cpp
[ uuid("1") ]
// try this line instead
// [ uuid("12341234-1234-1234-1234-123412341234") ]
struct A   // C3360
{
};

int main()
{
}
```
