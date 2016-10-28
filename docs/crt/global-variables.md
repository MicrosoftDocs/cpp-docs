---
title: "Global Variables"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.variables"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "global variables"
  - "variables, global"
  - "global variables, Microsoft run-time library"
ms.assetid: 01d1551c-2f0c-4f72-935c-6442caccf84f
caps.latest.revision: 15
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
# Global Variables
The Microsoft C run-time library provides the following global variables or macros. Several of these global variables or macros have been deprecated in favor of more-secure functional versions, which we recommend you use instead of the global variables.  
  
|Variable|Description|  
|--------------|-----------------|  
|[__argc, \__argv, \__wargv](../crt/__argc--__argv--__wargv.md)|Contains the command-line arguments.|  
|[_daylight, _dstbias, _timezone, and _tzname](../crt/_daylight--_dstbias--_timezone--and-_tzname.md)|Deprecated. Instead, use `_get_daylight`, `_get_dstbias`, `_get_timezone`, and `_get_tzname`.<br /><br /> Adjusts for local time; used in some date and time functions.|  
|[errno, _doserrno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md)|Deprecated. Instead, use `_get_errno`, `_set_errno`, `_get_doserrno`, `_set_doserrno`, `perror` and `strerror`.<br /><br /> Stores error codes and related information.|  
|[_environ, _wenviron](../crt/_environ--_wenviron.md)|Deprecated. Instead, use `getenv_s`, `_wgetenv_s`, `_dupenv_s`, `_wdupenv_s`, `_putenv_s`, and `_wputenv_s`.<br /><br /> Pointers to arrays of pointers to the process environment strings; initialized at startup.|  
|[_fmode](../crt/_fmode.md)|Deprecated. Instead, use `_get_fmode` or `_set_fmode`.<br /><br /> Sets default file-translation mode.|  
|[_iob](../crt/_iob.md)|Array of I/O control structures for the console, files, and devices.|  
|[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../crt/_pctype--_pwctype--_wctype--_mbctype--_mbcasemap.md)|Contains information used by the character-classification functions.|  
|[_pgmptr, _wpgmptr](../crt/_pgmptr--_wpgmptr.md)|Deprecated. Instead, use `_get_pgmptr` or `_get_wpgmptr`.<br /><br /> Initialized at program startup to the fully-qualified or relative path of the program, the full program name, or the program name without its file name extension, depending on how the program was invoked.|  
  
## See Also  
 [C Run-Time Library Reference](../crt/c-run-time-library-reference.md)   
 [Global Constants](../crt/global-constants.md)   
 [__argc, \__argv, \__wargv](../crt/__argc--__argv--__wargv.md)   
 [_get_daylight](../crt/_get_daylight.md)   
 [_get_dstbias](../crt/_get_dstbias.md)   
 [_get_timezone](../crt/_get_timezone.md)   
 [_get_tzname](../crt/_get_tzname.md)   
 [perror](../crt/perror--_wperror.md)   
 [strerror](../crt/strerror--_strerror--_wcserror--__wcserror.md)   
 [_get_doserrno](../crt/_get_doserrno.md)   
 [_set_doserrno](../crt/_set_doserrno.md)   
 [_get_errno](../crt/_get_errno.md)   
 [_set_errno](../crt/_set_errno.md)   
 [_dupenv_s, _wdupenv_s](../crt/_dupenv_s--_wdupenv_s.md)   
 [getenv, _wgetenv](../crt/getenv--_wgetenv.md)   
 [getenv_s, _wgetenv_s](../crt/getenv_s--_wgetenv_s.md)   
 [_putenv, _wputenv](../crt/_putenv--_wputenv.md)   
 [_putenv_s, _wputenv_s](../crt/_putenv_s--_wputenv_s.md)   
 [_get_fmode](../crt/_get_fmode.md)   
 [_set_fmode](../crt/_set_fmode.md)