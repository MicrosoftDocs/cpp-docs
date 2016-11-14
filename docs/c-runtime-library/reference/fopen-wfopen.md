---
title: "fopen, _wfopen | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wfopen"
  - "fopen"
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
  - "fopen"
  - "_wfopen"
  - "_tfopen"
  - "corecrt_wstdio/_wfopen"
  - "stdio/fopen"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "opening files, for file I/O"
  - "wfopen function"
  - "tfopen function"
  - "_tfopen function"
  - "_wfopen function"
  - "files [C++], opening"
  - "fopen function"
ms.assetid: e868993f-738c-4920-b5e4-d8f2f41f933d
caps.latest.revision: 56
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# fopen, _wfopen
Opens a file. More-secure versions of these functions that perform additional parameter validation and return error codes are available; see [fopen_s, _wfopen_s](../../c-runtime-library/reference/fopen-s-wfopen-s.md).  
  
## Syntax  
  
```  
FILE *fopen(   
   const char *filename,  
   const char *mode   
);  
FILE *_wfopen(   
   const wchar_t *filename,  
   const wchar_t *mode   
);  
```  
  
#### Parameters  
 `filename`  
 File name.  
  
 `mode`  
 Kind of access that's enabled.  
  
## Return Value  
 Each of these functions returns a pointer to the open file. A null pointer value indicates an error. If `filename` or `mode` is `NULL` or an empty string, these functions trigger the invalid parameter handler, which is described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `NULL` and set `errno` to `EINVAL`.  
  
 For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `fopen` function opens the file that is specified by `filename`. By default, a narrow `filename` string is interpreted using the ANSI codepage (CP_ACP). In Windows Desktop applications this can be changed to the OEM codepage (CP_OEMCP) by using the [SetFileApisToOEM](https://msdn.microsoft.com/library/windows/desktop/aa365534\(v=vs.85\).aspx) function. You can use the [AreFileApisANSI](https://msdn.microsoft.com/library/windows/desktop/aa363781\(v=vs.85\).aspx) function to determine whether `filename` is interpreted using the ANSI or the system default OEM codepage. `_wfopen` is a wide-character version of `fopen`; the arguments to `_wfopen` are wide-character strings. Otherwise, `_wfopen` and `fopen` behave identically. Just using `_wfopen` does not affect the coded character set that is used in the file stream.  
  
 `fopen` accepts paths that are valid on the file system at the point of execution; `fopen` accepts UNC paths and paths that involve mapped network drives as long as the system that executes the code has access to the share or mapped drive at the time of execution. When you construct paths for `fopen`, make sure that drives, paths, or network shares will be available in the execution environment. You can use either forward slashes (/) or backslashes (\\) as the directory separators in a path.  
  
 Always check the return value to see whether the pointer is NULL before you perform any additional operations on the file. If an error occurs, the global variable `errno` is set and may be used to obtain specific error information. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Unicode Support  
 `fopen` supports Unicode file streams. To open a Unicode file, pass a `ccs` flag that specifies the desired encoding to `fopen`, as follows.  
  
 `FILE *fp = fopen("newfile.txt", "rt+, ccs=encoding");`  
  
 Allowed values of `encoding` are `UNICODE`, `UTF-8`, and `UTF-16LE`.  
  
 When a file is opened in Unicode mode, input functions translate the data that's read from the file into UTF-16 data stored as type `wchar_t`. Functions that write to a file opened in Unicode mode expect buffers that contain UTF-16 data stored as type `wchar_t`. If the file is encoded as UTF-8, then UTF-16 data is translated into UTF-8 when it is written, and the file's UTF-8-encoded content is translated into UTF-16 when it is read. An attempt to read or write an odd number of bytes in Unicode mode causes a [parameter validation](../../c-runtime-library/parameter-validation.md) error. To read or write data that's stored in your program as UTF-8, use a text or binary file mode instead of a Unicode mode. You are responsible for any required encoding translation.  
  
 If the file already exists and is opened for reading or appending, the Byte Order Mark (BOM), if it present in the file, determines the encoding. The BOM encoding takes precedence over the encoding that is specified by the `ccs` flag. The `ccs` encoding is only used when no BOM is present or the file is a new file.  
  
> [!NOTE]
>  BOM detection only applies to files that are opened in Unicode mode (that is, by passing the `ccs` flag).  
  
 The following table summarizes the modes that are used for various `ccs` flags given to `fopen` and Byte Order Marks in the file.  
  
### Encodings Used Based on ccs Flag and BOM  
  
|`ccs` flag|No BOM (or new file)|BOM: UTF-8|BOM: UTF-16|  
|----------------|----------------------------|-----------------|------------------|  
|`UNICODE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
|`UTF-8`|`UTF-8`|`UTF-8`|`UTF-16LE`|  
|`UTF-16LE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
  
 Files opened for writing in Unicode mode have a BOM written to them automatically.  
  
 If `mode` is "`a, ccs=<encoding>`", `fopen` first tries to open the file by using both read and write access. If this succeeds, the function reads the BOM to determine the encoding for the file; if this fails, the function uses the default encoding for the file. In either case, `fopen` will then re-open the file by using write-only access. (This applies to `a` mode only, not to `a+` mode.)  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tfopen`|`fopen`|`fopen`|`_wfopen`|  
  
 The character string `mode` specifies the kind of access that is requested for the file, as follows.  
  
 `"r"`  
 Opens for reading. If the file does not exist or cannot be found, the `fopen` call fails.  
  
 `"w"`  
 Opens an empty file for writing. If the given file exists, its contents are destroyed.  
  
 `"a"`  
 Opens for writing at the end of the file (appending) without removing the end-of-file (EOF) marker before new data is written to the file. Creates the file if it does not exist.  
  
 `"r+"`  
 Opens for both reading and writing. The file must exist.  
  
 `"w+"`  
 Opens an empty file for both reading and writing. If the file exists, its contents are destroyed.  
  
 `"a+"`  
 Opens for reading and appending. The appending operation includes the removal of the EOF marker before new data is written to the file. The EOF marker is not restored after writing is completed. Creates the file if it does not exist.  
  
 When a file is opened by using the `"a"` access type or the `"a+"` access type, all write operations occur at the end of the file. The file pointer can be repositioned by using `fseek` or `rewind`, but is always moved back to the end of the file before any write operation is performed. Therefore, existing data cannot be overwritten.  
  
 The `"a"` mode does not remove the EOF marker before it appends to the file. After appending has occurred, the MS-DOS TYPE command only shows data up to the original EOF marker and not any data appended to the file. Before it appends to the file, the `"a+"` mode does remove the EOF marker. After appending, the MS-DOS TYPE command shows all data in the file. The `"a+"` mode is required for appending to a stream file that is terminated with the CTRL+Z EOF marker.  
  
 When the `"r+"`, `"w+"`, or `"a+"` access type is specified, both reading and writing are enabled (the file is said to be open for "update"). However, when you switch from reading to writing, the input operation must encounter an EOF marker. If there is no EOF, you must use an intervening call to a file positioning function. The file positioning functions are `fsetpos`, `fseek`, and `rewind`. When you switch from writing to reading, you must use an intervening call to either `fflush` or to a file positioning function.  
  
 In addition to the earlier values, the following characters can be appended to `mode` to specify the translation mode for newline characters.  
  
 `t`  
 Open in text (translated) mode. In this mode, CTRL+Z is interpreted as an EOF character on input. In files that are opened for reading/writing by using `"a+"`, `fopen` checks for a CTRL+Z at the end of the file and removes it, if it is possible. This is done because using `fseek` and `ftell` to move within a file that ends with CTRL+Z may cause `fseek` to behave incorrectly near the end of the file.  
  
 In text mode, carriage return–linefeed combinations are translated into single linefeeds on input, and linefeed characters are translated to carriage return–linefeed combinations on output. When a Unicode stream-I/O function operates in text mode (the default), the source or destination stream is assumed to be a sequence of multibyte characters. Therefore, the Unicode stream-input functions convert multibyte characters to wide characters (as if by a call to the `mbtowc` function). For the same reason, the Unicode stream-output functions convert wide characters to multibyte characters (as if by a call to the `wctomb` function).  
  
 `b`  
 Open in binary (untranslated) mode; translations involving carriage-return and linefeed characters are suppressed.  
  
 If `t` or `b` is not given in `mode`, the default translation mode is defined by the global variable [_fmode](../../c-runtime-library/fmode.md). If `t` or `b` is prefixed to the argument, the function fails and returns `NULL`.  
  
 For more information about how to use text and binary modes in Unicode and multibyte stream-I/O, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) and [Unicode Stream I/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
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
 Specifies the coded character set to use (`UTF-8`, `UTF-16LE`, or `UNICODE`) for this file. Leave unspecified if you want ANSI encoding.  
  
 Valid characters for the `mode` string that is used in `fopen` and `_fdopen` correspond to `oflag` arguments that are used in [_open](../../c-runtime-library/reference/open-wopen.md) and [_sopen](../../c-runtime-library/reference/sopen-wsopen.md), as follows.  
  
|Characters in mode string|Equivalent `oflag` value for `_open`/`_sopen`|  
|-------------------------------|----------------------------------------------------|  
|`a`|`_O_WRONLY &#124; _O_APPEND` (usually `_O_WRONLY &#124; _O_CREAT &#124; _O_APPEND`)|  
|`a+`|`_O_RDWR &#124; _O_APPEND` (usually `_O_RDWR &#124; _O_APPEND &#124; _O_CREAT` )|  
|`r`|`_O_RDONLY`|  
|`r+`|`_O_RDWR`|  
|`w`|`_O_WRONLY` (usually `_O_WRONLY &#124; _O_CREAT &#124; _O_TRUNC`)|  
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
  
 If you are using `rb` mode, do not have to port code, and expect to read most of a large file or are not concerned about network performance, you might also consider whether to use memory mapped Win32 files as an option.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fopen`|\<stdio.h>|  
|`_wfopen`|\<stdio.h> or \<wchar.h>|  
  
 `_wfopen` is a Microsoft extension. For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
 The `c`, `n`, `t`, `S`, `R`, `T`, and `D` `mode` options are Microsoft extensions for `fopen` and `_fdopen` and should not be used where ANSI portability is desired.  
  
## Example  
 The following program opens two files.  It uses `fclose` to close the first file and `_fcloseall` to close all remaining files.  
  
```  
  
      // crt_fopen.c  
// compile with: /W3  
// This program opens two files. It uses  
// fclose to close the first file and  
// _fcloseall to close all remaining files.  
  
#include <stdio.h>  
  
FILE *stream, *stream2;  
  
int main( void )  
{  
   int numclosed;  
  
   // Open for read (will fail if file "crt_fopen.c" does not exist)  
   if( (stream  = fopen( "crt_fopen.c", "r" )) == NULL ) // C4996  
   // Note: fopen is deprecated; consider using fopen_s instead  
      printf( "The file 'crt_fopen.c' was not opened\n" );  
   else  
      printf( "The file 'crt_fopen.c' was opened\n" );  
  
   // Open for write   
   if( (stream2 = fopen( "data2", "w+" )) == NULL ) // C4996  
      printf( "The file 'data2' was not opened\n" );  
   else  
      printf( "The file 'data2' was opened\n" );  
  
   // Close stream if it is not NULL   
   if( stream)  
   {  
      if ( fclose( stream ) )  
      {  
         printf( "The file 'crt_fopen.c' was not closed\n" );  
      }  
   }  
  
   // All other files are closed:   
   numclosed = _fcloseall( );  
   printf( "Number of files closed by _fcloseall: %u\n", numclosed );  
}  
```  
  
```Output  
The file 'crt_fopen.c' was opened  
The file 'data2' was opened  
Number of files closed by _fcloseall: 1  
```  
  
## Example  
 The following program creates a file (or overwrites one if it exists), in text mode that has Unicode encoding.  It then writes two strings into the file and closes the file. The output is a file named _wfopen_test.xml, which contains the data from the output section.  
  
```  
// crt__wfopen.c  
// compile with: /W3  
// This program creates a file (or overwrites one if  
// it exists), in text mode using Unicode encoding.  
// It then writes two strings into the file  
// and then closes the file.  
  
#include <stdio.h>  
#include <stddef.h>  
#include <stdlib.h>  
#include <wchar.h>  
  
#define BUFFER_SIZE 50  
  
int main(int argc, char** argv)  
{  
wchar_t str[BUFFER_SIZE];  
size_t  strSize;  
FILE*   fileHandle;  
  
    // Create an the xml file in text and Unicode encoding mode.  
    if ((fileHandle = _wfopen( L"_wfopen_test.xml",L"wt+,ccs=UNICODE")) == NULL) // C4996  
    // Note: _wfopen is deprecated; consider using _wfopen_s instead  
    {  
        wprintf(L"_wfopen failed!\n");  
        return(0);  
    }  
  
    // Write a string into the file.  
    wcscpy_s(str, sizeof(str)/sizeof(wchar_t), L"<xmlTag>\n");  
    strSize = wcslen(str);  
    if (fwrite(str, sizeof(wchar_t), strSize, fileHandle) != strSize)  
    {  
        wprintf(L"fwrite failed!\n");  
    }  
  
    // Write a string into the file.  
    wcscpy_s(str, sizeof(str)/sizeof(wchar_t), L"</xmlTag>");  
    strSize = wcslen(str);  
    if (fwrite(str, sizeof(wchar_t), strSize, fileHandle) != strSize)  
    {  
        wprintf(L"fwrite failed!\n");  
    }  
  
    // Close the file.  
    if (fclose(fileHandle))  
    {  
        wprintf(L"fclose failed!\n");  
    }  
    return 0;  
}  
```  
  
## .NET Framework Equivalent  
  
-   [System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [_fileno](../../c-runtime-library/reference/fileno.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)   
 [_sopen, _wsopen](../../c-runtime-library/reference/sopen-wsopen.md)