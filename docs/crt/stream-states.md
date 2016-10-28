---
title: "Stream States"
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
  - "streams, states"
ms.assetid: 5f28c968-f132-403f-968c-8417ff315e52
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
# Stream States
The valid states, and state transitions, for a stream are shown in the following figure.  
  
 ![Stream](../crt/media/stream.gif "stream")  
  
 Each of the circles denotes a stable state. Each of the lines denotes a transition that can occur as the result of a function call that operates on the stream. Five groups of functions can cause state transitions.  
  
 Functions in the first three groups are declared in \<stdio.h>:  
  
-   The byte read functions — [fgetc](../crt/fgetc--fgetwc.md), [fgets](../crt/fgets--fgetws.md), [fread](../crt/fread.md), [fscanf](../crt/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md), [getc](../crt/getc--getwc.md), [getchar](../crt/getc--getwc.md), [gets](../crt/gets--_getws.md), [scanf](../crt/scanf--_scanf_l--wscanf--_wscanf_l.md), and [ungetc](../crt/ungetc--ungetwc.md)  
  
-   The byte write functions — [fprintf](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md), [fputc](../crt/fputc--fputwc.md), [fputs](../crt/fputs--fputws.md), [fwrite](../crt/fwrite.md), [printf](../crt/printf--_printf_l--wprintf--_wprintf_l.md), [putc](../crt/putc--putwc.md), [putchar](../crt/putc--putwc.md), [puts](../crt/puts--_putws.md), [vfprintf](../crt/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md), and [vprintf](../crt/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md)  
  
-   The position functions — [fflush](../crt/fflush.md), [fseek](../crt/fseek--_fseeki64.md), [fsetpos](../crt/fsetpos.md), and [rewind](../crt/rewind.md)  
  
 Functions in the remaining two groups are declared in \<wchar.h>:  
  
-   The wide read functions — [fgetwc](../crt/fgetc--fgetwc.md), [fgetws](../crt/fgets--fgetws.md), [fwscanf](../crt/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md), [getwc](../crt/getc--getwc.md), [getwchar](../crt/getc--getwc.md), [ungetwc](../crt/ungetc--ungetwc.md), and [wscanf](../crt/scanf--_scanf_l--wscanf--_wscanf_l.md),  
  
-   The wide write functions — [fwprintf](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md), [fputwc](../crt/fputc--fputwc.md), [fputws](../crt/fputs--fputws.md), [putwc](../crt/putc--putwc.md), [putwchar](../crt/fputc--fputwc.md), [vfwprintf](../crt/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md), [vwprintf](../crt/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md), and [wprintf](../crt/printf--_printf_l--wprintf--_wprintf_l.md),  
  
 The state diagram shows that you must call one of the position functions between most write and read operations:  
  
-   You cannot call a read function if the last operation on the stream was a write.  
  
-   You cannot call a write function if the last operation on the stream was a read, unless that read operation set the end-of-file indicator.  
  
 Finally, the state diagram shows that a position operation never decreases the number of valid function calls that can follow.  
  
## See Also  
 [Files and Streams](../crt/files-and-streams.md)