---
title: "Obsolete Functions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "is_wctype"
  - "_loaddll"
  - "_unloaddll"
  - "_getdllprocaddr"
  - "_seterrormode"
  - "_beep"
  - "_sleep"
  - "_getsystime"
  - "corecrt_wctype/is_wctype"
  - "process/_loaddll"
  - "process/_unloaddll"
  - "process/_getdllprocaddr"
  - "stdlib/_seterrormode"
  - "stdlib/_beep"
  - "stdlib/_sleep"
  - "time/_getsystime"
  - "time/_setsystime"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "obsolete functions"
  - "_beep function"
  - "_sleep function"
  - "_seterrormode function"
ms.assetid: 8e14c2d4-1481-4240-8586-47eb43db02b0
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Obsolete Functions
Certain library functions are obsolete and have more recent equivalents. We recommend you change these to the updated versions. Other obsolete functions have been removed from the CRT. This topic lists the functions deprecated as obsolete, and the functions removed in a particular version of Visual Studio.  
  
## Deprecated as obsolete in Visual Studio 2015  
  
|Obsolete function|Alternative|  
|-----------------------|-----------------|  
|`is_wctype`|[iswctype](../crt/_isctype--iswctype--_isctype_l--_iswctype_l.md)|  
|`_loaddll`|[LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187), [LoadLibraryEx](http://go.microsoft.com/fwlink/p/?LinkID=236091), or [LoadPackagedLibrary](https://msdn.microsoft.com/library/windows/desktop/hh447159\(v=vs.85\).aspx)|  
|`_unloaddll`|[FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)|  
|`_getdllprocaddr`|[GetProcAddress](../build/getprocaddress.md)|  
|`_seterrormode`|[SetErrorMode](http://go.microsoft.com/fwlink/p/?LinkID=255242)|  
|`_beep`|[Beep](https://msdn.microsoft.com/library/windows/desktop/ms679277\(v=vs.85\).aspx)|  
|`_sleep`|[Sleep](https://msdn.microsoft.com/library/windows/desktop/ms686298\(v=vs.85\).aspx)|  
|`_getsystime`|[GetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724338\(v=vs.85\).aspx)|  
|`_setsystime`|[SetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724936\(v=vs.85\).aspx)|  
  
## Removed from the CRT in Visual Studio 2015  
  
|Obsolete function|Alternative|  
|-----------------------|-----------------|  
|[_cgets, _cgetws](../crt/_cgets--_cgetws.md)|[_cgets_s, _cgetws_s](../crt/_cgets_s--_cgetws_s.md)|  
|[gets, _getws](../crt/gets--_getws.md)|[gets_s, _getws_s](../crt/gets_s--_getws_s.md)|  
|[_get_output_format](../crt/_get_output_format.md)|None|  
|[_heapadd](../crt/_heapadd.md)|None|  
|[_heapset](../crt/_heapset.md)|None|  
|[inp, inpw](../crt/inp--inpw.md)|None|  
|[_inp, _inpw, _inpd](../crt/_inp--_inpw--_inpd.md)|None|  
|[outp, outpw](../crt/outp--outpw.md)|None|  
|[_outp, _outpw, _outpd](../crt/_outp--_outpw--_outpd.md)|None|  
|[_set_output_format](../crt/_set_output_format.md)|None|  
  
## Removed from the CRT in earlier versions of Visual Studio  
 [_lock](../crt/_lock.md)  
  
 [_unlock](../crt/_unlock.md)