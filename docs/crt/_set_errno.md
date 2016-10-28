---
title: "_set_errno"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_set_errno"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "set_errno"
  - "_set_errno"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "errno global variable"
  - "set_errno function"
  - "_set_errno function"
ms.assetid: d338914a-1894-4cf3-ae45-f2c4eb26590b
caps.latest.revision: 13
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
# _set_errno
Set the value of the `errno` global variable.  
  
## Syntax  
  
```  
errno_t _set_errno(   
   int value   
);  
```  
  
#### Parameters  
 [in] `value`  
 The new value of `errno`.  
  
## Return Value  
 Returns zero if successful.  
  
## Remarks  
 Possible values are defined in Errno.h. Also, see [errno Constants](../crt/errno-constants.md).  
  
## Example  
  
```  
// crt_set_errno.c  
#include <stdio.h>  
#include <errno.h>  
  
int main()  
{  
   _set_errno( EILSEQ );  
   perror( "Oops" );  
}  
```  
  
 **Oops: Illegal byte sequence**   
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_set_errno`|\<stdlib.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [_get_errno](../crt/_get_errno.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md)