---
title: "_fullpath, _wfullpath | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fullpath"
  - "_wfullpath"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wfullpath"
  - "fullpath"
  - "_wfullpath"
  - "_fullpath"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wfullpath function"
  - "relative file paths"
  - "absolute paths"
  - "wfullpath function"
  - "_fullpath function"
  - "fullpath function"
ms.assetid: 4161ec17-0d22-45dd-b07d-0222553afae9
caps.latest.revision: 18
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
# _fullpath, _wfullpath
Creates an absolute or full path name for the specified relative path name.  
  
## Syntax  
  
```  
char *_fullpath(   
   char *absPath,  
   const char *relPath,  
   size_t maxLength   
);  
wchar_t *_wfullpath(   
   wchar_t *absPath,  
   const wchar_t *relPath,  
   size_t maxLength   
);  
```  
  
#### Parameters  
 `absPath`  
 Pointer to a buffer containing the absolute or full path name, or NULL.  
  
 `relPath`  
 Relative path name.  
  
 `maxLength`  
 Maximum length of the absolute path name buffer (`absPath`). This length is in bytes for `_fullpath` but in wide characters (`wchar_t`) for `_wfullpath`.  
  
## Return Value  
 Each of these functions returns a pointer to a buffer containing the absolute path name (`absPath`). If there is an error (for example, if the value passed in `relPath` includes a drive letter that is not valid or cannot be found, or if the length of the created absolute path name (`absPath`) is greater than `maxLength`), the function returns `NULL`.  
  
## Remarks  
 The `_fullpath` function expands the relative path name in `relPath` to its fully qualified or absolute path and stores this name in `absPath`*.* If `absPath` is NULL, `malloc` is used to allocate a buffer of sufficient length to hold the path name. It is the responsibility of the caller to free this buffer. A relative path name specifies a path to another location from the current location (such as the current working directory: "."). An absolute path name is the expansion of a relative path name that states the entire path required to reach the desired location from the root of the file system. Unlike `_makepath`, `_fullpath` can be used to obtain the absolute path name for relative paths (`relPath`) that include "./" or "../" in their names.  
  
 For example, to use C run-time routines, the application must include the header files that contain the declarations for the routines. Each header file include statement references the location of the file in a relative manner (from the application's working directory):  
  
```  
#include <stdlib.h>  
```  
  
 when the absolute path (actual file system location) of the file might be:  
  
```  
\\machine\shareName\msvcSrc\crt\headerFiles\stdlib.h  
```  
  
 `_fullpath` automatically handles multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use. `_wfullpath` is a wide-character version of `_fullpath`; the string arguments to `_wfullpath` are wide-character strings. `_wfullpath` and `_fullpath` behave identically except that `_wfullpath` does not handle multibyte-character strings.  
  
 If `_DEBUG` and `_CRTDBG_MAP_ALLOC` are both defined, calls to `_fullpath` and `_wfullpath` are replaced by calls to `_fullpath_dbg` and `_wfullpath_dbg` to allow for debugging memory allocations. For more information, see [_fullpath_dbg, _wfullpath_dbg](../../c-runtime-library/reference/fullpath-dbg-wfullpath-dbg.md).  
  
 This function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md), if `maxlen` is less than or equal to 0. If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `NULL`.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfullpath`|`_fullpath`|`_fullpath`|`_wfullpath`|  
  
 If the `absPath` buffer is `NULL`, `_fullpath` calls [malloc](../../c-runtime-library/reference/malloc.md) to allocate a buffer and ignores the `maxLength` argument. It is the caller's responsibility to deallocate this buffer (using [free](../../c-runtime-library/reference/free.md)) as appropriate. If the `relPath` argument specifies a disk drive, the current directory of this drive is combined with the path.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fullpath`|\<stdlib.h>|  
|`_wfullpath`|\<stdlib.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fullpath.c  
// This program demonstrates how _fullpath  
// creates a full path from a partial path.  
  
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>  
#include <direct.h>  
  
void PrintFullPath( char * partialPath )  
{  
   char full[_MAX_PATH];  
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )  
      printf( "Full path is: %s\n", full );  
   else  
      printf( "Invalid path\n" );  
}  
  
int main( void )  
{  
   PrintFullPath( "test" );  
   PrintFullPath( "\\test" );  
   PrintFullPath( "..\\test" );  
}  
```  
  
```Output  
Full path is: C:\Documents and Settings\user\My Documents\test  
Full path is: C:\test  
Full path is: C:\Documents and Settings\user\test  
```  
  
## .NET Framework Equivalent  
 [System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)  
  
## See Also  
 [File Handling](../../c-runtime-library/file-handling.md)   
 [_getcwd, _wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [_getdcwd, _wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md)   
 [_makepath, _wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)   
 [_splitpath, _wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)