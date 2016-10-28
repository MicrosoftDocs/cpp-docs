---
title: "Low-Level I-O"
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
  - "c.io"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "I/O [CRT], low-level"
  - "I/O [CRT], functions"
  - "low-level I/O routines"
  - "file handles [C++]"
  - "file handles [C++], I/O functions"
ms.assetid: 53e11bdd-6720-481c-8b2b-3a3a569ed534
caps.latest.revision: 9
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
# Low-Level I/O
These functions invoke the operating system directly for lower-level operation than that provided by stream I/O. Low-level input and output calls do not buffer or format data.  
  
 Low-level routines can access the standard streams opened at program startup using the following predefined file descriptors.  
  
|Stream|File Descriptor|  
|------------|---------------------|  
|`stdin`|0|  
|`stdout`|1|  
|`stderr`|2|  
  
 Low-level I/O routines set the [errno](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) global variable when an error occurs. You must include STDIO.H when you use low-level functions only if your program requires a constant that is defined in STDIO.H, such as the end-of-file indicator (`EOF`).  
  
### Low-Level I/O Functions  
  
|Function|Use|  
|--------------|---------|  
|[_close](../crt/_close.md)|Close file|  
|[_commit](../crt/_commit.md)|Flush file to disk|  
|[_creat, _wcreat](../crt/_creat--_wcreat.md)|Create file|  
|[_dup](../crt/_dup--_dup2.md)|Return next available file descriptor for given file|  
|[_dup2](../crt/_dup--_dup2.md)|Create second descriptor for given file|  
|[_eof](../crt/_eof.md)|Test for end of file|  
|[_lseek, _lseeki64](../crt/_lseek--_lseeki64.md)|Reposition file pointer to given location|  
|[_open, _wopen](../crt/_open--_wopen.md)|Open file|  
|[_read](../crt/_read.md)|Read data from file|  
|[_sopen, _wsopen](../crt/_sopen--_wsopen.md), [_sopen_s, _wsopen_s](../crt/_sopen_s--_wsopen_s.md)|Open file for file sharing|  
|[_tell, _telli64](../crt/_tell--_telli64.md)|Get current file-pointer position|  
|[_umask](../crt/_umask.md), [_umask_s](../crt/_umask_s.md)|Set file-permission mask|  
|[_write](../crt/_write.md)|Write data to file|  
  
 `_dup` and `_dup2` are typically used to associate the predefined file descriptors with different files.  
  
## See Also  
 [Input and Output](../crt/input-and-output.md)   
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)   
 [System Calls](../crt/system-calls.md)