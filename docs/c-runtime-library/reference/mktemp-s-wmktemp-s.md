---
title: "_mktemp_s, _wmktemp_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mktemp_s"
  - "_wmktemp_s"
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
apitype: "DLLExport"
f1_keywords: 
  - "wmktemp_s"
  - "mktemp_s"
  - "_mktemp_s"
  - "_wmktemp_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tmktemp_s function"
  - "mktemp_s function"
  - "_wmktemp_s function"
  - "_mktemp_s function"
  - "files [C++], temporary"
  - "tmktemp_s function"
  - "wmktemp_s function"
  - "temporary files [C++]"
ms.assetid: 92a7e269-7f3d-4c71-bad6-14bc827a451d
caps.latest.revision: 23
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
# _mktemp_s, _wmktemp_s
Creates a unique file name. These are versions of [_mktemp, _wmktemp](../../c-runtime-library/reference/mktemp-wmktemp.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t _mktemp_s(  
   char *template,  
   size_t sizeInChars  
);  
errno_t _wmktemp_s(  
   wchar_t *template,  
   size_t sizeInChars  
);  
template <size_t size>  
errno_t _mktemp_s(  
   char (&template)[size]  
); // C++ only  
template <size_t size>  
errno_t _wmktemp_s(  
   wchar_t (&template)[size]  
); // C++ only  
```  
  
#### Parameters  
 `template`  
 File name pattern.  
  
 `sizeInChars`  
 Size of the buffer in single-byte characters in `_mktemp_s`; wide characters in `_wmktemp_s`, including the null terminator.  
  
## Return Value  
 Both of these functions return zero on success; an error code on failure.  
  
### Error Conditions  
  
|`template`|`sizeInChars`|**return value**|**new value in template**|  
|----------------|-------------------|----------------------|-------------------------------|  
|`NULL`|any|`EINVAL`|`NULL`|  
|Incorrect format (see `Remarks` section for correct format)|any|`EINVAL`|empty string|  
|any|<= number of X's|`EINVAL`|empty string|  
  
 If any of the above error conditions occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the functions returns `EINVAL`.  
  
## Remarks  
 The `_mktemp_s` function creates a unique file name by modifying the `template` argument, so that after the call, the `template` pointer points to a string containing the new file name. `_mktemp_s` automatically handles multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use by the run-time system. `_wmktemp_s` is a wide-character version of `_mktemp_s`; the argument of `_wmktemp_s` is a wide-character string. `_wmktemp_s` and `_mktemp_s` behave identically otherwise, except that `_wmktemp_s` does not handle multibyte-character strings.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tmktemp_s`|`_mktemp_s`|`_mktemp_s`|`_wmktemp_s`|  
  
 The `template` argument has the form `baseXXXXXX`, where `base` is the part of the new file name that you supply and each X is a placeholder for a character supplied by `_mktemp_s`. Each placeholder character in `template` must be an uppercase X. `_mktemp_s` preserves `base` and replaces the first trailing X with an alphabetic character. `_mktemp_s` replaces the following trailing X's with a five-digit value; this value is a unique number identifying the calling process, or in multithreaded programs, the calling thread.  
  
 Each successful call to `_mktemp_s` modifies `template`. In each subsequent call from the same process or thread with the same `template` argument, `_mktemp_s` checks for file names that match names returned by `_mktemp_s` in previous calls. If no file exists for a given name, `_mktemp_s` returns that name. If files exist for all previously returned names, `_mktemp_s` creates a new name by replacing the alphabetic character it used in the previously returned name with the next available lowercase letter, in order, from 'a' through 'z'. For example, if `base` is:  
  
```  
fn  
```  
  
 and the five-digit value supplied by `_mktemp_s` is 12345, the first name returned is:  
  
```  
fna12345  
```  
  
 If this name is used to create file FNA12345 and this file still exists, the next name returned on a call from the same process or thread with the same `base` for `template` is:  
  
```  
fnb12345  
```  
  
 If FNA12345 does not exist, the next name returned is again:  
  
```  
fna12345  
```  
  
 `_mktemp_s` can create a maximum of 26 unique file names for any given combination of base and template values. Therefore, FNZ12345 is the last unique file name `_mktemp_s` can create for the `base` and `template` values used in this example.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mktemp_s`|\<io.h>|  
|`_wmktemp_s`|\<io.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_mktemp_s.cpp  
/* The program uses _mktemp to create  
 * five unique filenames. It opens each filename  
 * to ensure that the next name is unique.  
 */  
  
#include <io.h>  
#include <string.h>  
#include <stdio.h>  
  
char *fnTemplate = "fnXXXXXX";  
char names[5][9];  
  
int main()  
{  
   int i, err, sizeInChars;  
   FILE *fp;  
  
   for( i = 0; i < 5; i++ )  
   {  
      strcpy_s( names[i], sizeof(names[i]), fnTemplate );  
      /* Get the size of the string and add one for the null terminator.*/  
      sizeInChars = strnlen(names[i], 9) + 1;  
      /* Attempt to find a unique filename: */  
      err = _mktemp_s( names[i], sizeInChars );  
      if( err != 0 )  
         printf( "Problem creating the template" );  
      else  
      {  
         if( fopen_s( &fp, names[i], "w" ) == 0 )  
            printf( "Unique filename is %s\n", names[i] );  
         else  
            printf( "Cannot open %s\n", names[i] );  
         fclose( fp );  
      }  
   }  
  
   return 0;  
}  
```  
  
## Sample Output  
  
```  
Unique filename is fna03188  
Unique filename is fnb03188  
Unique filename is fnc03188  
Unique filename is fnd03188  
Unique filename is fne03188  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [File Handling](../../c-runtime-library/file-handling.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [_getpid](../../c-runtime-library/reference/getpid.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [_tempnam, _wtempnam, tmpnam, _wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)   
 [tmpfile_s](../../c-runtime-library/reference/tmpfile-s.md)