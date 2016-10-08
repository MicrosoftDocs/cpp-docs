---
title: "AsyncBase::TryTransitionToError Method"
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
ms.assetid: f6d11c25-1ce3-43f9-af1c-97c4dc0f6f0f
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
# AsyncBase::TryTransitionToError Method
Indicates whether the specified error code can modify the internal error state.  
  
## Syntax  
  
```  
bool TryTransitionToError(  
   const HRESULT error  
);  
```  
  
#### Parameters  
 `error`  
 An error HRESULT.  
  
## Return Value  
 `true` if the internal error state was changed; otherwise, `false`.  
  
## Remarks  
 This operation modifies the error state only if the error state is already set to S_OK. This operation has no effect if the error state is already error, cancelled, completed, or closed.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)