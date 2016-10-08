---
title: "AsyncBase::get_ErrorCode Method"
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
ms.assetid: 50b4f8a2-9a21-4ea0-bb5d-7ff524d62aea
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
# AsyncBase::get_ErrorCode Method
Retrieves the error code for the current asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   get_ErrorCode  
)(HRESULT* errorCode) override;  
```  
  
#### Parameters  
 `errorCode`  
 The location where the current error code is stored.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL if the current asynchronous operation is closed.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)