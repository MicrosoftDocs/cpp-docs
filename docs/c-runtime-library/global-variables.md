---
title: "Global Variables | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
# Global Variables
The Microsoft C run-time library provides the following global variables or macros. Several of these global variables or macros have been deprecated in favor of more-secure functional versions, which we recommend you use instead of the global variables.  
  
|Variable|Description|  
|--------------|-----------------|  
|[__argc, \__argv, \__wargv](../c-runtime-library/argc-argv-wargv.md)|Contains the command-line arguments.|  
|[_daylight, _dstbias, _timezone, and _tzname](../c-runtime-library/daylight-dstbias-timezone-and-tzname.md)|Deprecated. Instead, use `_get_daylight`, `_get_dstbias`, `_get_timezone`, and `_get_tzname`.<br /><br /> Adjusts for local time; used in some date and time functions.|  
|[errno, _doserrno, _sys_errlist, and _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)|Deprecated. Instead, use `_get_errno`, `_set_errno`, `_get_doserrno`, `_set_doserrno`, `perror` and `strerror`.<br /><br /> Stores error codes and related information.|  
|[_environ, _wenviron](../c-runtime-library/environ-wenviron.md)|Deprecated. Instead, use `getenv_s`, `_wgetenv_s`, `_dupenv_s`, `_wdupenv_s`, `_putenv_s`, and `_wputenv_s`.<br /><br /> Pointers to arrays of pointers to the process environment strings; initialized at startup.|  
|[_fmode](../c-runtime-library/fmode.md)|Deprecated. Instead, use `_get_fmode` or `_set_fmode`.<br /><br /> Sets default file-translation mode.|  
|[_iob](../c-runtime-library/iob.md)|Array of I/O control structures for the console, files, and devices.|  
|[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)|Contains information used by the character-classification functions.|  
|[_pgmptr, _wpgmptr](../c-runtime-library/pgmptr-wpgmptr.md)|Deprecated. Instead, use `_get_pgmptr` or `_get_wpgmptr`.<br /><br /> Initialized at program startup to the fully-qualified or relative path of the program, the full program name, or the program name without its file name extension, depending on how the program was invoked.|  
  
## See Also  
 [C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md)   
 [Global Constants](../c-runtime-library/global-constants.md)   
 [__argc, \__argv, \__wargv](../c-runtime-library/argc-argv-wargv.md)   
 [_get_daylight](../c-runtime-library/reference/get-daylight.md)   
 [_get_dstbias](../c-runtime-library/reference/get-dstbias.md)   
 [_get_timezone](../c-runtime-library/reference/get-timezone.md)   
 [_get_tzname](../c-runtime-library/reference/get-tzname.md)   
 [perror](../c-runtime-library/reference/perror-wperror.md)   
 [strerror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)   
 [_get_doserrno](../c-runtime-library/reference/get-doserrno.md)   
 [_set_doserrno](../c-runtime-library/reference/set-doserrno.md)   
 [_get_errno](../c-runtime-library/reference/get-errno.md)   
 [_set_errno](../c-runtime-library/reference/set-errno.md)   
 [_dupenv_s, _wdupenv_s](../c-runtime-library/reference/dupenv-s-wdupenv-s.md)   
 [getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)   
 [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)   
 [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)   
 [_get_fmode](../c-runtime-library/reference/get-fmode.md)   
 [_set_fmode](../c-runtime-library/reference/set-fmode.md)