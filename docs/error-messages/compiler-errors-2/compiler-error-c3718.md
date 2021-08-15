---
description: "Learn more about: Compiler Error C3718"
title: "Compiler Error C3718"
ms.date: "11/04/2016"
f1_keywords: ["C3718"]
helpviewer_keywords: ["C3718"]
ms.assetid: 346b5205-c44d-49d3-b66a-96417d3d6986
---
# Compiler Error C3718

> can only call '*event*' in the context of a member function of the receiving class

The event can only be called from the receiving class.

## Example

The following sample generates C3718:

```cpp
// C3718.cpp
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[module(name="test")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface I
{
    HRESULT f();
};

[event_source(com), coclass, uuid("00000000-0000-0000-0000-000000000002")]
struct E
{
    __event __interface I;
};

[event_receiver(com)]
struct R
{
    void b()
    {
        printf_s("B::bar()\n");
    }

    void HookAndRun(E* pE)
    {
        __hook(&I::f, pE->GetUnknown(), &R::b);
        __raise pE->f();
    }
};

int main()
{
    CComObject<E>* pE;
    CComObject<E>::CreateInstance(&pE);

    __hook(&I::f, pE->GetUnknown(), &R::b, &r);   // C3718
    __raise pE->f();
    // try the following lines instead
    // R r;
    // r.HookAndRun(pE);
}
```
