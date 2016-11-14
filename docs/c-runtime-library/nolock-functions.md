---
title: "_nolock Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_nolock functions"
  - "nolock functions"
ms.assetid: 7d651d87-38d2-4303-9897-fdb5f7a3e899
caps.latest.revision: 5
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
# _nolock Functions
These are functions that do not perform any locking. They are provided for users requiring maximum performance. For more information, see [Multithreaded Libraries Performance](../c-runtime-library/multithreaded-libraries-performance.md).  
  
 Use _nolock functions only if your program is truly single-threaded or if it does its own locking.  
  
 [_fclose_nolock](../c-runtime-library/reference/fclose-nolock.md)  
  
 [_fflush_nolock](../c-runtime-library/reference/fflush-nolock.md)  
  
 [_fgetc_nolock, _fgetwc_nolock](../c-runtime-library/reference/fgetc-nolock-fgetwc-nolock.md)  
  
 [_fread_nolock](../c-runtime-library/reference/fread-nolock.md)  
  
 [_fseek_nolock, _fseeki64_nolock](../c-runtime-library/reference/fseek-nolock-fseeki64-nolock.md)  
  
 [_ftell_nolock, _ftelli64_nolock](../c-runtime-library/reference/ftell-nolock-ftelli64-nolock.md)  
  
 [_fwrite_nolock](../c-runtime-library/reference/fwrite-nolock.md)  
  
 [_getc_nolock, _getwc_nolock](../c-runtime-library/reference/getc-nolock-getwc-nolock.md)  
  
 [_getch_nolock, _getwch_nolock](../c-runtime-library/reference/getch-nolock-getwch-nolock.md)  
  
 [_getchar_nolock, _getwchar_nolock](../c-runtime-library/reference/getchar-nolock-getwchar-nolock.md)  
  
 [_getche_nolock, _getwche_nolock](../c-runtime-library/reference/getche-nolock-getwche-nolock.md)  
  
 [_getdcwd_nolock, _wgetdcwd_nolock](../c-runtime-library/reference/getdcwd-nolock-wgetdcwd-nolock.md)  
  
 [_putc_nolock, _putwc_nolock](../c-runtime-library/reference/putc-nolock-putwc-nolock.md)  
  
 [_putch_nolock, _putwch_nolock](../c-runtime-library/reference/putch-nolock-putwch-nolock.md)  
  
 [_putchar_nolock, _putwchar_nolock](../c-runtime-library/reference/putchar-nolock-putwchar-nolock.md)  
  
 [_ungetc_nolock, _ungetwc_nolock](../c-runtime-library/reference/ungetc-nolock-ungetwc-nolock.md)  
  
 [_ungetch_nolock, _ungetwch_nolock](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)  
  
## See Also  
 [Input and Output](../c-runtime-library/input-and-output.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)