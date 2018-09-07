---
title: "Obsolete Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "conceptual"
f1_keywords: ["is_wctype", "_loaddll", "_unloaddll", "_getdllprocaddr", "_seterrormode", "_beep", "_sleep", "_getsystime", "corecrt_wctype/is_wctype", "process/_loaddll", "process/_unloaddll", "process/_getdllprocaddr", "stdlib/_seterrormode", "stdlib/_beep", "stdlib/_sleep", "time/_getsystime", "time/_setsystime"]
dev_langs: ["C++"]
helpviewer_keywords: ["obsolete functions", "_beep function", "_sleep function", "_seterrormode function"]
ms.assetid: 8e14c2d4-1481-4240-8586-47eb43db02b0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Obsolete Functions
Certain library functions are obsolete and have more recent equivalents. We recommend you change these to the updated versions. Other obsolete functions have been removed from the CRT. This topic lists the functions deprecated as obsolete, and the functions removed in a particular version of Visual Studio.  
  
## Deprecated as obsolete in Visual Studio 2015  
  
|Obsolete function|Alternative|  
|-----------------------|-----------------|  
|`is_wctype`|[iswctype](../c-runtime-library/reference/isctype-iswctype-isctype-l-iswctype-l.md)|  
|`_loaddll`|[LoadLibrary](https://msdn.microsoft.com/library/windows/desktop/ms684175\(v=vs.85\).aspx), [LoadLibraryEx](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa), or [LoadPackagedLibrary](/windows/desktop/api/winbase/nf-winbase-loadpackagedlibrary)|  
|`_unloaddll`|[FreeLibrary](https://msdn.microsoft.com/library/windows/desktop/ms683152\(v=vs.85\).aspx)|  
|`_getdllprocaddr`|[GetProcAddress](../build/getprocaddress.md)|  
|`_seterrormode`|[SetErrorMode](https://msdn.microsoft.com/en-us/library/windows/desktop/ms680621\(v=vs.85\).aspx)|  
|`_beep`|[Beep](https://msdn.microsoft.com/library/windows/desktop/ms679277\(v=vs.85\).aspx)|  
|`_sleep`|[Sleep](/windows/desktop/api/synchapi/nf-synchapi-sleep)|  
|`_getsystime`|[GetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724338\(v=vs.85\).aspx)|  
|`_setsystime`|[SetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724936\(v=vs.85\).aspx)|  
  
## Removed from the CRT in Visual Studio 2015  
  
|Obsolete function|Alternative|  
|-----------------------|-----------------|  
|[_cgets, _cgetws](../c-runtime-library/cgets-cgetws.md)|[_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md)|  
|[gets, _getws](../c-runtime-library/gets-getws.md)|[gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md)|  
|[_get_output_format](../c-runtime-library/get-output-format.md)|None|  
|[_heapadd](../c-runtime-library/heapadd.md)|None|  
|[_heapset](../c-runtime-library/heapset.md)|None|  
|[inp, inpw](../c-runtime-library/inp-inpw.md)|None|  
|[_inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)|None|  
|[outp, outpw](../c-runtime-library/outp-outpw.md)|None|  
|[_outp, _outpw, _outpd](../c-runtime-library/outp-outpw-outpd.md)|None|  
|[_set_output_format](../c-runtime-library/set-output-format.md)|None|  
  
## Removed from the CRT in earlier versions of Visual Studio  
 [_lock](../c-runtime-library/lock.md)  
  
 [_unlock](../c-runtime-library/unlock.md)