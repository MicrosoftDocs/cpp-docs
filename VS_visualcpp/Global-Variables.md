---
title: "Global Variables"
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
ms.assetid: 01d1551c-2f0c-4f72-935c-6442caccf84f
caps.latest.revision: 15
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
# Global Variables
The Microsoft C run-time library provides the following global variables or macros. Several of these global variables or macros have been deprecated in favor of more-secure functional versions, which we recommend you use instead of the global variables.  
  
|Variable|Description|  
|--------------|-----------------|  
|[__argc, \__argv, \__wargv](../VS_visualcpp/__argc--__argv--__wargv.md)|Contains the command-line arguments.|  
|[_daylight, _dstbias, _timezone, and _tzname](../VS_visualcpp/_daylight--_dstbias--_timezone--and-_tzname.md)|Deprecated. Instead, use `_get_daylight`, `_get_dstbias`, `_get_timezone`, and `_get_tzname`.<br /><br /> Adjusts for local time; used in some date and time functions.|  
|[errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md)|Deprecated. Instead, use `_get_errno`, `_set_errno`, `_get_doserrno`, `_set_doserrno`, `perror` and `strerror`.<br /><br /> Stores error codes and related information.|  
|[_environ, _wenviron](../VS_visualcpp/_environ--_wenviron.md)|Deprecated. Instead, use `getenv_s`, `_wgetenv_s`, `_dupenv_s`, `_wdupenv_s`, `_putenv_s`, and `_wputenv_s`.<br /><br /> Pointers to arrays of pointers to the process environment strings; initialized at startup.|  
|[_fmode](../VS_visualcpp/_fmode.md)|Deprecated. Instead, use `_get_fmode` or `_set_fmode`.<br /><br /> Sets default file-translation mode.|  
|[_iob](../VS_visualcpp/_iob.md)|Array of I/O control structures for the console, files, and devices.|  
|[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../VS_visualcpp/_pctype--_pwctype--_wctype--_mbctype--_mbcasemap.md)|Contains information used by the character-classification functions.|  
|[_pgmptr, _wpgmptr](../VS_visualcpp/_pgmptr--_wpgmptr.md)|Deprecated. Instead, use `_get_pgmptr` or `_get_wpgmptr`.<br /><br /> Initialized at program startup to the fully-qualified or relative path of the program, the full program name, or the program name without its file name extension, depending on how the program was invoked.|  
  
## See Also  
 [C Run-Time Library Reference](../VS_visualcpp/C-Run-Time-Library-Reference.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)   
 [__argc, \__argv, \__wargv](../VS_visualcpp/__argc--__argv--__wargv.md)   
 [_get_daylight](../VS_visualcpp/_get_daylight.md)   
 [_get_dstbias](../VS_visualcpp/_get_dstbias.md)   
 [_get_timezone](../VS_visualcpp/_get_timezone.md)   
 [_get_tzname](../VS_visualcpp/_get_tzname.md)   
 [perror](../VS_visualcpp/perror--_wperror.md)   
 [strerror](../VS_visualcpp/strerror--_strerror--_wcserror--__wcserror.md)   
 [_get_doserrno](../VS_visualcpp/_get_doserrno.md)   
 [_set_doserrno](../VS_visualcpp/_set_doserrno.md)   
 [_get_errno](../VS_visualcpp/_get_errno.md)   
 [_set_errno](../VS_visualcpp/_set_errno.md)   
 [_dupenv_s, _wdupenv_s](../VS_visualcpp/_dupenv_s--_wdupenv_s.md)   
 [getenv, _wgetenv](../VS_visualcpp/getenv--_wgetenv.md)   
 [getenv_s, _wgetenv_s](../VS_visualcpp/getenv_s--_wgetenv_s.md)   
 [_putenv, _wputenv](../VS_visualcpp/_putenv--_wputenv.md)   
 [_putenv_s, _wputenv_s](../VS_visualcpp/_putenv_s--_wputenv_s.md)   
 [_get_fmode](../VS_visualcpp/_get_fmode.md)   
 [_set_fmode](../VS_visualcpp/_set_fmode.md)