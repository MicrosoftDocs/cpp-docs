---
title: "EventSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EventSource class"
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# EventSource Class
Represents an event. EventSource member functions add, remove, and invoke event handlers.  
  
## Syntax  
  
```  
template<  
   typename TDelegateInterface  
>  
class EventSource;  
```  
  
#### Parameters  
 `TDelegateInterface`  
 The interface to a delegate that represents an event handler.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[EventSource::EventSource Constructor](../windows/eventsource-eventsource-constructor.md)|Initializes a new instance of the EventSource class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[EventSource::Add Method](../windows/eventsource-add-method.md)|Appends the event handler represented by the specified delegate interface to the set of event handlers for the current EventSource object.|  
|[EventSource::GetSize Method](../windows/eventsource-getsize-method.md)|Retrieves the number of event handlers associated with the current EventSource object|  
|[EventSource::InvokeAll Method](../windows/eventsource-invokeall-method.md)|Calls each event handler associated with the current EventSource object using the specified argument types and arguments.|  
|[EventSource::Remove Method](../windows/eventsource-remove-method.md)|Deletes the event handler represented by the specified event registration token from the set of event handlers associated with the current EventSource object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[EventSource::addRemoveLock_ Data Member](../windows/eventsource-addremovelock-data-member.md)|Synchronizes access to the [targets_](../windows/eventsource-targets-data-member.md) array when adding, removing, or invoking event handlers.|  
|[EventSource::targets_ Data Member](../windows/eventsource-targets-data-member.md)|An array of one or more event handlers.|  
|[EventSource::targetsPointerLock_ Data Member](../windows/eventsource-targetspointerlock-data-member.md)|Synchronizes access to internal data members even while event handlers for this EventSource are being added, removed, or invoked.|  
  
## Inheritance Hierarchy  
 `EventSource`  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)