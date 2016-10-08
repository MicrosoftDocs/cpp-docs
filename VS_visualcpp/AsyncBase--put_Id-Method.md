---
title: "AsyncBase::put_Id Method"
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
ms.assetid: aebad85f-4774-42de-b625-a9cf5f65cb4e
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
# AsyncBase::put_Id Method
Sets the handle of the asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   put_Id  
)(const unsigned int id);  
```  
  
#### Parameters  
 `id`  
 A nonzero handle.  
  
## Return Value  
 S_OK if successful; otherwise, E_INVALIDARG or E_ILLEGAL_METHOD_CALL.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)