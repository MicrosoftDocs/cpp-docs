---
title: "_searchenv_s, _wsearchenv_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wsearchenv_s"
  - "_searchenv_s"
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
  - "api-ms-win-crt-environment-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_searchenv_s"
  - "_wsearchenv_s"
  - "wsearchenv_s"
  - "searchenv_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tsearchenv_s function"
  - "files [C++], finding"
  - "buffers [C++], buffer overruns"
  - "environment paths, searching for files"
  - "wsearchenv_s function"
  - "searchenv_s function"
  - "_tsearchenv_s function"
  - "buffer overruns"
  - "buffers [C++], avoiding overruns"
  - "_wsearchenv_s function"
  - "_searchenv_s function"
  - "environment paths"
ms.assetid: 47f9fc29-250e-4c09-b52e-9e9f0ef395ca
caps.latest.revision: 32
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
# _searchenv_s, _wsearchenv_s
Searches for a file by using environment paths. These versions of [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t _searchenv_s(  
   const char *filename,  
   const char *varname,  
   char *pathname,  
   size_t numberOfElements  
);  
errno_t _wsearchenv_s(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t *pathname,  
   size_t numberOfElements  
);  
template <size_t size>  
errno_t _searchenv_s(  
   const char *filename,  
   const char *varname,  
   char (&pathname)[size]  
); // C++ only  
template <size_t size>  
errno_t _wsearchenv_s(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t (&pathname)[size]  
); // C++ only  
```  
  
#### Parameters  
 [in] `filename`  
 Name of the file to search for.  
  
 [in] `varname`  
 Environment to search.  
  
 [out] `pathname`  
 Buffer to store the complete path.  
  
 [in] `numberOfElements`  
 Size of the `pathname`buffer.  
  
## Return Value  
 Zero if successful; an error code on failure.  
  
 If `filename` is an empty string, the return value is `ENOENT`.  
  
### Error Conditions  
  
|`filename`|`varname`|`pathname`|`numberOfElements`|Return value|Contents of `pathname`|  
|----------------|---------------|----------------|------------------------|------------------|----------------------------|  
|any|any|`NULL`|any|`EINVAL`|n/a|  
|`NULL`|any|any|any|`EINVAL`|not changed|  
|any|any|any|<= 0|`EINVAL`|not changed|  
  
 If any of these error conditions occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and return `EINVAL`.  
  
## Remarks  
 The `_searchenv_s` routine searches for the target file in the specified domain. The `varname` variable can be any environment or user-defined variable that specifies a list of directory paths, such as `PATH`, `LIB`, and `INCLUDE`. Because `_searchenv_s` is case-sensitive, `varname` should match the case of the environment variable. If `varname` does not match the name of an environment variable defined in the process's environment, the function returns zero and the `pathname` variable is unchanged.  
  
 The routine searches first for the file in the current working directory. If it does not find the file, it looks next through the directories specified by the environment variable. If the target file is in one of those directories, the newly created path is copied into `pathname`. If the `filename` file is not found, `pathname` contains an empty null-terminated string.  
  
 The `pathname` buffer should be at least `_MAX_PATH` characters long to accommodate the full length of the constructed path name. Otherwise, `_searchenv_s` might overrun the `pathname` buffer resulting in unexpected behavior.  
  
 `_wsearchenv_s` is a wide-character version of `_searchenv_s`; the arguments to `_wsearchenv_s` are wide-character strings. `_wsearchenv_s` and `_searchenv_s` behave identically otherwise.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tsearchenv_s`|`_searchenv_s`|`_searchenv_s`|`_wsearchenv_s`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_searchenv_s`|\<stdlib.h>|  
|`_wsearchenv_s`|\<stdlib.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_searchenv_s.c  
/* This program searches for a file in  
 * a directory specified by an environment variable.  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char pathbuffer[_MAX_PATH];  
   char searchfile[] = "CL.EXE";  
   char envvar[] = "PATH";  
   errno_t err;  
  
   /* Search for file in PATH environment variable: */  
   err = _searchenv_s( searchfile, envvar, pathbuffer, _MAX_PATH );  
   if (err != 0)  
   {  
      printf("Error searching the path. Error code: %d\n", err);  
   }  
   if( *pathbuffer != '\0' )  
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );  
   else  
      printf( "%s not found\n", searchfile );  
}  
```  
  
```Output  
Path for CL.EXE:  
C:\Program Files\Microsoft Visual Studio 2010\VC\BIN\CL.EXE  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Directory Control](../../c-runtime-library/directory-control.md)   
 [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)   
 [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md)