---
title: "Obsolete Functions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 8e14c2d4-1481-4240-8586-47eb43db02b0
caps.latest.revision: 7
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
# Obsolete Functions
Certain library functions are obsolete and have more recent equivalents. We recommend you change these to the updated versions. Other obsolete functions have been removed from the CRT. This topic lists the functions deprecated as obsolete, and the functions removed in a particular version of Visual Studio.  
  
## Deprecated as obsolete in Visual Studio 2015  
  
|Obsolete function|Alternative|  
|-----------------------|-----------------|  
|`is_wctype`|[iswctype](../VS_visualcpp/_isctype--iswctype--_isctype_l--_iswctype_l.md)|  
|`_loaddll`|[LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187), [LoadLibraryEx](http://go.microsoft.com/fwlink/p/?LinkID=236091), or [LoadPackagedLibrary](https://msdn.microsoft.com/library/windows/desktop/hh447159\(v=vs.85\).aspx)|  
|`_unloaddll`|[FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)|  
|`_getdllprocaddr`|[GetProcAddress](../VS_visualcpp/GetProcAddress.md)|  
|`_seterrormode`|[SetErrorMode](http://go.microsoft.com/fwlink/p/?LinkID=255242)|  
|`_beep`|[Beep](https://msdn.microsoft.com/library/windows/desktop/ms679277\(v=vs.85\).aspx)|  
|`_sleep`|[Sleep](https://msdn.microsoft.com/library/windows/desktop/ms686298\(v=vs.85\).aspx)|  
|`_getsystime`|[GetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724338\(v=vs.85\).aspx)|  
|`_setsystime`|[SetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724936\(v=vs.85\).aspx)|  
  
## Removed from the CRT in Visual Studio 2015  
  
|Obsolete function|Alternative|  
|-----------------------|-----------------|  
|[_cgets, _cgetws](../VS_visualcpp/_cgets--_cgetws.md)|[_cgets_s, _cgetws_s](../VS_visualcpp/_cgets_s--_cgetws_s.md)|  
|[gets, _getws](../VS_visualcpp/gets--_getws.md)|[gets_s, _getws_s](../VS_visualcpp/gets_s--_getws_s.md)|  
|[_get_output_format](../VS_visualcpp/_get_output_format.md)|None|  
|[_heapadd](../VS_visualcpp/_heapadd.md)|None|  
|[_heapset](../VS_visualcpp/_heapset.md)|None|  
|[inp, inpw](../VS_visualcpp/inp--inpw.md)|None|  
|[_inp, _inpw, _inpd](../VS_visualcpp/_inp--_inpw--_inpd.md)|None|  
|[outp, outpw](../VS_visualcpp/outp--outpw.md)|None|  
|[_outp, _outpw, _outpd](../VS_visualcpp/_outp--_outpw--_outpd.md)|None|  
|[_set_output_format](../VS_visualcpp/_set_output_format.md)|None|  
  
## Removed from the CRT in earlier versions of Visual Studio  
 [_lock](../VS_visualcpp/_lock.md)  
  
 [_unlock](../VS_visualcpp/_unlock.md)