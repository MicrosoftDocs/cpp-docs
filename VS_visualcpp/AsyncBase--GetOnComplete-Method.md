---
title: "AsyncBase::GetOnComplete Method"
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
ms.assetid: f06ae02d-9a88-41d2-b749-bdc1a7ff8748
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
# AsyncBase::GetOnComplete Method
Copies the address of the current completion event handler to the specified variable.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetOnComplete  
)(TComplete** completeHandler);  
```  
  
#### Parameters  
 `completeHandler`  
 The location where the address of the current completion event handler is stored.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)