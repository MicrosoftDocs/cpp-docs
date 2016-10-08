---
title: "EventSource Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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
|[EventSource::EventSource Constructor](../VS_visualcpp/EventSource--EventSource-Constructor.md)|Initializes a new instance of the EventSource class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[EventSource::Add Method](../VS_visualcpp/EventSource--Add-Method.md)|Appends the event handler represented by the specified delegate interface to the set of event handlers for the current EventSource object.|  
|[EventSource::GetSize Method](../VS_visualcpp/EventSource--GetSize-Method.md)|Retrieves the number of event handlers associated with the current EventSource object|  
|[EventSource::InvokeAll Method](../VS_visualcpp/EventSource--InvokeAll-Method.md)|Calls each event handler associated with the current EventSource object using the specified argument types and arguments.|  
|[EventSource::Remove Method](../VS_visualcpp/EventSource--Remove-Method.md)|Deletes the event handler represented by the specified event registration token from the set of event handlers associated with the current EventSource object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[EventSource::addRemoveLock_ Data Member](../VS_visualcpp/EventSource--addRemoveLock_-Data-Member.md)|Synchronizes access to the [targets_](../VS_visualcpp/EventSource--targets_-Data-Member.md) array when adding, removing, or invoking event handlers.|  
|[EventSource::targets_ Data Member](../VS_visualcpp/EventSource--targets_-Data-Member.md)|An array of one or more event handlers.|  
|[EventSource::targetsPointerLock_ Data Member](../VS_visualcpp/EventSource--targetsPointerLock_-Data-Member.md)|Synchronizes access to internal data members even while event handlers for this EventSource are being added, removed, or invoked.|  
  
## Inheritance Hierarchy  
 `EventSource`  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)