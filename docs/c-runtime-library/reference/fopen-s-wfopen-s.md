---
title: "fopen_s, _wfopen_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wfopen_s"
  - "fopen_s"
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
  - "fopen_s"
  - "_tfopen_s"
  - "_wfopen_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wfopen_s function"
  - "opening files, for file I/O"
  - "_tfopen_s function"
  - "tfopen_s function"
  - "wfopen_s function"
  - "fopen_s function"
  - "Unicode [C++], creating files"
  - "Unicode [C++], writing files"
  - "files [C++], opening"
  - "Unicode [C++], files"
ms.assetid: c534857e-39ee-4a3f-bd26-dfe551ac96c3
caps.latest.revision: 41
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
# fopen_s, _wfopen_s
Opens a file. These versions of [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t fopen_s(   
   FILE** pFile,  
   const char *filename,  
   const char *mode   
);  
errno_t _wfopen_s(  
   FILE** pFile,  
   const wchar_t *filename,  
   const wchar_t *mode   
);  
```  
  
#### Parameters  
 [out] `pFile`  
 A pointer to the file pointer that will receive the pointer to the opened file.  
  
 [in] `filename`  
 Filename.  
  
 [in] `mode`  
 Type of access permitted.  
  
## Return Value  
 Zero if successful; an error code on failure. See [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information about these error codes.  
  
### Error Conditions  
  
|`pFile`|`filename`|`mode`|Return Value|Contents of`pFile`|  
|-------------|----------------|------------|------------------|------------------------|  
|`NULL`|any|any|`EINVAL`|unchanged|  
|any|`NULL`|any|`EINVAL`|unchanged|  
|any|any|NULL|`EINVAL`|unchanged|  
  
## Remarks  
 Files that are opened by `fopen_s` and `_wfopen_s` are not sharable. If you require that a file be sharable, use [_fsopen, _wfsopen](../../c-runtime-library/reference/fsopen-wfsopen.md) with the appropriate sharing mode constant—for example, `_SH_DENYNO` for read/write sharing.  
  
 The `fopen_s` function opens the file that's specified by `filename`. `_wfopen_s` is a wide-character version of `fopen_s`; the arguments to `_wfopen_s` are wide-character strings. `_wfopen_s` and `fopen_s` behave identically otherwise.  
  
 `fopen_s` accepts paths that are valid on the file system at the point of execution; UNC paths and paths that involve mapped network drives are accepted by `fopen_s` as long as the system that's executing the code has access to the share or mapped network drive at the time of execution. When you construct paths for `fopen_s`, don't make assumptions about the availability of drives, paths, or network shares in the execution environment. You can use either forward slashes (/) or backslashes (\\) as the directory separators in a path.  
  
 These functions validate their parameters. If `pFile`, `filename`, or `mode` is a null pointer, these functions generate an invalid parameter exception, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).  
  
 Always check the return value to see if the function succeeded before you perform any further operations on the file. If an error occurs, the error code is returned and the global variable `errno` is set. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Unicode support  
 `fopen_s` supports Unicode file streams. To open a new or existing Unicode file, pass a `ccs` flag that specifies the desired encoding to `fopen_s`:  
  
 `fopen_s(&fp, "newfile.txt", "rw,`   `ccs=`  `encoding` `");`  
  
 Allowed values of `encoding` are `UNICODE`, `UTF-8`, and `UTF-16LE`. If there no value is specified for `encoding`, `fopen_s` uses ANSI encoding.  
  
 If the file already exists and is opened for reading or appending, the Byte Order Mark (BOM), if present in the file, determines the encoding. The BOM encoding takes precedence over the encoding that's specified by the `ccs` flag. The `ccs` encoding is only used when no BOM is present or if the file is a new file.  
  
> [!NOTE]
>  BOM-detection only applies to files that are opened in Unicode mode; that is, by passing the `ccs` flag.  
  
 The following table summarizes the modes for various `ccs` flags that are given to `fopen_s` and for Byte Order Marks in the file.  
  
### Encodings Used Based on ccs Flag and BOM  
  
|`ccs` flag|No BOM (or new file)|BOM: UTF-8|BOM: UTF-16|  
|----------------|----------------------------|-----------------|------------------|  
|`UNICODE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
|`UTF-8`|`UTF-8`|`UTF-8`|`UTF-16LE`|  
|`UTF-16LE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
  
 Files that are opened for writing in Unicode mode have a BOM written to them automatically.  
  
 If `mode` is "`a, ccs=<encoding>`", `fopen_s` first tries to open the file with both read access and write access. If successful, the function reads the BOM to determine the encoding for the file; if unsuccessful, the function uses the default encoding for the file. In either case, `fopen_s` then re-opens the file with write-only access. (This applies to `a` mode only, not `a+`.)  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tfopen_s`|`fopen_s`|`fopen_s`|`_wfopen_s`|  
  
 The character string `mode` specifies the kind of access that's requested for the file, as follows.  
  
 `"r"`  
 Opens for reading. If the file does not exist or cannot be found, the `fopen_s` call fails.  
  
 `"w"`  
 Opens an empty file for writing. If the file exists, its contents are destroyed.  
  
 `"a"`  
 Opens for writing at the end of the file (appending) without removing the EOF marker before writing new data to the file. Creates the file if it doesn't exist.  
  
 `"r+"`  
 Opens for both reading and writing. (The file must exist.)  
  
 `"w+"`  
 Opens an empty file for both reading and writing. If the file exists, its contents are destroyed.  
  
 `"a+"`  
 Opens for reading and appending. The appending operation includes the removal of the EOF marker before new data is written to the file and the EOF marker is restored after writing is complete. Creates the file if it doesn't exist.  
  
 When a file is opened by using the `"a"` or `"a+"` access type, all write operations occur at the end of the file. The file pointer can be repositioned by using `fseek` or `rewind`, but it's always moved back to the end of the file before any write operation is carried out so that existing data cannot be overwritten.  
  
 The `"a"` mode does not remove the EOF marker before appending to the file. After appending has occurred, the MS-DOS TYPE command only shows data up to the original EOF marker and not any data that's appended to the file. The `"a+"` mode does remove the EOF marker before appending to the file. After appending, the MS-DOS TYPE command shows all data in the file. The `"a+"` mode is required for appending to a stream file that is terminated by using the CTRL+Z EOF marker.  
  
 When the `"r+",``"w+",` or `"a+"` access type is specified, both reading and writing are allowed. (The file is said to be open for "update".) However, when you switch from reading to writing, the input operation must encounter an EOF marker. If there is no EOF, you must use an intervening call to a file-positioning function. The file-positioning functions are `fsetpos`, `fseek`, and `rewind`. When you switch from writing to reading, you must use an intervening call to either `fflush` or to a file-positioning function.  
  
 In addition to the above values, the following characters can be included in `mode` to specify the translation mode for newline characters:  
  
 `t`  
 Open in text (translated) mode. In this mode, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading/writing with `"a+"`, `fopen_s` checks for a CTRL+Z at the end of the file and removes it, if possible. This is done because using `fseek` and `ftell` to move within a file that ends with a CTRL+Z, may cause `fseek` to behave improperly near the end of the file.  
  
 Also, in text mode, carriage return–linefeed combinations are translated into single linefeeds on input, and linefeed characters are translated to carriage return–linefeed combinations on output. When a Unicode stream-I/O function operates in text mode (the default), the source or destination stream is assumed to be a sequence of multibyte characters. Therefore, the Unicode stream-input functions convert multibyte characters to wide characters (as if by a call to the `mbtowc` function). For the same reason, the Unicode stream-output functions convert wide characters to multibyte characters (as if by a call to the `wctomb` function).  
  
 `b`  
 Open in binary (untranslated) mode; translations involving carriage-return and linefeed characters are suppressed.  
  
 If `t` or `b` is not given in `mode`, the default translation mode is defined by the global variable [_fmode](../../c-runtime-library/fmode.md). If `t` or `b` is prefixed to the argument, the function fails and returns `NULL`.  
  
 For more information about using text and binary modes in Unicode and multibyte stream-I/O, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) and [Unicode Stream I/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
 `c`  
 Enable the commit flag for the associated `filename` so that the contents of the file buffer are written directly to disk if either `fflush` or `_flushall` is called.  
  
 `n`  
 Reset the commit flag for the associated `filename` to "no-commit." This is the default. It also overrides the global commit flag if you link your program with COMMODE.OBJ. The global commit flag default is "no-commit" unless you explicitly link your program with COMMODE.OBJ (see [Link Options](../../c-runtime-library/link-options.md)).  
  
 `N`  
 Specifies that the file is not inherited by child processes.  
  
 `S`  
 Specifies that caching is optimized for, but not restricted to, sequential access from disk.  
  
 `R`  
 Specifies that caching is optimized for, but not restricted to, random access from disk.  
  
 `T`  
 Specifies a file as temporary. If possible, it is not flushed to disk.  
  
 `D`  
 Specifies a file as temporary. It is deleted when the last file pointer is closed.  
  
 `ccs=ENCODING`  
 Specify the coded character set to use (UTF-8, UTF-16LE, and UNICODE) for this file. Leave this unspecified if you want ANSI encoding.  
  
 Valid characters for the `mode` string used in `fopen_s` and `_fdopen` correspond to `oflag` arguments used in [_open](../../c-runtime-library/reference/open-wopen.md) and [_sopen](../../c-runtime-library/reference/sopen-wsopen.md), as follows.  
  
|Characters in mode string|Equivalent `oflag` value for `_open`/`_sopen`|  
|-------------------------------|----------------------------------------------------|  
|`a`|`_O_WRONLY &#124; _O_APPEND` (usually `_O_WRONLY &#124; _O_CREAT &#124;``_O_APPEND`)|  
|`a+`|`_O_RDWR &#124; _O_APPEND` (usually `_O_RDWR &#124; _O_APPEND &#124; _O_CREAT` )|  
|`r`|`_O_RDONLY`|  
|`r+`|`_O_RDWR`|  
|`w`|`_O_WRONLY` (usually `_O_WRONLY &#124;``_O_CREAT &#124; _O_TRUNC`)|  
|`w+`|`_O_RDWR` (usually `_O_RDWR &#124; _O_CREAT &#124; _O_TRUNC`)|  
|`b`|`_O_BINARY`|  
|`t`|`_O_TEXT`|  
|`c`|None|  
|`n`|None|  
|`S`|`_O_SEQUENTIAL`|  
|`R`|`_O_RANDOM`|  
|`T`|`_O_SHORTLIVED`|  
|`D`|`_O_TEMPORARY`|  
|`ccs=UNICODE`|`_O_WTEXT`|  
|`ccs=UTF-8`|`_O_UTF8`|  
|`ccs=UTF-16LE`|`_O_UTF16`|  
  
 If you are using `rb` mode, won't need to port your code, and expect to read a lot of the file and/or don't care about network performance, memory mapped Win32 files might also be an option.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fopen_s`|\<stdio.h>|  
|`_wfopen_s`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
 The `c`, `n`, and `t` `mode` options are Microsoft extensions for `fopen_s` and `_fdopen` and should not be used where ANSI portability is desired.  
  
## Example  
  
```  
  
      // crt_fopen_s.c  
// This program opens two files. It uses  
// fclose to close the first file and  
// _fcloseall to close all remaining files.  
  
#include <stdio.h>  
  
FILE *stream, *stream2;  
  
int main( void )  
{  
   errno_t err;  
  
   // Open for read (will fail if file "crt_fopen_s.c" does not exist)  
   err  = fopen_s( &stream, "crt_fopen_s.c", "r" );  
   if( err == 0 )  
   {  
      printf( "The file 'crt_fopen_s.c' was opened\n" );  
   }  
   else  
   {  
      printf( "The file 'crt_fopen_s.c' was not opened\n" );  
   }  
  
   // Open for write   
   err = fopen_s( &stream2, "data2", "w+" );  
   if( err == 0 )  
   {  
      printf( "The file 'data2' was opened\n" );  
   }  
   else  
   {  
      printf( "The file 'data2' was not opened\n" );  
   }  
  
   // Close stream if it is not NULL   
   if( stream )  
   {  
      err = fclose( stream );  
      if ( err == 0 )  
      {  
         printf( "The file 'crt_fopen_s.c' was closed\n" );  
      }  
      else  
      {  
         printf( "The file 'crt_fopen_s.c' was not closed\n" );  
      }  
   }  
  
   // All other files are closed:  
   int numclosed = _fcloseall( );  
   printf( "Number of files closed by _fcloseall: %u\n", numclosed );  
}  
```  
  
```Output  
The file 'crt_fopen_s.c' was opened  
The file 'data2' was opened  
Number of files closed by _fcloseall: 1  
```  
  
## .NET Framework Equivalent  
  
-   [System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx)  
  
-   <xref:System.IO.FileStream.%23ctor%2A>  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [_fileno](../../c-runtime-library/reference/fileno.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)