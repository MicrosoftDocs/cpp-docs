---
title: "Event Handling Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["atlbase/ATL::AtlWaitWithMessageLoop"]
dev_langs: ["C++"]
helpviewer_keywords: ["event handling, global functions", "global functions, event handling"]
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Event Handling Global Functions
This function provides an event handler.  
  
> [!IMPORTANT]
>  The function listed in the following table cannot be used in applications that execute in the Windows Runtime.  
  
|||  
|-|-|  
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|Waits for an object to be signaled, meanwhile dispatching window messages as needed.|  

## Requirements  
 **Header:** atlbase.h  

##  <a name="atlwaitwithmessageloop"></a>  AtlWaitWithMessageLoop  
 Waits for the object to be signaled, meanwhile dispatching window messages as needed.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the Windows Runtime.  
  
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
