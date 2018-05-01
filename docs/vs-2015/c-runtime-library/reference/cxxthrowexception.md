---
title: "_CxxThrowException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_CxxThrowException"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "CxxThrowException"
  - "_CxxThrowException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CxxThrowException function"
  - "CxxThrowException function"
ms.assetid: 0b90bef5-b7d2-46e0-88e2-59e531e01a4d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CxxThrowException
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_CxxThrowException](https://docs.microsoft.com/cpp/c-runtime-library/reference/cxxthrowexception).  
  
Builds the exception record and calls the runtime environment to start processing the exception.  
  
## Syntax  
  
```  
extern "C" void __stdcall _CxxThrowException(  
   void* pExceptionObject  
   _ThrowInfo* pThrowInfo  
);  
```  
  
#### Parameters  
 [in] `pExceptionObject`  
 The object that generated the exception.  
  
 [in] `pThrowInfo`  
 The information that is required to process the exception.  
  
## Remarks  
 This method is included in a compiler-only file that the compiler uses to process exceptions. Do not call the method directly from your code.  
  
## Requirements  
 **Source:** Throw.cpp  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)





