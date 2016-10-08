---
title: "_flushall"
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
apiname: 
  - _flushall
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
ms.assetid: 2cd73562-6d00-4ca2-b13c-80d0ae7870b5
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _flushall
Flushes all streams; clears all buffers.  
  
## Syntax  
  
```  
int _flushall( void );  
```  
  
## Return Value  
 `_flushall` returns the number of open streams (input and output). There is no error return.  
  
## Remarks  
 By default, the `_flushall` function writes to appropriate files the contents of all buffers associated with open output streams. All buffers associated with open input streams are cleared of their current contents. (These buffers are normally maintained by the operating system, which determines the optimal time to write the data automatically to disk: when a buffer is full, when a stream is closed, or when a program terminates normally without closing streams.)  
  
 If a read follows a call to `_flushall`, new data is read from the input files into the buffers. All streams remain open after the call to `_flushall`.  
  
 The commit-to-disk feature of the run-time library lets you ensure that critical data is written directly to disk rather than to the operating system buffers. Without rewriting an existing program, you can enable this feature by linking the program's object files with Commode.obj. In the resulting executable file, calls to `_flushall` write the contents of all buffers to disk. Only `_flushall` and `fflush` are affected by Commode.obj.  
  
 For information about controlling the commit-to-disk feature, see [Stream I/O](../VS_visualcpp/Stream-I-O.md), [fopen](../VS_visualcpp/fopen--_wfopen.md), and [_fdopen](../VS_visualcpp/_fdopen--_wfdopen.md).  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_flushall`|<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_flushall.c  
// This program uses _flushall  
// to flush all open buffers.  
  
#include <stdio.h>  
  
int main( void )  
{  
   int numflushed;  
  
   numflushed = _flushall();  
   printf( "There were %d streams flushed\n", numflushed );  
}  
```  
  
 **There were 3 streams flushed**   
## .NET Framework Equivalent  
  
-   [System::IO::FileStream::Flush](https://msdn.microsoft.com/en-us/library/2bw4h516.aspx)  
  
-   [System::IO::StreamWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.flush.aspx)  
  
-   [System::IO::TextWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.textwriter.flush.aspx)  
  
-   [System::IO::BinaryWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.flush.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [_commit](../VS_visualcpp/_commit.md)   
 [fclose, _fcloseall](../VS_visualcpp/fclose--_fcloseall.md)   
 [fflush](../VS_visualcpp/fflush.md)   
 [setvbuf](../VS_visualcpp/setvbuf.md)