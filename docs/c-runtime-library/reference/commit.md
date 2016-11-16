---
title: "_commit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_commit"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_commit"
  - "commit"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "files [C++], flushing"
  - "flushing files to disk"
  - "commit function"
  - "_commit function"
  - "committing files to disk"
ms.assetid: d0c74d3a-4f2d-4fb0-b140-2d687db3d233
caps.latest.revision: 14
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
# _commit
Flushes a file directly to disk.  
  
## Syntax  
  
```  
int _commit(   
   int fd   
);  
```  
  
#### Parameters  
 `fd`  
 File descriptor referring to the open file.  
  
## Return Value  
 `_commit` returns 0 if the file was successfully flushed to disk. A return value of –1 indicates an error.  
  
## Remarks  
 The `_commit` function forces the operating system to write the file associated with `fd` to disk. This call ensures that the specified file is flushed immediately, not at the operating system's discretion.  
  
 If `fd` is an invalid file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and `errno` is set to `EBADF`.  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`_commit`|\<io.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_read](../../c-runtime-library/reference/read.md)   
 [_write](../../c-runtime-library/reference/write.md)