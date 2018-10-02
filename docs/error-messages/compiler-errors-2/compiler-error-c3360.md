---
title: "Compiler Error C3360 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3360"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3360"]
ms.assetid: 6acf983a-dbb6-422b-b045-a34bb4ba6761
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3360

'string': cannot create name

The value that was passed to the [uuid](../../windows/uuid-cpp-attributes.md) attribute was not valid.

The following sample generates C3360:

```
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