---
title: "RaiseException Function"
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
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
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
# RaiseException Function
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
inline void __declspec(noreturn)   RaiseException(  
      HRESULT hr,   
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);  
```  
  
#### Parameters  
 `hr`  
 The exception code of the exception being raised; that is, the HRESULT of a failed operation.  
  
 `dwExceptionFlags`  
 A flag that indicates a continuable exception (the flag value is zero), or noncontinuable exception (flag value is nonzero). By default, the exception is noncontinuable.  
  
## Remarks  
 Raises an exception in the calling thread.  
  
 For more information, see the Windows **RaiseException** function.  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)