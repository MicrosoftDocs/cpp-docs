---
description: "Learn more about: Compiler Error C3874"
title: "Compiler Error C3874"
ms.date: "11/04/2016"
f1_keywords: ["C3874"]
helpviewer_keywords: ["C3874"]
ms.assetid: fd55fc05-69a7-4237-b3b7-dca1d5400b4f
---
# Compiler Error C3874

return type of 'function' should be 'int' instead of 'type'

A function does not have the return type that was expected by the compiler.

The following sample generates C3874:

```cpp
// C3874b.cpp
double main()
{   // C3874
}
```
