---
description: "Learn more about: Compiler Error C3825"
title: "Compiler Error C3825"
ms.date: "11/04/2016"
f1_keywords: ["C3825"]
helpviewer_keywords: ["C3825"]
ms.assetid: 18e204a1-f26e-42c6-8d74-2b49cc95f940
---
# Compiler Error C3825

'class': a managed or WinRTclass can only support managed or WinRTevents

Only .NET events are supported in managed classes. Only Windows Runtime events are supported in Windows Runtime classes. To fix this error in managed code, change type parameter of `event_source` and `event_receiver` from `native` to `managed`. Alternatively, remove the attribute.

## Example

The following sample generates C3825 and shows how to fix it:

```cpp
// C3825a.cpp
// compile with: /clr
public delegate void del1();

[event_source(native)]           // To fix, change 'native' to 'managed' or delete this line
ref class CEventSrc
{
public:
   event del1^ event1;       // C3825

   void FireEvents() {
      event1();
   }
};

[event_receiver(native)]         // To fix, change 'native' to 'managed' or delete this line
ref class CEventRec
{
public:
   void handler1()
   {
      System::Console::WriteLine("Executing handler1().\n");
   }
   void HookEvents(CEventSrc^ pSrc)
   {
      pSrc->event1 += gcnew del1(this, &CEventRec::handler1);
   }
   void UnhookEvents(CEventSrc^ pSrc)
   {
      pSrc->event1 -= gcnew del1(this, &CEventRec::handler1);
   }
};

int main()
{
   CEventSrc^ pEventSrc = gcnew CEventSrc;
   CEventRec^ pEventRec = gcnew CEventRec;
   pEventRec->HookEvents(pEventSrc);
   pEventSrc->FireEvents();
   pEventRec->UnhookEvents(pEventSrc);
}
```
