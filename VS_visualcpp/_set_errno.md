---
title: "_set_errno"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _set_errno
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
ms.assetid: d338914a-1894-4cf3-ae45-f2c4eb26590b
caps.latest.revision: 13
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
 Possible values are defined in Errno.h. Also, see [errno Constants](../VS_visualcpp/errno-Constants.md).  
  
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
|`_set_errno`|<stdlib.h>|<errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [_get_errno](../VS_visualcpp/_get_errno.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md)