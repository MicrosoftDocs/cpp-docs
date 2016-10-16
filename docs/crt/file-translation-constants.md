---
title: "File Translation Constants"
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
  - "c.constants.file"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "translation constants"
  - "file translation [C++], constants"
  - "translation, file translation constants"
  - "translation, constants"
  - "constants [C++], file translation mode"
  - "file translation [C++]"
ms.assetid: 49b13bf3-442e-4d19-878b-bd1029fa666a
caps.latest.revision: 6
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
# File Translation Constants
## Syntax  
  
```  
  
#include <stdio.h>  
```  
  
## Remarks  
 These constants specify the mode of translation (**"b"** or **"t"**). The mode is included in the string specifying the type of access (**"r"**, **"w"**, **"a"**, **"r+"**, **"w+"**, **"a+"**).  
  
 The translation modes are as follows:  
  
 **t**  
 Opens in text (translated) mode. In this mode, carriage-return/linefeed (CR-LF) combinations are translated into single linefeeds (LF) on input, and LF characters are translated into CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading or reading/writing, `fopen` checks for CTRL+Z at the end of the file and removes it, if possible. This is done because using the `fseek` and `ftell` functions to move within a file ending with CTRL+Z may cause `fseek` to behave improperly near the end of the file.  
  
> [!NOTE]
>  The **t** option is not part of the ANSI standard for `fopen` and `freopen`. It is a Microsoft extension and should not be used where ANSI portability is desired.  
  
 **b**  
 Opens in binary (untranslated) mode. The above translations are suppressed.  
  
 If **t** or **b** is not given in *mode*, the translation mode is defined by the default-mode variable [_fmode](../crt/_fmode.md). For more information about using text and binary modes, see [Text and Binary Mode File I/O](../crt/text-and-binary-mode-file-i-o.md).  
  
## See Also  
 [_fdopen, _wfdopen](../crt/_fdopen--_wfdopen.md)   
 [fopen, _wfopen](../crt/fopen--_wfopen.md)   
 [freopen, _wfreopen](../crt/freopen--_wfreopen.md)   
 [_fsopen, _wfsopen](../crt/_fsopen--_wfsopen.md)   
 [Global Constants](../crt/global-constants.md)