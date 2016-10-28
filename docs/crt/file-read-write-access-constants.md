---
title: "File Read-Write Access Constants"
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
  - "read/write access constants"
  - "write access constants"
  - "access constants for file read/write"
  - "constants [C++], file attributes"
  - "file read/write access constants"
ms.assetid: 56cd1d22-39a5-4fcf-bea2-7046d249e8ee
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
# File Read/Write Access Constants
## Syntax  
  
```  
  
#include <stdio.h>  
```  
  
## Remarks  
 These constants specify the access type ("a", "r", or "w") requested for the file. Both the [translation mode](../crt/file-translation-constants.md) ("b" or "t") and the [commit-to-disk mode](../crt/commit-to-disk-constants.md) ("c" or "n") can be specified with the type of access.  
  
 The access types are described below.  
  
 **"a"**  
 Opens for writing at the end of the file (appending); creates the file first if it does not exist. All write operations occur at the end of the file. Although the file pointer can be repositioned using `fseek` or **rewind**, it is always moved back to the end of the file before any write operation is carried out.  
  
 **"a+"**  
 Same as above, but also allows reading.  
  
 **"r"**  
 Opens for reading. If the file does not exist or cannot be found, the call to open the file will fail.  
  
 **"r+"**  
 Opens for both reading and writing. If the file does not exist or cannot be found, the call to open the file will fail.  
  
 **"w"**  
 Opens an empty file for writing. If the given file exists, its contents are destroyed.  
  
 **"w+"**  
 Opens an empty file for both reading and writing. If the given file exists, its contents are destroyed.  
  
 When the "r+", "w+", or "a+" type is specified, both reading and writing are allowed (the file is said to be open for "update"). However, when you switch between reading and writing, there must be an intervening `fflush`, `fsetpos`, `fseek`, or **rewind** operation. The current position can be specified for the `fsetpos` or `fseek` operation.  
  
## See Also  
 [_fdopen, _wfdopen](../crt/_fdopen--_wfdopen.md)   
 [fopen, _wfopen](../crt/fopen--_wfopen.md)   
 [freopen, _wfreopen](../crt/freopen--_wfreopen.md)   
 [_fsopen, _wfsopen](../crt/_fsopen--_wfsopen.md)   
 [_popen, _wpopen](../crt/_popen--_wpopen.md)   
 [Global Constants](../crt/global-constants.md)