---
title: "File Read-Write Access Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.constants.file"]
dev_langs: ["C++"]
helpviewer_keywords: ["read/write access constants", "write access constants", "access constants for file read/write", "constants [C++], file attributes", "file read/write access constants"]
ms.assetid: 56cd1d22-39a5-4fcf-bea2-7046d249e8ee
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# File Read/Write Access Constants
## Syntax  
  
```  
  
#include <stdio.h>  
```  
  
## Remarks  
 These constants specify the access type ("a", "r", or "w") requested for the file. Both the [translation mode](../c-runtime-library/file-translation-constants.md) ("b" or "t") and the [commit-to-disk mode](../c-runtime-library/commit-to-disk-constants.md) ("c" or "n") can be specified with the type of access.  
  
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
 [_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)   
 [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md)   
 [Global Constants](../c-runtime-library/global-constants.md)