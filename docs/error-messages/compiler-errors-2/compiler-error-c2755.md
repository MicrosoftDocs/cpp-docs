---
description: "Learn more about: Compiler Error C2755"
title: "Compiler Error C2755"
ms.date: "11/04/2016"
f1_keywords: ["C2755"]
helpviewer_keywords: ["C2755"]
ms.assetid: 8ee4eeb6-4757-4efe-9100-38ff4a96f1de
---
# Compiler Error C2755

'param' : non-type parameter of a partial specialization must be a simple identifier

The non-type parameter needs to be a simple identifier, something the compiler can resolve at compile time to a single identifier or a constant value.

The following sample generates C2755:

```cpp
// C2755.cpp
template<int I, int J>
struct A {};

template<int I>
struct A<I,I*5> {};   // C2755
// try the following line instead
// struct A<I,5> {};
```
