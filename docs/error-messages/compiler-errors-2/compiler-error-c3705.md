---
description: "Learn more about: Compiler Error C3705"
title: "Compiler Error C3705"
ms.date: "11/04/2016"
f1_keywords: ["C3705"]
helpviewer_keywords: ["C3705"]
ms.assetid: 8361017d-5782-4214-a9d7-e9825fd29bc8
---
# Compiler Error C3705

'function' : cannot find eventing interface

You must define an event interface to use COM events. Note that the `#include` lines of the ATL header files shown in the sample below are required for using COM events. To fix this error, uncomment the definition of the `IEvents` interface in the sample code.

The following sample generates C3705:

```cpp
// C3705.cpp
// compile with: /c
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

[module(dll, name="idid", uuid="12341234-1234-1234-1234-123412341234")];

// Uncomment the following 4 lines to resolve.
// [object, uuid("00000000-0000-0000-0000-000000000003")]
// __interface IEvents : IUnknown {
//    HRESULT event1([in] int i);
// };

[dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IBase {
   HRESULT fireEvents();
};

[coclass, event_source(com), uuid("00000000-0000-0000-0000-000000000002")]
class CEventSrc : public IBase {
public:
   __event __interface IEvents;   // C3705 uncomment IEvents to resolve
   HRESULT fireEvents() {
      HRESULT hr = IEvents_event1(123);
      return hr;
   }
};
```
