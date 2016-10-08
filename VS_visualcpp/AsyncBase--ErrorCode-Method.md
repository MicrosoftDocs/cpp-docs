---
title: "AsyncBase::ErrorCode Method"
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
ms.assetid: 3f5f0f69-d60a-4a67-8cc6-a55fdc89a192
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
# AsyncBase::ErrorCode Method
Retrieves the error code for the current asynchronous operation.  
  
## Syntax  
  
```  
inline void ErrorCode(  
   HRESULT *error  
);  
```  
  
#### Parameters  
 `error`  
 The location where this operation stores the current error code.  
  
## Remarks  
 This operation is thread-safe.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)