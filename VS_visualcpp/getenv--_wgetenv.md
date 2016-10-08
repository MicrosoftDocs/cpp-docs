---
title: "getenv, _wgetenv"
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
  - getenv
  - _wgetenv
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
  - api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
ms.assetid: 3b9cb9ab-a126-4e0e-a44f-6c5a7134daf4
caps.latest.revision: 29
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
# getenv, _wgetenv
Gets a value from the current environment. More secure versions of these functions are available; see [getenv_s, _wgetenv_s](../VS_visualcpp/getenv_s--_wgetenv_s.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *getenv(   
   const char *varname   
);  
wchar_t *_wgetenv(   
   const wchar_t *varname   
);  
```  
  
#### Parameters  
 `varname`  
 Environment variable name.  
  
## Return Value  
 Returns a pointer to the environment table entry containing `varname`. It is not safe to modify the value of the environment variable using the returned pointer. Use the `_putenv` function to modify the value of an environment variable. The return value is `NULL` if `varname` is not found in the environment table.  
  
## Remarks  
 The `getenv` function searches the list of environment variables for `varname`. `getenv` is not case sensitive in the Windows operating system. `getenv` and `_putenv` use the copy of the environment pointed to by the global variable `_environ` to access the environment. `getenv` operates only on the data structures accessible to the run-time library and not on the environment "segment" created for the process by the operating system. Therefore, programs that use the `envp` argument to [main](../VS_visualcpp/main--Program-Startup.md) or [wmain](../VS_visualcpp/main--Program-Startup.md) may retrieve invalid information.  
  
 If `varname` is `NULL`, this function invokes an invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `NULL`.  
  
 `_wgetenv` is a wide-character version of `getenv`; the argument and return value of `_wgetenv` are wide-character strings. The `_wenviron` global variable is a wide-character version of `_environ`.  
  
 In an MBCS program (for example, in an SBCS ASCII program), `_wenviron` is initially `NULL` because the environment is composed of multibyte-character strings. Then, on the first call to `_wputenv`, or on the first call to `_wgetenv` if an (MBCS) environment already exists, a corresponding wide-character string environment is created and is then pointed to by `_wenviron`.  
  
 Similarly in a Unicode (`_wmain`) program, `_environ` is initially `NULL` because the environment is composed of wide-character strings. Then, on the first call to `_putenv`, or on the first call to `getenv` if a (Unicode) environment already exists, a corresponding MBCS environment is created and is then pointed to by `_environ`.  
  
 When two copies of the environment (MBCS and Unicode) exist simultaneously in a program, the run-time system must maintain both copies, resulting in slower execution time. For example, whenever you call `_putenv`, a call to `_wputenv` is also executed automatically, so that the two environment strings correspond.  
  
> [!CAUTION]
>  In rare instances, when the run-time system is maintaining both a Unicode version and a multibyte version of the environment, these two environment versions may not correspond exactly. This is because, although any unique multibyte-character string maps to a unique Unicode string, the mapping from a unique Unicode string to a multibyte-character string is not necessarily unique. For more information, see [_environ, _wenviron](../VS_visualcpp/_environ--_wenviron.md).  
  
> [!NOTE]
>  The `_putenv` and `_getenv` families of functions are not thread-safe. `_getenv` could return a string pointer while `_putenv` is modifying the string, causing random failures. Make sure that calls to these functions are synchronized.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tgetenv`|`getenv`|`getenv`|`_wgetenv`|  
  
 To check or change the value of the `TZ` environment variable, use `getenv`, `_putenv` and `_tzset` as necessary. For more information about `TZ`, see [_tzset](../VS_visualcpp/_tzset.md) and [_daylight, timezone, and _tzname](../VS_visualcpp/_daylight--_dstbias--_timezone--and-_tzname.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`getenv`|<stdlib.h>|  
|`_wgetenv`|<stdlib.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_getenv.c  
// compile with: /W3  
// This program uses getenv to retrieve  
// the LIB environment variable and then uses  
// _putenv to change it to a new value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *libvar;  
  
   // Get the value of the LIB environment variable.  
   libvar = getenv( "LIB" ); // C4996  
   // Note: getenv is deprecated; consider using getenv_s instead  
  
   if( libvar != NULL )  
      printf( "Original LIB variable is: %s\n", libvar );  
  
   // Attempt to change path. Note that this only affects the environment  
   // variable of the current process. The command processor's  
   // environment is not changed.  
   _putenv( "LIB=c:\\mylib;c:\\yourlib" ); // C4996  
   // Note: _putenv is deprecated; consider using putenv_s instead  
  
   // Get new value.  
   libvar = getenv( "LIB" ); // C4996  
  
   if( libvar != NULL )  
      printf( "New LIB variable is: %s\n", libvar );  
}  
```  
  
 **Original LIB variable is: C:\progra~1\devstu~1\vc\lib**  
**New LIB variable is: c:\mylib;c:\yourlib**   
## .NET Framework Equivalent  
 [System::Environment::GetEnvironmentVariable](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [_putenv, _wputenv](../VS_visualcpp/_putenv--_wputenv.md)   
 [Environmental Constants](../VS_visualcpp/Environmental-Constants.md)