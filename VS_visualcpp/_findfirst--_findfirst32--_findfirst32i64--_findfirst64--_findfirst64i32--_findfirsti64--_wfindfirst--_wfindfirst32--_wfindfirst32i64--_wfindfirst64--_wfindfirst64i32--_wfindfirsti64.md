---
title: "_findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64"
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
  - _findfirst
  - _wfindfirst
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
ms.assetid: 9bb46d1a-b946-47de-845a-a0b109a33ead
caps.latest.revision: 25
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
# _findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64
Provide information about the first instance of a file name that matches the file specified in the `filespec` argument.  
  
## Syntax  
  
```  
intptr_t _findfirst(  
   const char *filespec,  
   struct _finddata_t *fileinfo   
);  
intptr_t _findfirst32(  
   const char *filespec,  
   struct _finddata32_t *fileinfo   
);  
intptr_t _findfirst64(  
   const char *filespec,  
   struct _finddata64_t *fileinfo   
);  
intptr_t _findfirsti64(  
   const char *filespec,  
   struct _finddatai64_t *fileinfo   
);  
intptr_t _findfirst32i64(  
   const char *filespec,  
   struct _finddata32i64_t *fileinfo   
);  
intptr_t _findfirst64i32(  
   const char *filespec,  
   struct _finddata64i32_t *fileinfo   
);  
intptr_t _wfindfirst(  
   const wchar_t *filespec,  
   struct _wfinddata_t *fileinfo   
);  
intptr_t _wfindfirst32(  
   const wchar_t *filespec,  
   struct _wfinddata32_t *fileinfo   
);  
intptr_t _wfindfirst64(  
   const wchar_t *filespec,  
   struct _wfinddata64_t *fileinfo   
);  
intptr_t _wfindfirsti64(  
   const wchar_t *filespec,  
   struct _wfinddatai64_t *fileinfo   
);  
intptr_t _wfindfirst32i64(  
   const wchar_t *filespec,  
   struct _wfinddata32i64_t *fileinfo   
);  
intptr_t _wfindfirst64i32(  
   const wchar_t *filespec,  
   struct _wfinddata64i32_t *fileinfo   
);  
```  
  
#### Parameters  
 `filespec`  
 Target file specification (can include wildcard characters).  
  
 `fileinfo`  
 File information buffer.  
  
## Return Value  
 If successful, `_findfirst` returns a unique search handle identifying the file or group of files that match the `filespec` specification, which can be used in a subsequent call to [_findnext](../VS_visualcpp/_findnext--_findnext32--_findnext32i64--_findnext64--_findnext64i32--_findnexti64--_wfindnext--_wfindnext32--_wfindnext32i64--_wfindnext64--_wfindnext64i32--_wfindnexti64.md) or to `_findclose`. Otherwise, `_findfirst` returns –1 and sets `errno` to one of the following values.  
  
 `EINVAL`  
 Invalid parameter: `filespec` or `fileinfo` was `NULL`. Or, the operating system returned an unexpected error.  
  
 `ENOENT`  
 File specification that could not be matched.  
  
 `ENOMEM`  
 Insufficient memory.  
  
 `EINVAL`  
 Invalid file name specification or the file name given was larger than `MAX_PATH`.  
  
 For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
 If an invalid parameter is passed in, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md).  
  
## Remarks  
 You must call [_findclose](../VS_visualcpp/_findclose.md) after you are finished with either the `_findfirst` or `_findnext` function (or any variants). This frees resources used by these functions in your application.  
  
 The variations of these functions that have the `w` prefix are wide-character versions; otherwise, they are identical to the corresponding single-byte functions.  
  
 Variations of these functions support 32-bit or 64-bit time types and 32-bit or 64-bit file sizes. The first numeric suffix (`32` or `64`) indicates the size of the time type; the second suffix is either `i32` or `i64`, and indicates whether the file size is represented as a 32-bit or 64-bit integer. For information about which versions support 32-bit and 64-bit time types and file sizes, see the following table. The `i32` or `i64` suffix is omitted if it is the same as the size of the time type, so `_findfirst64` also supports 64-bit file lengths and `_findfirst32` supports only 32-bit file lengths.  
  
 These functions use various forms of the `_finddata_t` structure for the `fileinfo` parameter. For more information about the structure, see [Filename Search Functions](../VS_visualcpp/Filename-Search-Functions.md).  
  
 The variations that use a 64-bit time type enable file-creation dates to be expressed up through 23:59:59, December 31, 3000, UTC. Those that use 32-bit time types represent dates only through 23:59:59 January 18, 2038, UTC. Midnight, January 1, 1970, is the lower bound of the date range for all these functions.  
  
 Unless you have a specific reason to use the versions that specify the time size explicitly, use `_findfirst` or `_wfindfirst` or, if you need to support file sizes larger than 3 GB, use `_findfirsti64` or `_wfindfirsti64`. All these functions use the 64-bit time type. In earlier versions, these functions used a 32-bit time type. If this is a breaking change for an application, you might define `_USE_32BIT_TIME_T` to revert to the old behavior. If `_USE_32BIT_TIME_T` is defined, `_findfirst`, `_finfirsti64`, and their corresponding Unicode versions use a 32-bit time.  
  
### Time Type and File Length Type Variations of _findfirst  
  
|Functions|`_USE_32BIT_TIME_T` defined?|Time type|File length type|  
|---------------|----------------------------------|---------------|----------------------|  
|`_findfirst`, `_wfindfirst`|Not defined|64-bit|32-bit|  
|`_findfirst`, `_wfindfirst`|Defined|32-bit|32-bit|  
|`_findfirst32`, `_wfindfirst32`|Not affected by the macro definition|32-bit|32-bit|  
|`_findfirst64`, `_wfindfirst64`|Not affected by the macro definition|64-bit|64-bit|  
|`_findfirsti64`, `_wfindfirsti64`|Not defined|64-bit|64-bit|  
|`_findfirsti64`, `_wfindfirsti64`|Defined|32-bit|64-bit|  
|`_findfirst32i64`, `_wfindfirst32i64`|Not affected by the macro definition|32-bit|64-bit|  
|`_findfirst64i32`, `_wfindfirst64i32`|Not affected by the macro definition|64-bit|32-bit|  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfindfirst`|`_findfirst`|`_findfirst`|`_wfindfirst`|  
|`_tfindfirst32`|`_findfirst32`|`_findfirst32`|`_wfindfirst32`|  
|`_tfindfirst64`|`_findfirst64`|`_findfirst64`|`_wfindfirst64`|  
|`_tfindfirsti64`|`_findfirsti64`|`_findfirsti64`|`_wfindfirsti64`|  
|`_tfindfirst32i64`|`_findfirst32i64`|`_findfirst32i64`|`_wfindfirst32i64`|  
|`_tfindfirst64i32`|`_findfirst64i32`|`_findfirst64i32`|`_wfindfirst64i32`|  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_findfirst`|<io.h>|  
|`_findfirst32`|<io.h>|  
|`_findfirst64`|<io.h>|  
|`_findfirsti64`|<io.h>|  
|`_findfirst32i64`|<io.h>|  
|`_findfirst64i32`|<io.h>|  
|`_wfindfirst`|<io.h> or <wchar.h>|  
|`_wfindfirst32`|<io.h> or <wchar.h>|  
|`_wfindfirst64`|<io.h> or <wchar.h>|  
|`_wfindfirsti64`|<io.h> or <wchar.h>|  
|`_wfindfirst32i64`|<io.h> or <wchar.h>|  
|`_wfindfirst64i32`|<io.h> or <wchar.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::IO::DirectoryInfo::GetFiles](https://msdn.microsoft.com/en-us/library/system.io.directoryinfo.getfiles.aspx)  
  
## See Also  
 [System Calls](../VS_visualcpp/System-Calls.md)   
 [Filename Search Functions](../VS_visualcpp/Filename-Search-Functions.md)