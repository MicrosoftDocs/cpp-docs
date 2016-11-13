---
title: "___setlc_active_func, ___unguarded_readlc_active_add_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "___setlc_active_func"
  - "___unguarded_readlc_active_add_func"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "___unguarded_readlc_active_add_func"
  - "___setlc_active_func"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "___setlc_active_func"
  - "___unguarded_readlc_active_add_func"
ms.assetid: 605ec4e3-81e5-4ece-935a-f434768cc702
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# ___setlc_active_func, ___unguarded_readlc_active_add_func
OBSOLETE. The CRT exports these internal functions only to preserve binary compatibility.  
  
## Syntax  
  
```cpp  
int ___setlc_active_func(void);  
int * ___unguarded_readlc_active_add_func(void);  
```  
  
## Return Value  
 The value returned is not significant.  
  
## Remarks  
 Although the internal CRT functions `___setlc_active_func` and `___unguarded_readlc_active_add_func` are obsolete and no longer used, they are exported by the CRT library to preserve binary compatibility. The original purpose of `___setlc_active_func` was to return the number of currently active calls to the `setlocale` function. The original purpose of `___unguarded_readlc_active_add_func` was to return the number of functions that referenced the locale without locking it.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`___setlc_active_func`, `___unguarded_readlc_active_add_func`|none|  
  
## See Also  
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)