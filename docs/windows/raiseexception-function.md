---
title: "RaiseException Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::RaiseException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RaiseException function"
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)