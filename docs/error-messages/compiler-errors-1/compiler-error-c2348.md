---
description: "Learn more about: Compiler Error C2348"
title: "Compiler Error C2348"
ms.date: "11/04/2016"
f1_keywords: ["C2348"]
helpviewer_keywords: ["C2348"]
ms.assetid: 4c4d701f-ccf1-46fe-9ddb-3f341684f269
---
# Compiler Error C2348

'type name' : is not a C-style aggregate, cannot be exported in embedded-IDL

To place a **`struct`** in a .idl file with the [export](../../windows/attributes/export.md) attribute, the **`struct`** must contain only data.

The following sample generates C2348:

```cpp
// C2348.cpp
// C2348 error expected
[ module(name="SimpleMidlTest") ];

[export]
struct Point {
   // Delete the following two lines to resolve.
   Point() : m_i(0), m_j(0) {}
   Point(int i, int j) : m_i(i), m_j(j) {}

   int m_i;
   int m_j;
};
```
