---
title: "Event Handling Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, global functions"
  - "global functions, event handling"
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Event Handling Global Functions
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Event Handling Global Functions](https://docs.microsoft.com/cpp/atl/reference/event-handling-global-functions).  
  
  
This function provides an event handler.  
  
> [!IMPORTANT]
>  The function listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
|||  
|-|-|  
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|Waits for an object to be signaled, meanwhile dispatching window messages as needed.|  
  
##  <a name="atlwaitwithmessageloop"></a>  AtlWaitWithMessageLoop  
 Waits for the object to be signaled, meanwhile dispatching window messages as needed.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```  
  
### Parameters  
 `hEvent`  
 [in] The handle of the object to wait for.  
  
### Return Value  
 Returns **TRUE** if the object has been signaled.  
  
### Remarks  
 This is useful if you want to wait for an object's event to happen and be notified of it happening, but allow window messages to be dispatched while waiting.  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)






