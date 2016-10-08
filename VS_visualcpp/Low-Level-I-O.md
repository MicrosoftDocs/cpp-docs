---
title: "Low-Level I-O"
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
H1: Low-Level I/O
ms.assetid: 53e11bdd-6720-481c-8b2b-3a3a569ed534
caps.latest.revision: 9
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
# Low-Level I-O
These functions invoke the operating system directly for lower-level operation than that provided by stream I/O. Low-level input and output calls do not buffer or format data.  
  
 Low-level routines can access the standard streams opened at program startup using the following predefined file descriptors.  
  
|Stream|File Descriptor|  
|------------|---------------------|  
|`stdin`|0|  
|`stdout`|1|  
|`stderr`|2|  
  
 Low-level I/O routines set the [errno](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) global variable when an error occurs. You must include STDIO.H when you use low-level functions only if your program requires a constant that is defined in STDIO.H, such as the end-of-file indicator (`EOF`).  
  
### Low-Level I/O Functions  
  
|Function|Use|  
|--------------|---------|  
|[_close](../VS_visualcpp/_close.md)|Close file|  
|[_commit](../VS_visualcpp/_commit.md)|Flush file to disk|  
|[_creat, _wcreat](../VS_visualcpp/_creat--_wcreat.md)|Create file|  
|[_dup](../VS_visualcpp/_dup--_dup2.md)|Return next available file descriptor for given file|  
|[_dup2](../VS_visualcpp/_dup--_dup2.md)|Create second descriptor for given file|  
|[_eof](../VS_visualcpp/_eof.md)|Test for end of file|  
|[_lseek, _lseeki64](../VS_visualcpp/_lseek--_lseeki64.md)|Reposition file pointer to given location|  
|[_open, _wopen](../VS_visualcpp/_open--_wopen.md)|Open file|  
|[_read](../VS_visualcpp/_read.md)|Read data from file|  
|[_sopen, _wsopen](../VS_visualcpp/_sopen--_wsopen.md), [_sopen_s, _wsopen_s](../VS_visualcpp/_sopen_s--_wsopen_s.md)|Open file for file sharing|  
|[_tell, _telli64](../VS_visualcpp/_tell--_telli64.md)|Get current file-pointer position|  
|[_umask](../VS_visualcpp/_umask.md), [_umask_s](../VS_visualcpp/_umask_s.md)|Set file-permission mask|  
|[_write](../VS_visualcpp/_write.md)|Write data to file|  
  
 `_dup` and `_dup2` are typically used to associate the predefined file descriptors with different files.  
  
## See Also  
 [Input and Output](../VS_visualcpp/Input-and-Output.md)   
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)   
 [System Calls](../VS_visualcpp/System-Calls.md)