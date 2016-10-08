---
title: "EventTargetArray::AddTail Method"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: d0fafab9-049c-40e0-a40c-d126c9ee63e6
caps.latest.revision: 5
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
# EventTargetArray::AddTail Method
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
 [EventTargetArray Class](../VS_visualcpp/EventTargetArray-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)