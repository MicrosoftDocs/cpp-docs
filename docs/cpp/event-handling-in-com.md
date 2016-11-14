---
title: "Event Handling in COM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, COM"
  - "event handling, about event handling"
  - "declaring events"
  - "event handlers, COM"
  - "event handlers"
  - "COM, events"
  - "event receivers, in event handling"
  - "event handling"
  - "hooking events"
  - "event receivers, name and signature matching"
  - "event sources, in event handling"
  - "declaring events, in COM"
  - "declaring events, event handling in COM"
ms.assetid: 6b4617d4-a58e-440c-a8a6-1ad1c715b2bb
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Event Handling in COM
In COM event handling, you set up an event source and event receiver using the [event_source](../windows/event-source.md) and [event_receiver](../windows/event-receiver.md) attributes, respectively, specifying `type`=**com**. These attributes inject the appropriate code for custom, dispatch, and dual interfaces to allow the classes to which they are applied to fire events and handle events through COM connection points.  
  
## Declaring Events  
 In an event source class, use the [__event](../cpp/event.md) keyword on an interface declaration to declare that interface's methods as events. The events of that interface are fired when you call them as interface methods. Methods on event interfaces can have zero or more parameters (which should all be **in** parameters). The return type can be void or any integral type.  
  
## Defining Event Handlers  
 In an event receiver class, you define event handlers, which are methods with signatures (return types, calling conventions, and arguments) that match the event that they will handle. For COM events, calling conventions do not have to match; see [Layout Dependent COM Events](#vcconeventhandlingincomanchorlayoutdependentcomevents) below for details.  
  
## Hooking Event Handlers to Events  
 Also in an event receiver class, you use the intrinsic function [__hook](../cpp/hook.md) to associate events with event handlers and [__unhook](../cpp/unhook.md) to dissociate events from event handlers. You can hook several events to an event handler, or several event handlers to an event.  
  
> [!NOTE]
>  Typically, there are two techniques to allow a COM event receiver to access event source interface definitions. The first, as shown below, is to share a common header file. The second is to use [#import](../preprocessor/hash-import-directive-cpp.md) with the `embedded_idl` import qualifier, so that the event source type library is written to the .tlh file with the attribute-generated code preserved.  
  
## Firing Events  
 To fire an event, simply call a method in the interface declared with the `__event` keyword in the event source class. If handlers have been hooked to the event, the handlers will be called.  
  
### COM Event Code  
 The following example shows how to fire an event in a COM class. To compile and run the example, refer to the comments in the code.  
  
```  
// evh_server.h  
#pragma once  
  
[ dual, uuid("00000000-0000-0000-0000-000000000001") ]  
__interface IEvents {  
   [id(1)] HRESULT MyEvent([in] int value);  
};  
  
[ dual, uuid("00000000-0000-0000-0000-000000000002") ]  
__interface IEventSource {  
   [id(1)] HRESULT FireEvent();  
};  
  
class DECLSPEC_UUID("530DF3AD-6936-3214-A83B-27B63C7997C4") CSource;  
```  
  
 And then the server:  
  
```  
// evh_server.cpp  
// compile with: /LD  
// post-build command: Regsvr32.exe /s evh_server.dll  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
#include "evh_server.h"  
  
[ module(dll, name="EventSource", uuid="6E46B59E-89C3-4c15-A6D8-B8A1CEC98830") ];  
  
[coclass, event_source(com), uuid("530DF3AD-6936-3214-A83B-27B63C7997C4")]  
class CSource : public IEventSource {  
public:  
   __event __interface IEvents;   
  
   HRESULT FireEvent() {  
      __raise MyEvent(123);  
      return S_OK;  
   }  
};  
```  
  
 And then the client:  
  
```  
// evh_client.cpp  
// compile with: /link /OPT:NOREF  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
#include <stdio.h>  
#include "evh_server.h"  
  
[ module(name="EventReceiver") ];  
  
[ event_receiver(com) ]  
class CReceiver {  
public:  
   HRESULT MyHandler1(int nValue) {  
      printf_s("MyHandler1 was called with value %d.\n", nValue);  
      return S_OK;  
   }  
  
   HRESULT MyHandler2(int nValue) {  
      printf_s("MyHandler2 was called with value %d.\n", nValue);  
      return S_OK;  
   }  
  
   void HookEvent(IEventSource* pSource) {  
      __hook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler1);  
      __hook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
  
   void UnhookEvent(IEventSource* pSource) {  
      __unhook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler1);  
      __unhook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
};  
  
int main() {  
   // Create COM object  
   CoInitialize(NULL);  
   {  
      IEventSource* pSource = 0;  
      HRESULT hr = CoCreateInstance(__uuidof(CSource), NULL,         CLSCTX_ALL, __uuidof(IEventSource), (void **) &pSource);  
      if (FAILED(hr)) {  
         return -1;  
      }  
  
      // Create receiver and fire event  
      CReceiver receiver;  
      receiver.HookEvent(pSource);  
      pSource->FireEvent();  
      receiver.UnhookEvent(pSource);  
   }  
   CoUninitialize();  
   return 0;  
}  
```  
  
### Output  
  
```  
MyHandler1 was called with value 123.  
MyHandler2 was called with value 123.  
```  
  
##  <a name="vcconeventhandlingincomanchorlayoutdependentcomevents"></a> Layout Dependent COM Events  
 Layout dependency is only an issue for COM programming. In native and managed event handling, the signatures (return type, calling convention, and arguments) of the handlers must match their events, but the handler names do not have to match their events.  
  
 However, in COM event handling, when you set the *layout_dependent* parameter of **event_receiver** to **true**, the name and signature matching is enforced. This means that the names and signatures of the handlers in the event receiver must exactly match the names and signatures of the events to which they are hooked.  
  
 When *layout_dependent* is set to **false**, the calling convention and storage class (virtual, static, and so on) can be mixed and matched between the firing event method and the hooking methods (its delegates). It is slightly more efficient to have *layout_dependent*=**true**.  
  
 For example, suppose `IEventSource` is defined to have the following methods:  
  
```  
[id(1)] HRESULT MyEvent1([in] int value);  
[id(2)] HRESULT MyEvent2([in] int value);  
```  
  
 Assume the event source has the following form:  
  
```  
[coclass, event_source(com)]  
class CSource : public IEventSource {  
public:  
   __event __interface IEvents;  
  
   HRESULT FireEvent() {  
      MyEvent1(123);  
      MyEvent2(123);  
      return S_OK;  
   }  
};  
```  
  
 Then, in the event receiver, any handler hooked to a method in `IEventSource` must match its name and signature, as follows:  
  
```  
[coclass, event_receiver(com, true)]  
class CReceiver {  
public:  
   HRESULT MyEvent1(int nValue) {  // name and signature matches MyEvent1  
      ...  
   }  
   HRESULT MyEvent2(E c, char* pc) {  // signature doesn't match MyEvent2  
      ...  
   }  
   HRESULT MyHandler1(int nValue) {  // name doesn't match MyEvent1 (or 2)  
      ...  
   }  
   void HookEvent(IEventSource* pSource) {  
      __hook(IFace, pSource);  // Hooks up all name-matched events   
                               // under layout_dependent = true  
      __hook(&IFace::MyEvent1, pSource, &CReceive::MyEvent1);   // valid  
      __hook(&IFace::MyEvent2, pSource, &CSink::MyEvent2);   // not valid  
      __hook(&IFace::MyEvent1, pSource, &CSink:: MyHandler1); // not valid  
   }  
};  
```  
  
## See Also  
 [Event Handling](../cpp/event-handling.md)