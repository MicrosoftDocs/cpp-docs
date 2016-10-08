---
title: "AsyncBase::ContinueAsyncOperation Method"
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
ms.assetid: ce38181d-2fc3-4579-b0ce-237a3c7648bc
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
# AsyncBase::ContinueAsyncOperation Method
Determines whether the asynchronous operation should continue processing or should halt.  
  
## Syntax  
  
```  
inline bool ContinueAsyncOperation();  
```  
  
## Return Value  
 `true` if the current state of the asynchronous operation is *started*, which means the operation should continue. Otherwise, `false`, which means the operation should halt.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)