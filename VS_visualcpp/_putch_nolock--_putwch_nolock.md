---
title: "_putch_nolock, _putwch_nolock"
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
  - _putwch_nolock
  - _putch_nolock
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
  - api-ms-win-crt-conio-l1-1-0.dll
apitype: DLLExport
ms.assetid: edbc811d-bac6-47fa-a872-fe4f3a1590b0
caps.latest.revision: 14
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
# _putch_nolock, _putwch_nolock
Writes a character to the console without locking the thread.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
  
      int _putch_nolock(  
int c  
);  
wint_t _putwch_nolock(  
wchar_t c  
);  
```  
  
#### Parameters  
 *c*  
 Character to be output.  
  
## Return Value  
 Returns *c* if successful. If **_putch_nolock** fails, it returns **EOF**; if **_putwch_nolock** fails, it returns **WEOF**.  
  
## Remarks  
 **_putch_nolock** and **_putwch_nolock** are identical to **_putch** and **_putwch**, respectively, except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|**_puttch_nolock**|**_putch_nolock**|**_putch_nolock**|**_putwch_nolock**|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|**_putch_nolock**|<conio.h>|  
|**_putwch_nolock**|<conio.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## See Also  
 [Console and Port I/O](../VS_visualcpp/Console-and-Port-I-O.md)   
 [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../VS_visualcpp/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md)   
 [_getch, _getwch](../VS_visualcpp/_getch--_getwch.md)