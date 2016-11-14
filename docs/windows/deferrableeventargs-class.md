---
title: "DeferrableEventArgs Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
caps.latest.revision: 3
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
# DeferrableEventArgs Class
A template class used for the event argument types for deferrals.  
  
## Syntax  
  
```cpp  
template <  
typename TEventArgsInterface,  
typename TEventArgsClass  
>  
class DeferrableEventArgs : public TEventArgsInterface  
  
```  
  
#### Parameters  
 `TEventArgsInterface`  
 The interface type that declares the arguments for a deferred event.  
  
 `TEventArgsClass`  
 The class that implements `TEventArgsInterface`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[DeferrableEventArgs::GetDeferral Method](../windows/deferrableeventargs-getdeferral-method.md)|Gets a reference to the [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) object which represents a deferred event.|  
|[DeferrableEventArgs::InvokeAllFinished Method](../windows/deferrableeventargs-invokeallfinished-method.md)|Called to indicate that all processing to handle a deferred event is complete.|  
  
## Remarks  
 Instances of this class are passed to event handlers for deferred events. The template parameters represent an interface that defines the details of the event arguments for a specific type of deferred event, and a class that implements that interface.  
  
 The class appears as the first argument to an event handler for a deferred event. You can call the [GetDeferral](../windows/deferrableeventargs-getdeferral-method.md) method to get the [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) object from which you can get all the information about the deferred event. After completing the event handling, you should call Complete on the Deferral object. You should then call [InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md) at the end of the event handler method, which ensures that the completion of all deferred events is communicated properly.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)