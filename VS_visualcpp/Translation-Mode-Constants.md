---
title: "Translation Mode Constants"
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
ms.assetid: a5993bf4-7e7a-47f9-83c3-e46332b85579
caps.latest.revision: 6
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
# Translation Mode Constants
## Syntax  
  
```  
  
#include <fcntl.h>  
  
```  
  
## Remarks  
 The `_O_BINARY` and `_O_TEXT` manifest constants determine the translation mode for files (`_open` and `_sopen`) or the translation mode for streams (`_setmode`).  
  
 The allowed values are:  
  
 `_O_TEXT`  
 Opens file in text (translated) mode. Carriage return – linefeed (CR-LF) combinations are translated into a single linefeed (LF) on input. Linefeed characters are translated into CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading and reading/writing, `fopen` checks for CTRL+Z at the end of the file and removes it, if possible. This is done because using the `fseek` and `ftell` functions to move within a file ending with CTRL+Z may cause `fseek` to behave improperly near the end of the file.  
  
 `_O_BINARY`  
 Opens file in binary (untranslated) mode. The above translations are suppressed.  
  
 `_O_RAW`  
 Same as `_O_BINARY`. Supported for C 2.0 compatibility.  
  
 For more information, see [Text and Binary Mode File I/O](../VS_visualcpp/Text-and-Binary-Mode-File-I-O.md) and [File Translation](../VS_visualcpp/File-Translation-Constants.md).  
  
## See Also  
 [_open, _wopen](../VS_visualcpp/_open--_wopen.md)   
 [_pipe](../VS_visualcpp/_pipe.md)   
 [_sopen, _wsopen](../VS_visualcpp/_sopen--_wsopen.md)   
 [_setmode](../VS_visualcpp/_setmode.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)