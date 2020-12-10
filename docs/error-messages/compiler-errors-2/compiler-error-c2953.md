---
description: "Learn more about: Compiler Error C2953"
title: "Compiler Error C2953"
ms.date: "11/04/2016"
f1_keywords: ["C2953"]
helpviewer_keywords: ["C2953"]
ms.assetid: 8dbcfa24-8296-4e40-bdc4-5526c07d8892
---
# Compiler Error C2953

'identifier' : class template has already been defined

Check the source file and include files for other definitions.

The following sample generates C2953:

```cpp
// C2953.cpp
// compile with: /c
template <class T>  class A {};
template <class T>  class A {};   // C2953
template <class T>  class B {};   // OK
```
