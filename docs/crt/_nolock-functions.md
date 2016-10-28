---
title: "_nolock Functions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_nolock functions"
  - "nolock functions"
ms.assetid: 7d651d87-38d2-4303-9897-fdb5f7a3e899
caps.latest.revision: 5
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
# _nolock Functions
These are functions that do not perform any locking. They are provided for users requiring maximum performance. For more information, see [Multithreaded Libraries Performance](../crt/multithreaded-libraries-performance.md).  
  
 Use _nolock functions only if your program is truly single-threaded or if it does its own locking.  
  
 [_fclose_nolock](../crt/_fclose_nolock.md)  
  
 [_fflush_nolock](../crt/_fflush_nolock.md)  
  
 [_fgetc_nolock, _fgetwc_nolock](../crt/_fgetc_nolock--_fgetwc_nolock.md)  
  
 [_fread_nolock](../crt/_fread_nolock.md)  
  
 [_fseek_nolock, _fseeki64_nolock](../crt/_fseek_nolock--_fseeki64_nolock.md)  
  
 [_ftell_nolock, _ftelli64_nolock](../crt/_ftell_nolock--_ftelli64_nolock.md)  
  
 [_fwrite_nolock](../crt/_fwrite_nolock.md)  
  
 [_getc_nolock, _getwc_nolock](../crt/_getc_nolock--_getwc_nolock.md)  
  
 [_getch_nolock, _getwch_nolock](../crt/_getch_nolock--_getwch_nolock.md)  
  
 [_getchar_nolock, _getwchar_nolock](../crt/_getchar_nolock--_getwchar_nolock.md)  
  
 [_getche_nolock, _getwche_nolock](../crt/_getche_nolock--_getwche_nolock.md)  
  
 [_getdcwd_nolock, _wgetdcwd_nolock](../crt/_getdcwd_nolock--_wgetdcwd_nolock.md)  
  
 [_putc_nolock, _putwc_nolock](../crt/_putc_nolock--_putwc_nolock.md)  
  
 [_putch_nolock, _putwch_nolock](../crt/_putch_nolock--_putwch_nolock.md)  
  
 [_putchar_nolock, _putwchar_nolock](../crt/_putchar_nolock--_putwchar_nolock.md)  
  
 [_ungetc_nolock, _ungetwc_nolock](../crt/_ungetc_nolock--_ungetwc_nolock.md)  
  
 [_ungetch_nolock, _ungetwch_nolock](../crt/_ungetch--_ungetwch--_ungetch_nolock--_ungetwch_nolock.md)  
  
## See Also  
 [Input and Output](../crt/input-and-output.md)   
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)