---
title: "EOF, WEOF"
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
  - "EOF"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "EOF function"
  - "WEOF function"
  - "end of file"
ms.assetid: a7150563-cdae-4cdf-9798-ad509990e505
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
# EOF, WEOF
## Syntax  
  
```  
  
#include <stdio.h>  
```  
  
## Remarks  
 EOF is returned by an I/O routine when the end-of-file (or in some cases, an error) is encountered.  
  
 WEOF yields the return value, of type **wint_t**, used to signal the end of a wide stream, or to report an error condition.  
  
## See Also  
 [putc, putwc](../crt/putc--putwc.md)   
 [ungetc, ungetwc](../crt/ungetc--ungetwc.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../crt/scanf--_scanf_l--wscanf--_wscanf_l.md)   
 [fflush](../crt/fflush.md)   
 [fclose, _fcloseall](../crt/fclose--_fcloseall.md)   
 [_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](../crt/_ungetch--_ungetwch--_ungetch_nolock--_ungetwch_nolock.md)   
 [_putch, _putwch](../crt/_putch--_putwch.md)   
 [isascii, __isascii, iswascii](../crt/isascii--__isascii--iswascii.md)   
 [Global Constants](../crt/global-constants.md)