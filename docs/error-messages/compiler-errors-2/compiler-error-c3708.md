---
description: "Learn more about: Compiler Error C3708"
title: "Compiler Error C3708"
ms.date: "11/04/2016"
f1_keywords: ["C3708"]
helpviewer_keywords: ["C3708"]
ms.assetid: 45e71564-9c7f-437f-98d8-a735ce162ed0
---
# Compiler Error C3708

'interface': improper use of 'keyword'; must be a member of a compatible event source

To declare an interface as an event, the event declaration must be in an event source.

The following sample generates C3708:

```cpp
// C3708.cpp
// compile with: /c
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[ module(name="MyLibrary")];

[ object, uuid("00000000-0000-0000-0000-000000000001") ]
__interface I {
   HRESULT func();
};

[ object, uuid("00000000-0000-0000-0000-000000000002") ]
__interface II {
   HRESULT func();
};

__event __interface I;   // C3708

// put the event in an event source
[ coclass, event_source(com), uuid("00000000-0000-0000-0000-000000000003") ]
struct E : II {
   __event __interface II;
};
```
