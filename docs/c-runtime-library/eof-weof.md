---
title: "EOF, WEOF | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
author: "corob-msft"
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
 [putc, putwc](../c-runtime-library/reference/putc-putwc.md)   
 [ungetc, ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [fflush](../c-runtime-library/reference/fflush.md)   
 [fclose, _fcloseall](../c-runtime-library/reference/fclose-fcloseall.md)   
 [_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)   
 [_putch, _putwch](../c-runtime-library/reference/putch-putwch.md)   
 [isascii, __isascii, iswascii](../c-runtime-library/reference/isascii-isascii-iswascii.md)   
 [Global Constants](../c-runtime-library/global-constants.md)