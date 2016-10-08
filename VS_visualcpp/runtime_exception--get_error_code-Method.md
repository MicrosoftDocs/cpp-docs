---
title: "runtime_exception::get_error_code Method"
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
ms.topic: article
ms.assetid: b383ddce-aacd-45ed-8ecf-f83d89f37df7
caps.latest.revision: 9
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
# runtime_exception::get_error_code Method
Returns the error code that caused the exception.  
  
## Syntax  
  
```  
HRESULT get_error_code() const throw();  
```  
  
## Return Value  
 The HRESULT of error that caused the exception.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [runtime_exception Class](../VS_visualcpp/runtime_exception-Class.md)