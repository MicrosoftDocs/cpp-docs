---
title: "_close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_close"
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
  - "_close"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_close function"
  - "close function"
  - "files [C++], closing"
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
caps.latest.revision: 12
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
# _close
Closes a file.  
  
## Syntax  
  
```  
int _close(   
   int fd   
);  
```  
  
#### Parameters  
 `fd`  
 File descriptor referring to the open file.  
  
## Return Value  
 `_close` returns 0 if the file was successfully closed. A return value of –1 indicates an error.  
  
## Remarks  
 The `_close` function closes the file associated with `fd`.  
  
 The file descriptor and the underlying OS file handle are closed. Thus, it is not necessary to call `CloseHandle` if the file was originally opened using the Win32 function `CreateFile` and converted to a file descriptor using `_open_osfhandle`.  
  
 This function validates its parameters. If `fd` is a bad file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions returns -1 and `errno` is set to `EBADF`.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_close`|\<io.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_open](../../c-runtime-library/reference/open-wopen.md).  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [_chsize](../../c-runtime-library/reference/chsize.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_dup, _dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_unlink, _wunlink](../../c-runtime-library/reference/unlink-wunlink.md)