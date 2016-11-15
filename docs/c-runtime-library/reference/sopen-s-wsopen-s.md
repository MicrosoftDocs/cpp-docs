---
title: "_sopen_s, _wsopen_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_sopen_s"
  - "_wsopen_s"
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
  - "_sopen_s"
  - "wsopen_s"
  - "_wsopen_s"
  - "sopen_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "sopen_s function"
  - "_wsopen_s function"
  - "wsopen_s function"
  - "opening files, for sharing"
  - "files [C++], opening"
  - "_sopen_s function"
  - "files [C++], sharing"
ms.assetid: 059a0084-d08c-4973-9174-55e391b72aa2
caps.latest.revision: 29
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
# _sopen_s, _wsopen_s
Opens a file for sharing. These versions of [_sopen and _wsopen](../../c-runtime-library/reference/sopen-wsopen.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t _sopen_s(  
   int* pfh,  
   const char *filename,  
   int oflag,  
   int shflag,  
   int pmode  
);  
errno_t _wsopen_s(  
   int* pfh,  
   const wchar_t *filename,  
   int oflag,  
   int shflag,  
   int pmode,  
);  
```  
  
#### Parameters  
 [out] `pfh`  
 The file handle, or -1 in the case of an error.  
  
 [in] `filename`  
 File name.  
  
 [in] `oflag`  
 The kind of operations allowed.  
  
 [in] `shflag`  
 The kind of sharing allowed.  
  
 [in] `pmode`  
 Permission setting.  
  
## Return Value  
 A nonzero return value indicates an error; in that case `errno` is set to one of the following values.  
  
 `EACCES`  
 The given path is a directory, or the file is read-only, but an open-for-writing operation was attempted.  
  
 `EEXIST`  
 `_O_CREAT` and `_O_EXCL` flags were specified, but `filename` already exists.  
  
 `EINVAL`  
 Invalid `oflag`, `shflag`, or `pmode` argument, or `pfh` or `filename` was a null pointer.  
  
 `EMFILE`  
 No more file descriptors available.  
  
 `ENOENT`  
 File or path not found.  
  
 If an invalid argument is passed to the function, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and `EINVAL` is returned.  
  
 For more information about these and other return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 In the case of an error, -1 is returned through `pfh` (unless `pfh` is a null pointer).  
  
## Remarks  
 The `_sopen_s` function opens the file specified by `filename` and prepares the file for shared reading or writing, as defined by `oflag` and `shflag`. `_wsopen_s` is a wide-character version of `_sopen_s`; the `filename` argument to `_wsopen_s` is a wide-character string. `_wsopen_s` and `_sopen_s` behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tsopen_s`|`_sopen_s`|`_sopen_s`|`_wsopen_s`|  
  
 The integer expression `oflag` is formed by combining one or more manifest constants, which are defined in \<fcntl.h>. When two or more constants form the argument `oflag`, they are combined with the bitwise-OR operator ( `|` ).  
  
 `_O_APPEND`  
 Repositions a file pointer to the end of the file before every write operation.  
  
 `_O_BINARY`  
 Opens a file in binary (untranslated) mode. (See [fopen](../../c-runtime-library/reference/fopen-wfopen.md) for a description of binary mode.)  
  
 `_O_CREAT`  
 Creates a file and opens it for writing. Has no effect if the file specified by `filename` exists.  
  
 `_O_CREAT | _O_SHORT_LIVED`  
 Creates a file as temporary and if possible does not flush to disk.  
  
 `_O_CREAT | _O_TEMPORARY`  
 Creates a file as temporary; the file is deleted when the last file descriptor is closed.  
  
 `_O_CREAT | _O_EXCL`  
 Returns an error value if the file specified by `filename` exists. Applies only when used with `_O_CREAT`.  
  
 `_O_NOINHERIT`  
 Prevents creation of a shared file descriptor.  
  
 `_O_RANDOM`  
 Specifies primarily random access from disk.  
  
 `_O_RDONLY`  
 Opens a file for reading only. Cannot be specified with `_O_RDWR` or `_O_WRONLY`.  
  
 `_O_RDWR`  
 Opens a file for both reading and writing. Cannot be specified with `_O_RDONLY` or `_O_WRONLY`.  
  
 `_O_SEQUENTIAL`  
 Specifies primarily sequential access from disk.  
  
 `_O_TEXT`  
 Opens a file in text (translated) mode. (For more information, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) and [fopen](../../c-runtime-library/reference/fopen-wfopen.md).)  
  
 `_O_TRUNC`  
 Opens a file and truncates it to zero length; the file must have write permission. Cannot be specified with `_O_RDONLY`. `_O_TRUNC` used with `_O_CREAT` opens an existing file or creates a file.  
  
> [!NOTE]
>  The `_O_TRUNC` flag destroys the contents of the specified file.  
  
 `_O_WRONLY`  
 Opens a file for writing only. Cannot be specified with `_O_RDONLY` or `_O_RDWR`.  
  
 `_O_U16TEXT`  
 Opens a file in Unicode UTF-16 mode.  
  
 `_O_U8TEXT`  
 Opens a file in Unicode UTF-8 mode.  
  
 `_O_WTEXT`  
 Opens a file in Unicode mode.  
  
 To specify the file access mode, you must specify either `_O_RDONLY`, `_O_RDWR`, or `_O_WRONLY`. There is no default value for the access mode.  
  
 When a file is opened in Unicode mode by using `_O_WTEXT`, `_O_U8TEXT`, or `_O_U16TEXT`, input functions translate the data that's read from the file into UTF-16 data stored as type `wchar_t`. Functions that write to a file opened in Unicode mode expect buffers that contain UTF-16 data stored as type `wchar_t`. If the file is encoded as UTF-8, then UTF-16 data is translated into UTF-8 when it is written, and the file's UTF-8-encoded content is translated into UTF-16 when it is read. An attempt to read or write an odd number of bytes in Unicode mode causes a parameter validation error. To read or write data that's stored in your program as UTF-8, use a text or binary file mode instead of a Unicode mode. You are responsible for any required encoding translation.  
  
 If `_sopen_s` is called with `_O_WRONLY | _O_APPEND` (append mode) and `_O_WTEXT`, `_O_U16TEXT`, or `_O_U8TEXT`, it first tries to open the file for reading and writing, read the BOM, then reopen it for writing only. If opening the file for reading and writing fails, it opens the file for writing only and uses the default value for the Unicode mode setting.  
  
 The argument `shflag` is a constant expression that consists of one of the following manifest constants, which are defined in \<share.h>.  
  
 `_SH_DENYRW`  
 Denies read and write access to a file.  
  
 `_SH_DENYWR`  
 Denies write access to a file.  
  
 `_SH_DENYRD`  
 Denies read access to a file.  
  
 `_SH_DENYNO`  
 Permits read and write access.  
  
 The `pmode` argument is always required, unlike in `_sopen`. When you specify `_O_CREAT`, if the file does not exist, `pmode` specifies the file's permission settings, which are set when the new file is closed the first time. Otherwise, `pmode` is ignored. `pmode` is an integer expression that contains one or both of the manifest constants `_S_IWRITE` and `_S_IREAD`, which are defined in \<sys\stat.h>. When both constants are given, they are combined with the bitwise-OR operator. The meaning of `pmode` is as follows.  
  
 `_S_IWRITE`  
 Writing permitted.  
  
 `_S_IREAD`  
 Reading permitted.  
  
 `_S_IREAD | _S_IWRITE`  
 Reading and writing permitted.  
  
 If write permission is not given, the file is read-only. In the Windows operating system, all files are readable; it is not possible to give write-only permission. Therefore, the modes `_S_IWRITE` and `_S_IREAD | _S_IWRITE` are equivalent.  
  
 `_sopen_s` applies the current file-permission mask to `pmode` before the permissions are set. (See [_umask](../../c-runtime-library/reference/umask.md).)  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_sopen_s`|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|  
|`_wsopen_s`|\<io.h> or \<wchar.h>|\<fcntl.h>, \<sys/types.h>, \<sys/stat.h>, \<share.h>|  
  
 `_sopen_s` and `_wsopen_s` are Microsoft extensions. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example for [_locking](../../c-runtime-library/reference/locking.md).  
  
## See Also  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_fsopen, _wfsopen](../../c-runtime-library/reference/fsopen-wfsopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)