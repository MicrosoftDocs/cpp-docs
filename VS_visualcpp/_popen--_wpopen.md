---
title: "_popen, _wpopen"
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
  - _popen
  - _wpopen
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
ms.assetid: eb718ff2-c87d-4bd4-bd2e-ba317c3d6973
caps.latest.revision: 15
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
# _popen, _wpopen
Creates a pipe and executes a command.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
  
      FILE *_popen(  
const char *command,  
const char *mode   
);  
FILE *_wpopen(  
const wchar_t *command,  
const wchar_t *mode   
);  
```  
  
#### Parameters  
 *command*  
 Command to be executed.  
  
 *mode*  
 Mode of the returned stream.  
  
## Return Value  
 Returns a stream associated with one end of the created pipe. The other end of the pipe is associated with the spawned command's standard input or standard output. The functions return **NULL** on an error. If the error is an invalid parameter, such as if *command* or *mode* is a null pointer, or *mode* is not a valid mode, `errno` is set to `EINVAL`. See the Remarks section for valid modes.  
  
 For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 The `_popen` function creates a pipe and asynchronously executes a spawned copy of the command processor with the specified string *command*. The character string *mode* specifies the type of access requested, as follows.  
  
 **"r"**  
 The calling process can read the spawned command's standard output using the returned stream.  
  
 **"w"**  
 The calling process can write to the spawned command's standard input using the returned stream.  
  
 **"b"**  
 Open in binary mode.  
  
 **"t"**  
 Open in text mode.  
  
> [!NOTE]
>  If used in a Windows program, the `_popen` function returns an invalid file pointer that causes the program to stop responding indefinitely. `_popen` works properly in a console application. To create a Windows application that redirects input and output, see [Creating a Child Process with Redirected Input and Output](http://msdn.microsoft.com/library/windows/desktop/ms682499) in the Windows SDK.  
  
 `_wpopen` is a wide-character version of `_popen`; the *path* argument to `_wpopen` is a wide-character string. `_wpopen` and `_popen` behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tpopen`|`_popen`|`_popen`|`_wpopen`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_popen`|<stdio.h>|  
|`_wpopen`|<stdio.h> or <wchar.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## Example  
  
```  
// crt_popen.c  
/* This program uses _popen and _pclose to receive a   
 * stream of text from a system process.  
 */  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
  
   char   psBuffer[128];  
   FILE   *pPipe;  
  
        /* Run DIR so that it writes its output to a pipe. Open this  
         * pipe with read text attribute so that we can read it   
         * like a text file.   
         */  
  
   if( (pPipe = _popen( "dir *.c /on /p", "rt" )) == NULL )  
      exit( 1 );  
  
   /* Read pipe until end of file, or an error occurs. */  
  
   while(fgets(psBuffer, 128, pPipe))  
   {  
      printf(psBuffer);  
   }  
  
   /* Close pipe and print return value of pPipe. */  
   if (feof( pPipe))  
   {  
     printf( "\nProcess returned %d\n", _pclose( pPipe ) );  
   }  
   else  
   {  
     printf( "Error: Failed to read the pipe to the end.\n");  
   }  
}  
```  
  
## Sample Output  
 This output assumes that there is only one file in the current directory with a .c file name extension.  
  
```  
 Volume in drive C is CDRIVE  
 Volume Serial Number is 0E17-1702  
  
 Directory of D:\proj\console\test1  
  
07/17/98  07:26p                   780 popen.c  
               1 File(s)            780 bytes  
                             86,597,632 bytes free  
  
Process returned 0  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [_pclose](../VS_visualcpp/_pclose.md)   
 [_pipe](../VS_visualcpp/_pipe.md)