---
title: "Exceptions (C-C++)"
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
H1: Exceptions (C/C++)
ms.assetid: c03be05d-1c39-4f35-84cf-00c9af3bae9a
caps.latest.revision: 8
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
# Exceptions (C-C++)
Two exception codes can be raised when failures are encountered:  
  
-   For a **LoadLibrary** failure  
  
-   For a **GetProcAddress** failure  
  
 Here is the exception information:  
  
```  
//  
// Exception information  
//  
#define FACILITY_VISUALCPP  ((LONG)0x6d)  
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)  
```  
  
 The exception codes thrown are the standard VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) and VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND) values. The exception passes a pointer to a **DelayLoadInfo** structure in the LPDWORD value that can be retrieved by **GetExceptionInformation** in the [EXCEPTION_RECORD](http://msdn.microsoft.com/library/windows/desktop/aa363082) structure, ExceptionInformation[0] field.  
  
 Additionally, if the incorrect bits are set in the grAttrs field, the exception ERROR_INVALID_PARAMETER is thrown. This exception is, for all intents and purposes, fatal.  
  
 See [Structure and Constant Definitions](../VS_visualcpp/Structure-and-Constant-Definitions.md) for more information.  
  
## See Also  
 [Error Handling and Notification](../VS_visualcpp/Error-Handling-and-Notification.md)