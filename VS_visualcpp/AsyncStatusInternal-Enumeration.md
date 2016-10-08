---
title: "AsyncStatusInternal Enumeration"
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
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
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
# AsyncStatusInternal Enumeration
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
enum AsyncStatusInternal;  
```  
  
## Remarks  
 Specifies a mapping between internal enumerations for the state of asynchronous operations and the **Windows::Foundation::AsyncStatus** enumeration.  
  
## Members  
 `_Created`  
 Equivalent to ::Windows::Foundation::AsyncStatus::Created  
  
 `_Started`  
 Equivalent to ::Windows::Foundation::AsyncStatus::Started  
  
 `_Completed`  
 Equivalent to ::Windows::Foundation::AsyncStatus::Completed  
  
 `_Cancelled`  
 Equivalent to ::Windows::Foundation::AsyncStatus::Cancelled  
  
 `_Error`  
 Equivalent to ::Windows::Foundation::AsyncStatus::Error  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)