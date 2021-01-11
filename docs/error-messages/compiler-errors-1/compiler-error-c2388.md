---
description: "Learn more about: Compiler Error C2388"
title: "Compiler Error C2388"
ms.date: "11/04/2016"
f1_keywords: ["C2388"]
helpviewer_keywords: ["C2388"]
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
---
# Compiler Error C2388

'symbol' : a symbol cannot be declared with both __declspec(appdomain) and \__declspec(process)

The `appdomain` and `process` **`__declspec`** modifiers cannot be used on the same symbol. The storage for a variable exists per process or per application domain.

For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).

The following sample generates C2388:

```cpp
// C2388.cpp
// compile with: /clr /c
__declspec(process) __declspec(appdomain) int i;   // C2388
__declspec(appdomain) int i;   // OK
```
