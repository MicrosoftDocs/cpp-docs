---
title: "__p__commode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__p__commode"
apilocation: 
  - "msvcr110.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__p__commode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__p__commode"
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
caps.latest.revision: 2
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
# __p__commode
Points to the `_commode` global variable, which specifies the default *file commit mode* for file I/O operations.  
  
## Syntax  
  
```cpp  
int * __p__commode(  
   );  
```  
  
## Return Value  
 Pointer to the `_commode` global variable.  
  
## Remarks  
 The `__p__commode` function is for internal use only, and should not be called from user code.  
  
 File commit mode specifies when critical data is written to disk. For more information, see [fflush](../c-runtime-library/reference/fflush.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__p\__commode|internal.h|