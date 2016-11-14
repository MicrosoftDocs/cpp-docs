---
title: "_dup, _dup2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_dup"
  - "_dup2"
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
  - "_dup2"
  - "_dup"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_dup2 function"
  - "dup function"
  - "file handles [C++], duplicating"
  - "file handles [C++], reassigning"
  - "dup2 function"
  - "_dup function"
ms.assetid: 4d07e92c-0d76-4832-a770-dfec0e7a0cfa
caps.latest.revision: 19
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
# _dup, _dup2
Creates a second file descriptor for an open file (`_dup`), or reassigns a file descriptor (`_dup2`).  
  
## Syntax  
  
```  
int _dup(   
   int fd   
);  
int _dup2(   
   int fd1,  
   int fd2   
);  
```  
  
#### Parameters  
 `fd`, `fd1`  
 File descriptors referring to open file.  
  
 `fd2`  
 Any file descriptor.  
  
## Return Value  
 `_dup` returns a new file descriptor. `_dup2` returns 0 to indicate success. If an error occurs, each function returns –1 and sets `errno` to `EBADF` if the file descriptor is invalid or to `EMFILE` if no more file descriptors are available. In the case of an invalid file descriptor, the function also invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).  
  
 For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_dup` and `_dup2` functions associate a second file descriptor with a currently open file. These functions can be used to associate a predefined file descriptor, such as that for `stdout`, with a different file. Operations on the file can be carried out using either file descriptor. The type of access allowed for the file is unaffected by the creation of a new descriptor. `_dup` returns the next available file descriptor for the given file. `_dup2` forces `fd2` to refer to the same file as `fd1`. If `fd2` is associated with an open file at the time of the call, that file is closed.  
  
 Both `_dup` and `_dup2` accept file descriptors as parameters. To pass a stream `(FILE *)` to either of these functions, use [_fileno](../../c-runtime-library/reference/fileno.md). The `fileno` routine returns the file descriptor currently associated with the given stream. The following example shows how to associate `stderr` (defined as `FILE` `*` in Stdio.h) with a file descriptor:  
  
```  
int cstderr = _dup( _fileno( stderr ));  
```  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_dup`|\<io.h>|  
|`_dup2`|\<io.h>|  
  
 The console is not supported in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_dup.c  
// This program uses the variable old to save  
// the original stdout. It then opens a new file named  
// DataFile and forces stdout to refer to it. Finally, it  
// restores stdout to its original state.  
//  
  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int old;  
   FILE *DataFile;  
  
   old = _dup( 1 );   // "old" now refers to "stdout"   
                      // Note:  file descriptor 1 == "stdout"   
   if( old == -1 )  
   {  
      perror( "_dup( 1 ) failure" );  
      exit( 1 );  
   }  
   _write( old, "This goes to stdout first\n", 26 );  
   if( fopen_s( &DataFile, "data", "w" ) != 0 )  
   {  
      puts( "Can't open file 'data'\n" );  
      exit( 1 );  
   }  
  
   // stdout now refers to file "data"   
   if( -1 == _dup2( _fileno( DataFile ), 1 ) )  
   {  
      perror( "Can't _dup2 stdout" );  
      exit( 1 );  
   }  
   puts( "This goes to file 'data'\n" );  
  
   // Flush stdout stream buffer so it goes to correct file   
   fflush( stdout );  
   fclose( DataFile );  
  
   // Restore original stdout   
   _dup2( old, 1 );  
   puts( "This goes to stdout\n" );  
   puts( "The file 'data' contains:" );  
   _flushall();  
   system( "type data" );  
}  
```  
  
```Output  
This goes to stdout first  
This goes to stdout  
  
The file 'data' contains:  
This goes to file 'data'  
```  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)