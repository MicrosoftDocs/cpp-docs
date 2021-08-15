---
description: "Learn more about: Compiler Error C2504"
title: "Compiler Error C2504"
ms.date: "11/04/2016"
f1_keywords: ["C2504"]
helpviewer_keywords: ["C2504"]
ms.assetid: c9e002a6-a4ee-4ba7-970e-edf4adb83692
---
# Compiler Error C2504

'class' : base class undefined

The base class is declared but never defined.  Possible causes:

1. Missing include file.

1. External base class not declared with [extern](../../cpp/extern-cpp.md).

The following sample generates C2504:

```cpp
// C2504.cpp
// compile with: /c
class A;
class B : public A {};   // C2504
```

// OK

```
class C{};
class D : public C {};
```
