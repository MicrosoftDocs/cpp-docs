---
title: "runtime_exception::runtime_exception Constructor"
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
ms.assetid: 192dce0f-36e4-40e8-8f1b-42910b89bb6b
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# runtime_exception::runtime_exception Constructor
Initializes a new instance of the [runtime_exception](../VS_visualcpp/runtime_exception-Class.md) class.  
  
## Syntax  
  
```  
runtime_exception(  
    const char * _Message,  
    HRESULT _Hresult ) throw();  
  
explicit runtime_exception(  
    HRESULT _Hresult ) throw();  
  
runtime_exception(  
    const runtime_exception & _Other ) throw();  
```  
  
#### Parameters  
 `_Message`  
 A description of the error that caused the exception.  
  
 `_Hresult`  
 The HRESULT of error that caused the exception.  
  
 `_Other`  
 The `runtime_exception` object to copy.  
  
## Return Value  
 The `runtime_exception` object.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [runtime_exception Class](../VS_visualcpp/runtime_exception-Class.md)