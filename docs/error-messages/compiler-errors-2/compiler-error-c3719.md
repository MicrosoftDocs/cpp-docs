---
description: "Learn more about: Compiler Error C3719"
title: "Compiler Error C3719"
ms.date: "11/04/2016"
f1_keywords: ["C3719"]
helpviewer_keywords: ["C3719"]
ms.assetid: d0d59d4e-babb-4480-9ef7-70cf1a28165c
---
# Compiler Error C3719

'interface': an interface based event source can only be used for COM events

You declared an interface in a non-COM context.

The following sample generates C3719:

```cpp
// C3719a.cpp
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[module(name="MyLibrary", version="1.2", helpfile="MyHelpFile")];

[object]
__interface I {
   HRESULT func1();
};

[event_source(native), coclass]
struct A {
   __event __interface I;   // C3719

   // try the following line instead
   // __event func2();
};

int main() {
}
```

To fix this error, apply the [object](../../windows/attributes/object-cpp.md), [coclass](../../windows/attributes/coclass.md), [event_source](../../windows/attributes/event-source.md), and [event_receiver](../../windows/attributes/event-receiver.md) attributes appropriately to make the classes in which you are using the interface COM classes. For example:

```cpp
// C3719b.cpp
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>

[module(name="xx")];
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface I {
   HRESULT f();
};

[coclass, event_source(com) , uuid("00000000-0000-0000-0000-000000000002")]
struct MyStruct {
   __event __interface I;
};

[event_receiver(com)]
struct MyStruct2 {
   void f() {
   }
   MyStruct2(I* pB) {
      __hook(&I::f, pB, &MyStruct2::f);
   }
};

int main()
{
}
```
