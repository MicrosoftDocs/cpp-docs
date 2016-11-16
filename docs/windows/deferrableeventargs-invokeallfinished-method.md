---
title: "DeferrableEventArgs::InvokeAllFinished Method | Microsoft Docs"
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
ms.assetid: 86b45205-3edb-4134-9cd0-ed7a7b4c3b1a
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
# DeferrableEventArgs::InvokeAllFinished Method
Called to indicate that all processing to handle a deferred event is complete.  
  
## Syntax  
  
```cpp  
void InvokeAllFinished()  
```  
  
## Remarks  
 You should call this method after the event source calls [InvokeAll](../windows/eventsource-invokeall-method.md). Calling this method prevents further deferrals from being taken and forces the completion handler to execute if no deferrals were taken.  
  
 For a code example, see [DeferrableEventArgs Class](../windows/deferrableeventargs-class.md).  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [DeferrableEventArgs Class](../windows/deferrableeventargs-class.md)   
 [EventSource::InvokeAll Method](../windows/eventsource-invokeall-method.md)