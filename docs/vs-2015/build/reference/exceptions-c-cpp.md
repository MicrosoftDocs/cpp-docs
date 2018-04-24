---
title: "Exceptions (C-C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ERROR_MOD_NOT_FOUND"
  - "vcppException"
  - "ERROR_SEVERITY_ERROR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vcppException"
  - "C++ exception handling, delayed loading of DLLs"
  - "delayed loading of DLLs, exceptions"
  - "ERROR_SEVERITY_ERROR exception"
  - "ERROR_MOD_NOT_FOUND exception"
ms.assetid: c03be05d-1c39-4f35-84cf-00c9af3bae9a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Exceptions (C/C++)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Exceptions (C/C++)](https://docs.microsoft.com/cpp/build/reference/exceptions-c-cpp).  
  
  
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
  
 See [Structure and Constant Definitions](../../build/reference/structure-and-constant-definitions.md) for more information.  
  
## See Also  
 [Error Handling and Notification](../../build/reference/error-handling-and-notification.md)

