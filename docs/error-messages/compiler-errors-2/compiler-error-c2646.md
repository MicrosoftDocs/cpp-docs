---
description: "Learn more about: Compiler Error C2646"
title: "Compiler Error C2646"
ms.date: "11/04/2016"
f1_keywords: ["C2646"]
helpviewer_keywords: ["C2646"]
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
---
# Compiler Error C2646

an anonymous struct or union at global or namespace scope must be declared static

An anonymous struct or union has global or namespace scope but is not declared **`static`**.

The following sample generates C2646 and shows how to fix it:

```cpp
// C2646.cpp
// compile with: /c
union { int i; };   // C2646 not static

// OK
static union { int j; };
union U { int i; };
```
