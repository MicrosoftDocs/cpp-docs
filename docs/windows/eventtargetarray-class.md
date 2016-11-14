---
title: "EventTargetArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::EventTargetArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EventTargetArray class"
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
caps.latest.revision: 7
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
# EventTargetArray Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
class EventTargetArray : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<ClassicCom>, IUnknown>;  
```  
  
## Remarks  
 Represents an array of event handlers.  
  
 The event handlers that are associated with an [EventSource](../windows/eventsource-class.md) object are stored in a protected EventTargetArray data member.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[EventTargetArray::EventTargetArray Constructor](../windows/eventtargetarray-eventtargetarray-constructor.md)|Initializes a new instance of the EventTargetArray class.|  
|[EventTargetArray::~EventTargetArray Destructor](../windows/eventtargetarray-tilde-eventtargetarray-destructor.md)|Deinitializes the current EventTargetArray class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[EventTargetArray::AddTail Method](../windows/eventtargetarray-addtail-method.md)|Appends the specified event handler to the end of the internal array of event handlers.|  
|[EventTargetArray::Begin Method](../windows/eventtargetarray-begin-method.md)|Gets the address of the first element in the internal array of event handlers.|  
|[EventTargetArray::End Method](../windows/eventtargetarray-end-method.md)|Gets the address of the last element in the internal array of event handlers.|  
|[EventTargetArray::Length Method](../windows/eventtargetarray-length-method.md)|Gets the current number of elements in the internal array of event handlers.|  
  
## Inheritance Hierarchy  
 `EventTargetArray`  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)