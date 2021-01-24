---
description: "Learn more about: Compiler Warning (level 4) C4681"
title: "Compiler Warning (level 4) C4681"
ms.date: "11/04/2016"
f1_keywords: ["C4681"]
helpviewer_keywords: ["C4681"]
ms.assetid: a4e6d85f-3e21-4b45-a551-c23d3c554d3f
---
# Compiler Warning (level 4) C4681

'class' : coclass does not specify a default interface that is an event source

A [source](../../windows/attributes/source-cpp.md) interface was not specified for a class.

The following sample generates C4681:

```cpp
// C4681.cpp
// compile with: /W4 /c
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>

[module(name="test")];

[dual, uuid("00000000-0000-0000-0000-000000000000")]
__interface IEvent { [id(3)] HRESULT myEvent(); };

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface ISource { HRESULT Fire(); };

[ coclass,
  source(IEvent),
  default(ISource),
  // Uncomment the following line to resolve.
  // default(IEvent),
  uuid("00000000-0000-0000-0000-000000000002")
]
struct CSource : ISource {   // C4681
   HRESULT Fire() { return 0; }
};
```
