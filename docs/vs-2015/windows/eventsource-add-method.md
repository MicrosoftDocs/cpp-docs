---
title: "EventSource::Add Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource::Add"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Add method"
ms.assetid: 8bded85b-929e-4425-a464-e5de67bb774c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# EventSource::Add Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [EventSource::Add Method](https://docs.microsoft.com/cpp/windows/eventsource-add-method).  
  
  
Appends the event handler represented by the specified delegate interface to the set of event handlers for the current EventSource object.  
  
## Syntax  
  
```  
HRESULT Add(  
   _In_ TDelegateInterface* delegateInterface,  
   _Out_ EventRegistrationToken* token  
);  
```  
  
#### Parameters  
 `delegateInterface`  
 The interface to a delegate object, which represents an event handler.  
  
 `token`  
 When this operation completes, a handle that represents the event. Use this token as the parameter to the [Remove()](../windows/eventsource-remove-method.md) method to discard the event handler.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [EventSource Class](../windows/eventsource-class.md)

