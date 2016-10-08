---
title: "Stream States"
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
ms.assetid: 5f28c968-f132-403f-968c-8417ff315e52
caps.latest.revision: 8
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
# Stream States
The valid states, and state transitions, for a stream are shown in the following figure.  
  
 ![Stream](../VS_visualcpp/media/stream.gif "stream")  
  
 Each of the circles denotes a stable state. Each of the lines denotes a transition that can occur as the result of a function call that operates on the stream. Five groups of functions can cause state transitions.  
  
 Functions in the first three groups are declared in <stdio.h>:  
  
-   The byte read functions — [fgetc](../VS_visualcpp/fgetc--fgetwc.md), [fgets](../VS_visualcpp/fgets--fgetws.md), [fread](../VS_visualcpp/fread.md), [fscanf](../VS_visualcpp/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md), [getc](../VS_visualcpp/getc--getwc.md), [getchar](../VS_visualcpp/getc--getwc.md), [gets](../VS_visualcpp/gets--_getws.md), [scanf](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md), and [ungetc](../VS_visualcpp/ungetc--ungetwc.md)  
  
-   The byte write functions — [fprintf](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md), [fputc](../VS_visualcpp/fputc--fputwc.md), [fputs](../VS_visualcpp/fputs--fputws.md), [fwrite](../VS_visualcpp/fwrite.md), [printf](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md), [putc](../VS_visualcpp/putc--putwc.md), [putchar](../VS_visualcpp/putc--putwc.md), [puts](../VS_visualcpp/puts--_putws.md), [vfprintf](../VS_visualcpp/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md), and [vprintf](../VS_visualcpp/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md)  
  
-   The position functions — [fflush](../VS_visualcpp/fflush.md), [fseek](../VS_visualcpp/fseek--_fseeki64.md), [fsetpos](../VS_visualcpp/fsetpos.md), and [rewind](../VS_visualcpp/rewind.md)  
  
 Functions in the remaining two groups are declared in <wchar.h>:  
  
-   The wide read functions — [fgetwc](../VS_visualcpp/fgetc--fgetwc.md), [fgetws](../VS_visualcpp/fgets--fgetws.md), [fwscanf](../VS_visualcpp/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md), [getwc](../VS_visualcpp/getc--getwc.md), [getwchar](../VS_visualcpp/getc--getwc.md), [ungetwc](../VS_visualcpp/ungetc--ungetwc.md), and [wscanf](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md),  
  
-   The wide write functions — [fwprintf](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md), [fputwc](../VS_visualcpp/fputc--fputwc.md), [fputws](../VS_visualcpp/fputs--fputws.md), [putwc](../VS_visualcpp/putc--putwc.md), [putwchar](../VS_visualcpp/fputc--fputwc.md), [vfwprintf](../VS_visualcpp/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md), [vwprintf](../VS_visualcpp/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md), and [wprintf](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md),  
  
 The state diagram shows that you must call one of the position functions between most write and read operations:  
  
-   You cannot call a read function if the last operation on the stream was a write.  
  
-   You cannot call a write function if the last operation on the stream was a read, unless that read operation set the end-of-file indicator.  
  
 Finally, the state diagram shows that a position operation never decreases the number of valid function calls that can follow.  
  
## See Also  
 [Files and Streams](../VS_visualcpp/Files-and-Streams.md)