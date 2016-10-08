---
title: "fflush"
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
  - fflush
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
ms.assetid: 8bbc753f-dc74-4e77-b563-74da2835e92b
caps.latest.revision: 16
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
# fflush
Flushes a stream.  
  
## Syntax  
  
```  
int fflush(   
   FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 `fflush` returns 0 if the buffer was successfully flushed. The value 0 is also returned in cases in which the specified stream has no buffer or is open for reading only. A return value of `EOF` indicates an error.  
  
> [!NOTE]
>  If `fflush` returns `EOF`, data may have been lost due to a write failure. When setting up a critical error handler, it is safest to turn buffering off with the `setvbuf` function or to use low-level I/O routines such as `_open`, `_close`, and `_write` instead of the stream I/O functions.  
  
## Remarks  
 The `fflush` function flushes the stream `stream`. If the stream was opened in write mode, or it was opened in update mode and the last operation was a write, the contents of the stream buffer are written to the underlying file or device and the buffer is discarded. If the stream was opened in read mode, or if the stream has no buffer, the call to `fflush` has no effect, and any buffer is retained. A call to `fflush` negates the effect of any prior call to `ungetc` for the stream. The stream remains open after the call.  
  
 If `stream` is `NULL`, the behavior is the same as a call to `fflush` on each open stream. All streams opened in write mode and all streams opened in update mode where the last operation was a write are flushed. The call has no effect on other streams.  
  
 Buffers are normally maintained by the operating system, which determines the optimal time to write the data automatically to disk: when a buffer is full, when a stream is closed, or when a program terminates normally without closing the stream. The commit-to-disk feature of the run-time library lets you ensure that critical data is written directly to disk rather than to the operating-system buffers. Without rewriting an existing program, you can enable this feature by linking the program's object files with COMMODE.OBJ. In the resulting executable file, calls to `_flushall` write the contents of all buffers to disk. Only `_flushall` and `fflush` are affected by COMMODE.OBJ.  
  
 For information about controlling the commit-to-disk feature, see [Stream I/O](../VS_visualcpp/Stream-I-O.md), [fopen](../VS_visualcpp/fopen--_wfopen.md), and [_fdopen](../VS_visualcpp/_fdopen--_wfdopen.md).  
  
 This function locks the calling thread and is therefore thread-safe. For a non-locking version, see `_fflush_nolock`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fflush`|<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fflush.c  
#include <stdio.h>  
#include <conio.h>  
  
int main( void )  
{  
   int integer;  
   char string[81];  
  
   // Read each word as a string.  
   printf( "Enter a sentence of four words with scanf: " );  
   for( integer = 0; integer < 4; integer++ )  
   {  
      scanf_s( "%s", string, sizeof(string) );        
      printf( "%s\n", string );  
   }  
  
   // You must flush the input buffer before using gets.   
   // fflush on input stream is an extension to the C standard   
   fflush( stdin );     
   printf( "Enter the same sentence with gets: " );  
   gets_s( string, sizeof(string) );  
   printf( "%s\n", string );  
}  
```  
  
  **`This is a test This is a test` `This is a test This is a test`Enter a sentence of four words with scanf: This is a test**  
**This**  
**is**  
**a**  
**test**  
**Enter the same sentence with gets: This is a test**  
**This is a test**   
## .NET Framework Equivalent  
 [System::IO::FileStream::Flush](https://msdn.microsoft.com/en-us/library/2bw4h516.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [fclose, _fcloseall](../VS_visualcpp/fclose--_fcloseall.md)   
 [_flushall](../VS_visualcpp/_flushall.md)   
 [setvbuf](../VS_visualcpp/setvbuf.md)