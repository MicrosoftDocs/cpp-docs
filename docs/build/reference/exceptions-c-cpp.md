---
title: "Exceptions (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["ERROR_MOD_NOT_FOUND", "vcppException", "ERROR_SEVERITY_ERROR"]
dev_langs: ["C++"]
helpviewer_keywords: ["vcppException", "C++ exception handling, delayed loading of DLLs", "delayed loading of DLLs, exceptions", "ERROR_SEVERITY_ERROR exception", "ERROR_MOD_NOT_FOUND exception"]
ms.assetid: c03be05d-1c39-4f35-84cf-00c9af3bae9a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Exceptions (C/C++)
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
  
 The exception codes thrown are the standard VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) and VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND) values. The exception passes a pointer to a **DelayLoadInfo** structure in the LPDWORD value that can be retrieved by **GetExceptionInformation** in the [EXCEPTION_RECORD](/windows/desktop/api/winnt/ns-winnt-_exception_record) structure, ExceptionInformation[0] field.  
  
 Additionally, if the incorrect bits are set in the grAttrs field, the exception ERROR_INVALID_PARAMETER is thrown. This exception is, for all intents and purposes, fatal.  
  
 See [Structure and Constant Definitions](../../build/reference/structure-and-constant-definitions.md) for more information.  
  
## See Also  
 [Error Handling and Notification](../../build/reference/error-handling-and-notification.md)