---
title: "_findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64"
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
  - _wfindnext
  - _findnext
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
  - api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
ms.assetid: 75d97188-5add-4698-a46c-4c492378f0f8
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64
Find the next name, if any, that matches the `filespec` argument in a previous call to [_findfirst](../VS_visualcpp/_findfirst--_findfirst32--_findfirst32i64--_findfirst64--_findfirst64i32--_findfirsti64--_wfindfirst--_wfindfirst32--_wfindfirst32i64--_wfindfirst64--_wfindfirst64i32--_wfindfirsti64.md), and then alter the `fileinfo` structure contents accordingly.  
  
## Syntax  
  
```  
int _findnext(  
   intptr_t handle,  
   struct _finddata_t *fileinfo   
);  
int _findnext32(  
   intptr_t handle,  
   struct _finddata32_t *fileinfo   
);  
int _findnext64(  
   intptr_t handle,  
   struct __finddata64_t *fileinfo   
);  
int _findnexti64(  
   intptr_t handle,  
   struct __finddatai64_t *fileinfo   
);  
int _findnext32i64(  
   intptr_t handle,  
   struct _finddata32i64_t *fileinfo   
);  
int _findnext64i32(  
   intptr_t handle,  
   struct _finddata64i32_t *fileinfo   
);  
int _wfindnext(  
   intptr_t handle,  
   struct _wfinddata_t *fileinfo   
);  
int _wfindnext32(  
   intptr_t handle,  
   struct _wfinddata32_t *fileinfo   
);  
int _wfindnext64(  
   intptr_t handle,  
   struct _wfinddata64_t *fileinfo   
);  
int _wfindnexti64(  
   intptr_t handle,  
   struct _wfinddatai64_t *fileinfo   
);  
int _wfindnext32i64(  
   intptr_t handle,  
   struct _wfinddatai64_t *fileinfo   
);  
int _wfindnext64i32(  
   intptr_t handle,  
   struct _wfinddata64i32_t *fileinfo   
);  
```  
  
#### Parameters  
 `handle`  
 Search handle returned by a previous call to `_findfirst`.  
  
 `fileinfo`  
 File information buffer.  
  
## Return Value  
 If successful, returns 0. Otherwise, returns –1 and sets `errno` to a value indicating the nature of the failure. Possible error codes are shown in the following table.  
  
 `EINVAL`  
 Invalid parameter: `fileinfo` was `NULL`. Or, the operating system returned an unexpected error.  
  
 `ENOENT`  
 No more matching files could be found.  
  
 `ENOMEM`  
 Not enough memory or the file name's length exceeded `MAX_PATH`.  
  
 If an invalid parameter is passed in, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md).  
  
## Remarks  
 You must call [_findclose](../VS_visualcpp/_findclose.md) after you are finished using either the `_findfirst` or `_findnext` function (or any variants). This frees up resources used by these functions in your application.  
  
 The variations of these functions with the `w` prefix are wide-character versions; otherwise, they are identical to the corresponding single-byte functions.  
  
 Variations of these functions support 32-bit or 64-bit time types and 32-bit or 64-bit file sizes. The first numerical suffix (`32` or `64`) indicates the size of the time type used; the second suffix is either `i32` or `i64`, indicating whether the file size is represented as a 32-bit or 64-bit integer. For information about which versions support 32-bit and 64-bit time types and file sizes, see the following table. The variations that use a 64-bit time type allow file-creation dates to be expressed up through 23:59:59, December 31, 3000, UTC; whereas those using 32-bit time types only represent dates through 23:59:59 January 18, 2038, UTC. Midnight, January 1, 1970, is the lower bound of the date range for all these functions.  
  
 Unless you have a specific reason to use the versions that specify the time size explicitly, use `_findnext` or `_wfindnext` or, if you need to support file sizes greater than 3 GB, use `_findnexti64` or `_wfindnexti64`. All these functions use the 64-bit time type. In previous versions, these functions used a 32-bit time type. If this is a breaking change for an application, you might define `_USE_32BIT_TIME_T` to get the old behavior. If `_USE_32BIT_TIME_T` is defined, `_findnext`, `_finnexti64` and their corresponding Unicode versions use a 32-bit time.  
  
### Time Type and File Length Type Variations of _findnext  
  
|Functions|`_USE_32BIT_TIME_T` defined?|Time type|File length type|  
|---------------|----------------------------------|---------------|----------------------|  
|`_findnext`, `_wfindnext`|Not defined|64-bit|32-bit|  
|`_findnext`, `_wfindnext`|Defined|32-bit|32-bit|  
|`_findnext32`, `_wfindnext32`|Not affected by the macro definition|32-bit|32-bit|  
|`_findnext64`, `_wfindnext64`|Not affected by the macro definition|64-bit|64-bit|  
|`_findnexti64`, `_wfindnexti64`|Not defined|64-bit|64-bit|  
|`_findnexti64`, `_wfindnexti64`|Defined|32-bit|64-bit|  
|`_findnext32i64`, `_wfindnext32i64`|Not affected by the macro definition|32-bit|64-bit|  
|`_findnext64i32`, `_wfindnext64i32`|Not affected by the macro definition|64-bit|32-bit|  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfindnext`|`_findnext`|`_findnext`|`_wfindnext`|  
|`_tfindnext32`|`_findnext32`|`_findnext32`|`_wfindnext32`|  
|`_tfindnext64`|`_findnext64`|`_findnext64`|`_wfindnext64`|  
|`_tfindnexti64`|`_findnexti64`|`_findnexti64`|`_wfindnexti64`|  
|`_tfindnext32i64`|`_findnext32i64`|`_findnext32i64`|`_wfindnext32i64`|  
|`_tfindnext64i32`|`_findnext64i32`|`_findnext64i32`|`_wfindnext64i32`|  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_findnext`|<io.h>|  
|`_findnext32`|<io.h>|  
|`_findnext64`|<io.h>|  
|`_findnexti64`|<io.h>|  
|`_findnext32i64`|<io.h>|  
|`_findnext64i32`|<io.h>|  
|`_wfindnext`|<io.h> or <wchar.h>|  
|`_wfindnext32`|<io.h> or <wchar.h>|  
|`_wfindnext64`|<io.h> or <wchar.h>|  
|`_wfindnexti64`|<io.h> or <wchar.h>|  
|`_wfindnext32i64`|<io.h> or <wchar.h>|  
|`_wfindnext64i32`|<io.h> or <wchar.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [System Calls](../VS_visualcpp/System-Calls.md)   
 [Filename Search Functions](../VS_visualcpp/Filename-Search-Functions.md)