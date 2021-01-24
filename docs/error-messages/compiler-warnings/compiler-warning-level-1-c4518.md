---
description: "Learn more about: Compiler Warning (level 1) C4518"
title: "Compiler Warning (level 1) C4518"
ms.date: "11/04/2016"
f1_keywords: ["C4518"]
helpviewer_keywords: ["C4518"]
ms.assetid: 4ad21004-f076-43fd-99f4-4bf1f9be4c0b
---
# Compiler Warning (level 1) C4518

'specifier' : storage-class or type specifier(s) unexpected here; ignored

The following sample generates C4518:

```cpp
// C4518.cpp
// compile with: /c /W1
_declspec(dllexport) extern "C" void MyFunction();   // C4518

extern "C" void MyFunction();   // OK
```
