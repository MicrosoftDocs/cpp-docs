---
title: "EventTargetArray::AddTail Method | Microsoft Docs"
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
  - "event/Microsoft::WRL::Details::EventTargetArray::AddTail"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddTail method"
ms.assetid: d0fafab9-049c-40e0-a40c-d126c9ee63e6
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# EventTargetArray::AddTail Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [EventTargetArray::AddTail Method](https://docs.microsoft.com/cpp/windows/eventtargetarray-addtail-method).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
void AddTail(  
   _In_ IUnknown* element  
);  
```  
  
#### Parameters  
 `element`  
 Pointer to the event handler to append.  
  
## Remarks  
 Appends the specified event handler to the end of the internal array of event handlers.  
  
 AddTail() is intended to be used internally by only the EventSource class.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [EventTargetArray Class](../windows/eventtargetarray-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

