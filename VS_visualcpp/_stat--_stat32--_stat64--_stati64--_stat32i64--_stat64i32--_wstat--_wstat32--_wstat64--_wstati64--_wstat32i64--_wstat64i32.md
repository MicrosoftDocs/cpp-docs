---
title: "_stat, _stat32, _stat64, _stati64, _stat32i64, _stat64i32, _wstat, _wstat32, _wstat64, _wstati64, _wstat32i64, _wstat64i32"
ms.custom: na
ms.date: 10/06/2016
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
  - _wstat64
  - _stati64
  - _stat32
  - _stat32i64
  - _stat
  - _wstati64
  - _wstat32
  - _wstat64i32
  - _wstat
  - _stat64
  - _stat64i32
  - _wstat32i64
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
  - api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
ms.assetid: 99a75ae6-ff26-47ad-af70-5ea7e17226a5
caps.latest.revision: 24
manager: ghogen
translation.priority.mt: 
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
# _stat, _stat32, _stat64, _stati64, _stat32i64, _stat64i32, _wstat, _wstat32, _wstat64, _wstati64, _wstat32i64, _wstat64i32
Get status information on a file.  
  
## Syntax  
  
```  
int _stat(  
   const char *path,  
   struct _stat *buffer   
);  
int _stat32(  
   const char *path,  
   struct __stat32 *buffer   
);  
int _stat64(  
   const char *path,  
   struct __stat64 *buffer   
);  
int _stati64(  
   const char *path,  
   struct _stati64 *buffer   
);  
int _stat32i64(  
   const char *path,  
   struct _stat32i64 *buffer   
);  
int _stat64i32(  
   const char *path,  
   struct _stat64i32 *buffer   
);  
int _wstat(  
   const wchar_t *path,  
   struct _stat *buffer   
);  
int _wstat32(  
   const wchar_t *path,  
   struct __stat32 *buffer   
);  
int _wstat64(  
   const wchar_t *path,  
   struct __stat64 *buffer   
);  
int _wstati64(  
   const wchar_t *path,  
   struct _stati64 *buffer   
);  
int _wstat32i64(  
   const wchar_t *path,  
   struct _stat32i64 *buffer   
);  
int _wstat64i32(  
   const wchar_t *path,  
   struct _stat64i32 *buffer   
);  
```  
  
#### Parameters  
 `path`  
 Pointer to a string containing the path of existing file or directory.  
  
 `buffer`  
 Pointer to structure that stores results.  
  
## Return Value  
 Each of these functions returns 0 if the file-status information is obtained. A return value of –1 indicates an error, in which case `errno` is set to `ENOENT`, indicating that the filename or path could not be found. A return value of `EINVAL` indicates an invalid parameter; `errno` is also set to `EINVAL` in this case.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) for more information on this, and other, return codes.  
  
 The date stamp on a file can be represented if it is later than midnight, January 1, 1970, and before 23:59:59, December 31, 3000, UTC, unless you use `_stat32` or `_wstat32`, or have defined `_USE_32BIT_TIME_T`, in which case the date can be represented only until 23:59:59 January 18, 2038, UTC.  
  
## Remarks  
 The `_stat` function obtains information about the file or directory specified by `path` and stores it in the structure pointed to by `buffer`. `_stat` automatically handles multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use.  
  
 `_wstat` is a wide-character version of `_stat`; the `path` argument to `_wstat` is a wide-character string. `_wstat` and `_stat` behave identically except that `_wstat` does not handle multibyte-character strings.  
  
 Variations of these functions support 32- or 64-bit time types, and 32- or 64-bit file lengths. The first numerical suffix (`32` or `64`) indicates the size of the time type used; the second suffix is either `i32` or `i64`, indicating whether the file size is represented as a 32-bit or 64-bit integer.  
  
 `_stat` is equivalent to `_stat64i32`, and `struct``_stat` contains a 64-bit time. This is true unless `_USE_32BIT_TIME_T` is defined, in which case the old behavior is in effect; `_stat` uses a 32-bit time, and `struct``_stat` contains a 32-bit time. The same is true for `_stati64`.  
  
> [!NOTE]
>  `_wstat` does not work with Windows Vista symbolic links. In these cases, `_wstat` will always report a file size of 0. `_stat` does work correctly with symbolic links.  
  
 This function validates its parameters. If either `path` or `buffer` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md).  
  
### Time Type and File Length Type Variations of _stat  
  
|Functions|_USE_32BIT_TIME_T defined?|Time type|File length type|  
|---------------|------------------------------------|---------------|----------------------|  
|`_stat`, `_wstat`|Not defined|64-bit|32-bit|  
|`_stat`, `_wstat`|Defined|32-bit|32-bit|  
|`_stat32`, `_wstat32`|Not affected by the macro definition|32-bit|32-bit|  
|`_stat64`, `_wstat64`|Not affected by the macro definition|64-bit|64-bit|  
|`_stati64`, `_wstati64`|Not defined|64-bit|64-bit|  
|`_stati64`, `_wstati64`|Defined|32-bit|64-bit|  
|`_stat32i64`, `_wstat32i64`|Not affected by the macro definition|32-bit|64-bit|  
|`_stat64i32`, `_wstat64i32`|Not affected by the macro definition|64-bit|32-bit|  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tstat`|`_stat`|`_stat`|`_wstat`|  
|`_tstat64`|`_stat64`|`_stat64`|`_wstat64`|  
|`_tstati64`|`_stati64`|`_stati64`|`_wstati64`|  
|`_tstat32i64`|`_stat32i64`|`_stat32i64`|`_wstat32i64`|  
|`_tstat64i32`|`_stat64i32`|`_stat64i32`|`_wstat64i32`|  
  
 The `_stat` structure, defined in SYS\STAT.H, includes the following fields.  
  
 `st_gid`  
 Numeric identifier of group that owns the file (UNIX-specific) This field will always be zero on Windows systems. A redirected file is classified as a Windows file.  
  
 `st_atime`  
 Time of last access of file. Valid on NTFS but not on FAT formatted disk drives.  
  
 `st_ctime`  
 Time of creation of file. Valid on NTFS but not on FAT formatted disk drives.  
  
 `st_dev`  
 Drive number of the disk containing the file (same as `st_rdev`).  
  
 `st_ino`  
 Number of the information node (the `inode`) for the file (UNIX-specific). On UNIX file systems, the `inode` describes the file date and time stamps, permissions, and content. When files are hard-linked to one another, they share the same `inode`. The `inode`, and therefore `st_ino`, has no meaning in the FAT, HPFS, or NTFS file systems.  
  
 `st_mode`  
 Bit mask for file-mode information. The `_S_IFDIR` bit is set if `path` specifies a directory; the `_S_IFREG` bit is set if `path` specifies an ordinary file or a device. User read/write bits are set according to the file's permission mode; user execute bits are set according to the filename extension.  
  
 `st_mtime`  
 Time of last modification of file.  
  
 `st_nlink`  
 Always 1 on non-NTFS file systems.  
  
 `st_rdev`  
 Drive number of the disk containing the file (same as `st_dev`).  
  
 `st_size`  
 Size of the file in bytes; a 64-bit integer for variations with the `i64` suffix**.**  
  
 `st_uid`  
 Numeric identifier of user who owns file (UNIX-specific). This field will always be zero on Windows systems. A redirected file is classified as a Windows file.  
  
 If `path` refers to a device, the `st_size`, various time fields, `st_dev`, and `st_rdev` fields in the `_stat` structure are meaningless. Because STAT.H uses the [_dev_t](../VS_visualcpp/Standard-Types.md) type that is defined in TYPES.H, you must include TYPES.H before STAT.H in your code.  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`_stat`, `_stat32`, `_stat64`, `_stati64`, `_stat32i64`, `_stat64i32`|<sys/types.h> followed by <sys/stat.h>|<errno.h>|  
|`_wstat`, `_wstat32`, `_wstat64`, `_wstati64`, `_wstat32i64`, `_wstat64i32`|<sys/types.h> followed by <sys/stat.h> or <wchar.h>|<errno.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_stat.c  
// This program uses the _stat function to  
// report information about the file named crt_stat.c.  
  
#include <time.h>  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
   struct _stat buf;  
   int result;  
   char timebuf[26];  
   char* filename = "crt_stat.c";  
   errno_t err;  
  
   // Get data associated with "crt_stat.c":   
   result = _stat( filename, &buf );  
  
   // Check if statistics are valid:   
   if( result != 0 )  
   {  
      perror( "Problem getting information" );  
      switch (errno)  
      {  
         case ENOENT:  
           printf("File %s not found.\n", filename);  
           break;  
         case EINVAL:  
           printf("Invalid parameter to _stat.\n");  
           break;  
         default:  
           /* Should never be reached. */  
           printf("Unexpected error in _stat.\n");  
      }  
   }  
   else  
   {  
      // Output some of the statistics:   
      printf( "File size     : %ld\n", buf.st_size );  
      printf( "Drive         : %c:\n", buf.st_dev + 'A' );  
      err = ctime_s(timebuf, 26, &buf.st_mtime);  
      if (err)  
      {  
         printf("Invalid arguments to ctime_s.");  
         exit(1);  
      }  
      printf( "Time modified : %s", timebuf );  
   }  
}  
```  
  
 **File size     : 732**  
**Drive         : C:**  
**Time modified : Thu Feb 07 14:39:36 2002**   
## .NET Framework Equivalent  
  
-   [System::IO::File::GetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.getattributes.aspx)  
  
-   [System::IO::File::GetCreationTime](https://msdn.microsoft.com/en-us/library/system.io.file.getcreationtime.aspx)  
  
-   [System::IO::File::GetLastAccessTime](https://msdn.microsoft.com/en-us/library/system.io.file.getlastaccesstime.aspx)  
  
-   [System::IO::File::GetLastWriteTime](https://msdn.microsoft.com/en-us/library/system.io.file.getlastwritetime.aspx)  
  
## See Also  
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [_access, _waccess](../VS_visualcpp/_access--_waccess.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../VS_visualcpp/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md)   
 [_getmbcp](../VS_visualcpp/_getmbcp.md)   
 [_setmbcp](../VS_visualcpp/_setmbcp.md)