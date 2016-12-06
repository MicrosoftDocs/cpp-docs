---
title: "event Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::event"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event class"
ms.assetid: fba35a53-6568-4bfa-9aaf-07c0928cf73d
caps.latest.revision: 22
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
# event Class
A manual reset event which is explicitly aware of the Concurrency Runtime.  
  
## Syntax  
  
```
class event;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[event::~event Destructor](#dtor)|Destroys an event.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[event::reset Method](#reset)|Resets the event to a non-signaled state.|  
|[event::set Method](#set)|Signals the event.|  
|[event::wait Method](#wait)|Waits for the event to become signaled.|  
|[event::wait_for_multiple Method](#wait_for_multiple)|Waits for multiple events to become signaled.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[event::timeout_infinite Constant](#timeout_infinite)|Value indicating that a wait should never time out.|  
  
## Remarks  
 For more information, see [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).  
  
## Inheritance Hierarchy  
 `event`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a>  event::event Constructor  
 Constructs a new event.  
  
```
_CRTIMP event();
```  
  
### Remarks  
  
##  <a name="dtor"></a>  event::~event Destructor  
 Destroys an event.  
  
```
~event();
```  
  
### Remarks  
 It is expected that there are no threads waiting on the event when the destructor runs. Allowing the event to destruct with threads still waiting on it results in undefined behavior.  
  
##  <a name="reset"></a>  event::reset Method  
 Resets the event to a non-signaled state.  
  
```
void reset();
```  
  
##  <a name="set"></a>  event::set Method  
 Signals the event.  
  
```
void set();
```  
  
### Remarks  
 Signaling the event can cause an arbitrary number of contexts waiting on the event to become runnable.  
  
##  <a name="timeout_infinite"></a>  event::timeout_infinite Constant  
 Value indicating that a wait should never time out.  
  
```
static const unsigned int timeout_infinite = COOPERATIVE_TIMEOUT_INFINITE;
```  
  
##  <a name="wait"></a>  event::wait Method  
 Waits for the event to become signaled.  
  
```
size_t wait(unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### Parameters  
 `_Timeout`  
 Indicates the number of milliseconds before the wait times out. The value `COOPERATIVE_TIMEOUT_INFINITE` signifies that there is no timeout.  
  
### Return Value  
 If the wait was satisfied, the value `0` is returned; otherwise, the value `COOPERATIVE_WAIT_TIMEOUT` to indicate that the wait timed out without the event becoming signaled.  
  
> [!IMPORTANT]
>  In a [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)] app, do not call `wait` on the ASTA thread because this call can block the current thread and can cause the app to become unresponsive.  
  
##  <a name="wait_for_multiple"></a>  event::wait_for_multiple Method  
 Waits for multiple events to become signaled.  
  
```
static size_t __cdecl wait_for_multiple(
    _In_reads_(count) event** _PPEvents,
    size_t count,
    bool _FWaitAll,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### Parameters  
 `_PPEvents`  
 An array of events to wait on. The number of events within the array is indicated by the `count` parameter.  
  
 `count`  
 The count of events within the array supplied in the `_PPEvents` parameter.  
  
 `_FWaitAll`  
 If set to the value `true`, the parameter specifies that all events within the array supplied in the `_PPEvents` parameter must become signaled in order to satisfy the wait. If set to the value `false`, it specifies that any event within the array supplied in the `_PPEvents` parameter becoming signaled will satisfy the wait.  
  
 `_Timeout`  
 Indicates the number of milliseconds before the wait times out. The value `COOPERATIVE_TIMEOUT_INFINITE` signifies that there is no timeout.  
  
### Return Value  
 If the wait was satisfied, the index within the array supplied in the `_PPEvents` parameter which satisfied the wait condition; otherwise, the value `COOPERATIVE_WAIT_TIMEOUT` to indicate that the wait timed out without the condition being satisfied.  
  
### Remarks  
 If the parameter `_FWaitAll` is set to the value `true` to indicate that all events must become signaled to satisfy the wait, the index returned by the function carries no special significance other than the fact that it is not the value `COOPERATIVE_WAIT_TIMEOUT`.  
  
> [!IMPORTANT]
>  In a [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)] app, do not call `wait_for_multiple` on the ASTA thread because this call can block the current thread and can cause the app to become unresponsive.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
