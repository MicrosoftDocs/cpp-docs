---
title: "AgileEventSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "03/22/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::AgileEventSource", "event/Microsoft::WRL::InvokeModeOptions"]
dev_langs: ["C++"]
helpviewer_keywords: ["AgileEventSource class"]
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# AgileEventSource Class
Represents an agile event. Inherits from [EventSource](eventsource-class.md) and overrides the `Add` member function with an additional type parameter for specifying options for how to invoke the agile event.
  
## Syntax  
  
```  
template<typename TDelegateInterface, typename TEventSourceOptions = Microsoft::WRL::InvokeModeOptions<FireAll>>
class AgileEventSource
    : public Microsoft::WRL::EventSource<TDelegateInterface, TEventSourceOptions>;
```  
  
#### Parameters  
 `TDelegateInterface`  
 The interface to a delegate that represents an event handler.

 `TEventSourceOptions`
 An [InvokeModeOptions](invokemodeoptions.md) stucture whose invokeMode field is set to InvokeMode::StopOnFirstError or InvokeMode::FireAll. See [InvokeModeOptions](invokemodeoptions-structure.md) for more information.
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AgileEventSource::Add Method](../windows/eventsource-add-method.md)|Appends the agile event handler represented by the specified delegate interface to the set of event handlers for the current AgileEventSource object.|  

## Remarks

## Inheritance Hierarchy  
 `EventSource`  
 `AgileEventSource`
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)