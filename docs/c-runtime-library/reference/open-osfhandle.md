---
title: "_open_osfhandle | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_open_osfhandle"
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
  - "_open_osfhandle"
  - "open_osfhandle"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "open_osfhandle function"
  - "file handles [C++], associating"
  - "_open_osfhandle function"
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
caps.latest.revision: 11
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
# _open_osfhandle
Associates a C run-time file descriptor with an existing operating-system file handle.  
  
## Syntax  
  
```  
  
      int _open_osfhandle (  
   intptr_t osfhandle,  
   int flags   
);  
```  
  
#### Parameters  
 `osfhandle`  
 Operating-system file handle.  
  
 `flags`  
 Types of operations allowed.  
  
## Return Value  
 If successful, `_open_osfhandle` returns a C run-time file descriptor. Otherwise, it returns –1.  
  
## Remarks  
 The `_open_osfhandle` function allocates a C run-time file descriptor and associates it with the operating-system file handle specified by `osfhandle`. The `flags` argument is an integer expression formed from one or more of the manifest constants defined in Fcntl.h. When two or more manifest constants are used to form the `flags` argument, the constants are combined with the bitwise-OR operator ( **&#124;** ).  
  
 Fcntl.h defines the following manifest constants.  
  
 **_O_APPEND**  
 Positions a file pointer to the end of the file before every write operation.  
  
 **_O_RDONLY**  
 Opens the file for reading only.  
  
 **_O_TEXT**  
 Opens the file in text (translated) mode.  
  
 **_O_WTEXT**  
 Opens the file in Unicode (translated UTF-16) mode.  
  
 To close a file opened with `_open_osfhandle`, call `_close`. The underlying handle is also closed by a call to `_close`, so it is not necessary to call the Win32 function `CloseHandle` on the original handle.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_open_osfhandle`|\<io.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)  
  
## See Also  
 [File Handling](../../c-runtime-library/file-handling.md)