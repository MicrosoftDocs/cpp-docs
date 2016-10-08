---
title: "AsyncBase::CurrentStatus Method"
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
ms.assetid: 26ee4c4a-6525-4a5f-b49c-3ca40c365eb6
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
# AsyncBase::CurrentStatus Method
Retrieves the status of the current asynchronous operation.  
  
## Syntax  
  
```  
inline void CurrentStatus(  
   Details::AsyncStatusInternal *status  
);  
```  
  
#### Parameters  
 `status`  
 The location where this operation stores the current status.  
  
## Remarks  
 This operation is thread-safe.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)   
 [AsyncStatusInternal Enumeration](../VS_visualcpp/AsyncStatusInternal-Enumeration.md)