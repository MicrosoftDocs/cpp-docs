---
description: "Learn more about: Compiler Error C3707"
title: "Compiler Error C3707"
ms.date: "11/04/2016"
f1_keywords: ["C3707"]
helpviewer_keywords: ["C3707"]
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
---
# Compiler Error C3707

'function' : dispinterface method must have a dispid

If you use a `dispinterface` method, you must assign it a `dispid`. To fix this error, assign a `dispid` to the `dispinterface` method, for example, by uncommenting the `id` attribute on the method in the sample below. For more information, see the attributes [dispinterface](../../windows/attributes/dispinterface.md) and [id](../../windows/attributes/id.md).

The following sample generates C3707:

```cpp
// C3707.cpp
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

[module(name="xx")];
[dispinterface]
__interface IEvents : IDispatch
{
   HRESULT event1([in] int i);   // C3707
   // try the following line instead
   // [id(1)] HRESULT event1([in] int i);
};

int main() {
}
```
