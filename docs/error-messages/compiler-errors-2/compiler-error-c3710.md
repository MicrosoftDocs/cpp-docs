---
title: "Compiler Error C3710"
description: "Learn more about: Compiler Error C3710"
ms.date: 11/04/2016
f1_keywords: ["C3710"]
helpviewer_keywords: ["C3710"]
---
# Compiler Error C3710

> 'function': improper syntax for specifying event handler in __hook/\__unhook

## Remarks

When you specify an event handler with [__hook](../../cpp/hook.md) or [__unhook](../../cpp/unhook.md), the handler must be a valid method.

## Example

The following example generates C3710

```cpp
// C3710.cpp
// compile with: /link /opt:noref
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include <stdio.h>

[event_source(native)]
class CEventSrc
{
public:
    __event void event1();
};

[event_receiver(native)]
class CEventRec
{
public:
    void handler1()
    {
        printf_s("Executing handler1().\n");
    }

    void HookEvents(CEventSrc* pSrc)
    {
        __hook(&CEventSrc::event1, pSrc, 0);   // C3710
        // try the following line instead
        // __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);
    }

    void UnhookEvents(CEventSrc* pSrc)
    {
        __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1);
    }
};

int main()
{
    CEventSrc eventSrc;
    CEventRec eventRec;
    eventRec.HookEvents(&eventSrc);
    eventSrc.event1();
    eventRec.UnhookEvents(&eventSrc);
}
```
