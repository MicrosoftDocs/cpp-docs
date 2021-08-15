---
description: "Learn more about: Compiler Warning (level 1) C4096"
title: "Compiler Warning (level 1) C4096"
ms.date: "11/04/2016"
f1_keywords: ["C4096"]
helpviewer_keywords: ["C4096"]
ms.assetid: abf3cca2-2f21-45d8-b025-6b513b00681e
---
# Compiler Warning (level 1) C4096

'a': interface is not a COM interface; will not be emitted to IDL

An interface definition that you may have intended as a COM interface was not defined as a COM interface and therefore will not be emitted to the IDL file.

See [Interface Attributes](../../windows/attributes/interface-attributes.md) for a list attributes that indicate an interface is a COM interface.

The following sample generates C4096:

```cpp
// C4096.cpp
// compile with: /W1 /LD
#include "windows.h"
[module(name="xx")];

// [object, uuid("00000000-0000-0000-0000-000000000001")]
__interface a
{
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
struct b : a
{
};   // C4096, remove coclass or uncomment object
```
