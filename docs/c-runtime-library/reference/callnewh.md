---
title: "_callnewh | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_callnewh"
apilocation: 
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_callnewh"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_callnewh"
ms.assetid: 4dcb73e9-6384-4d12-a973-a8807d4de7a8
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
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
# _callnewh
Calls the currently installed *new handler*.  
  
## Syntax  
  
```cpp  
int _callnewh(  
   size_t size  
   )  
```  
  
#### Parameters  
 `size`  
 The amount of memory that the [new operator](../../cpp/new-operator-cpp.md) tried to allocate.  
  
## Return Value  
  
|Value|Description|  
|-----------|-----------------|  
|0|Failure: Either no new handler is installed or no new handler is active.|  
|1|Success: The new handler is installed and active. The memory allocation can be retried.|  
  
## Exceptions  
 This function throws [bad_alloc](../../standard-library/bad-alloc-class.md) if the *new handler* can’t be located.  
  
## Remarks  
 The *new handler* is called if the [new operator](../../cpp/new-operator-cpp.md) fails to successfully allocate memory. The new handler might then initiate some appropriate action, such as freeing memory so that subsequent allocations succeed.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|_callnewh|internal.h|  
  
## See Also  
 [_set_new_handler](../../c-runtime-library/reference/set-new-handler.md)   
 [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md)