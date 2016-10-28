---
title: "Console and Port I-O"
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
  - "c.io"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "routines, console and port I/O"
  - "routines"
  - "ports, I/O routines"
  - "I/O [CRT], console"
  - "I/O [CRT], port"
  - "I/O routines, console and port I/O"
ms.assetid: 0eee1c92-9b3d-41e0-a43a-257e546eeec8
caps.latest.revision: 8
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
# Console and Port I/O
These routines read and write on your console or on the specified port. The console I/O routines are not compatible with stream I/O or low-level I/O library routines. The console or port does not have to be opened or closed before I/O is performed, so there are no open or close routines in this category. In the Windows operating systems, the output from these functions is always directed to the console and cannot be redirected.  
  
### Console and Port I/O Routines  
  
|Routine|Use|  
|-------------|---------|  
|[_cgets, _cgetws](../crt/_cgets--_cgetws.md), [_cgets_s, _cgetws_s](../crt/_cgets_s--_cgetws_s.md)|Read string from console|  
|[_cprintf, _cwprintf](../crt/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md), [_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](../crt/_cprintf_s--_cprintf_s_l--_cwprintf_s--_cwprintf_s_l.md)|Write formatted data to console|  
|[_cputs](../crt/_cputs--_cputws.md)|Write string to console|  
|[_cscanf, _cwscanf](../crt/_cscanf--_cscanf_l--_cwscanf--_cwscanf_l.md), [_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](../crt/_cscanf_s--_cscanf_s_l--_cwscanf_s--_cwscanf_s_l.md)|Read formatted data from console|  
|[_getch, _getwch](../crt/_getch--_getwch.md)|Read character from console|  
|[_getche, _getwche](../crt/_getch--_getwch.md)|Read character from console and echo it|  
|[_inp](../crt/_inp--_inpw--_inpd.md)|Read one byte from specified I/O port|  
|[_inpd](../crt/_inp--_inpw--_inpd.md)|Read double word from specified I/O port|  
|[_inpw](../crt/_inp--_inpw--_inpd.md)|Read 2-byte word from specified I/O port|  
|[_kbhit](../crt/_kbhit.md)|Check for keystroke at console; use before attempting to read from console|  
|[_outp](../crt/_outp--_outpw--_outpd.md)|Write one byte to specified I/O port|  
|[_outpd](../crt/_outp--_outpw--_outpd.md)|Write double word to specified I/O port|  
|[_outpw](../crt/_outp--_outpw--_outpd.md)|Write word to specified I/O port|  
|[_putch, _putwch](../crt/_putch--_putwch.md)|Write character to console|  
|[_ungetch, _ungetwch](../crt/_ungetch--_ungetwch--_ungetch_nolock--_ungetwch_nolock.md)|"Unget" last character read from console so it becomes next character read|  
  
## See Also  
 [Input and Output](../crt/input-and-output.md)   
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)