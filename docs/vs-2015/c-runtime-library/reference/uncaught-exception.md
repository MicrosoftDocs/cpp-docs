---
title: "__uncaught_exception | Microsoft Docs"
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
  - "__uncaught_exception"
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
  - "__uncaught_exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__uncaught_exception"
ms.assetid: 4d9b75c6-c9c7-4876-b761-ea9ab1925e96
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __uncaught_exception
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [__uncaught_exception](https://docs.microsoft.com/cpp/c-runtime-library/reference/uncaught-exception).  
  
Indicates whether one or more exceptions have been thrown, but have not yet been handled by the corresponding `catch` block of a [try-catch](../../cpp/try-throw-and-catch-statements-cpp.md) statement.  
  
## Syntax  
  
```cpp  
bool __uncaught_exception(  
   );  
```  
  
## Return Value  
 `true` from the time an exception is thrown in a `try` block until the matching `catch` block is initialized; otherwise, `false`.  
  
## Remarks  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__uncaught_exception|eh.h|  
  
## See Also  
 [try, throw, and catch Statements (C++)](../../cpp/try-throw-and-catch-statements-cpp.md)





