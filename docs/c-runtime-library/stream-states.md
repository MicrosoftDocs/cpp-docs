---
title: "Stream States | Microsoft Docs"
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
  - "streams, states"
ms.assetid: 5f28c968-f132-403f-968c-8417ff315e52
caps.latest.revision: 8
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
# Stream States
The valid states, and state transitions, for a stream are shown in the following figure.  
  
 ![Stream](../c-runtime-library/media/stream.gif "stream")  
  
 Each of the circles denotes a stable state. Each of the lines denotes a transition that can occur as the result of a function call that operates on the stream. Five groups of functions can cause state transitions.  
  
 Functions in the first three groups are declared in \<stdio.h>:  
  
-   The byte read functions — [fgetc](../c-runtime-library/reference/fgetc-fgetwc.md), [fgets](../c-runtime-library/reference/fgets-fgetws.md), [fread](../c-runtime-library/reference/fread.md), [fscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [getc](../c-runtime-library/reference/getc-getwc.md), [getchar](../c-runtime-library/reference/getc-getwc.md), [gets](../c-runtime-library/gets-getws.md), [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md), and [ungetc](../c-runtime-library/reference/ungetc-ungetwc.md)  
  
-   The byte write functions — [fprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fputc](../c-runtime-library/reference/fputc-fputwc.md), [fputs](../c-runtime-library/reference/fputs-fputws.md), [fwrite](../c-runtime-library/reference/fwrite.md), [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), [putc](../c-runtime-library/reference/putc-putwc.md), [putchar](../c-runtime-library/reference/putc-putwc.md), [puts](../c-runtime-library/reference/puts-putws.md), [vfprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), and [vprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)  
  
-   The position functions — [fflush](../c-runtime-library/reference/fflush.md), [fseek](../c-runtime-library/reference/fseek-fseeki64.md), [fsetpos](../c-runtime-library/reference/fsetpos.md), and [rewind](../c-runtime-library/reference/rewind.md)  
  
 Functions in the remaining two groups are declared in \<wchar.h>:  
  
-   The wide read functions — [fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md), [fgetws](../c-runtime-library/reference/fgets-fgetws.md), [fwscanf](../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [getwc](../c-runtime-library/reference/getc-getwc.md), [getwchar](../c-runtime-library/reference/getc-getwc.md), [ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md), and [wscanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md),  
  
-   The wide write functions — [fwprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [fputwc](../c-runtime-library/reference/fputc-fputwc.md), [fputws](../c-runtime-library/reference/fputs-fputws.md), [putwc](../c-runtime-library/reference/putc-putwc.md), [putwchar](../c-runtime-library/reference/fputc-fputwc.md), [vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), [vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md), and [wprintf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md),  
  
 The state diagram shows that you must call one of the position functions between most write and read operations:  
  
-   You cannot call a read function if the last operation on the stream was a write.  
  
-   You cannot call a write function if the last operation on the stream was a read, unless that read operation set the end-of-file indicator.  
  
 Finally, the state diagram shows that a position operation never decreases the number of valid function calls that can follow.  
  
## See Also  
 [Files and Streams](../c-runtime-library/files-and-streams.md)