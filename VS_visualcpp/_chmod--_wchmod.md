---
title: "_chmod, _wchmod"
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
  - _chmod
  - _wchmod
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
ms.assetid: 92f7cb86-b3b0-4232-a599-b8c04a2f2c19
caps.latest.revision: 21
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
# _chmod, _wchmod
Changes the file-permission settings.  
  
## Syntax  
  
```  
  
      int _chmod(   
   const char *filename,  
   int pmode   
);  
int _wchmod(   
   const wchar_t *filename,  
   int pmode   
);  
```  
  
#### Parameters  
 `filename`  
 Name of the existing file.  
  
 `pmode`  
 Permission setting for the file.  
  
## Return Value  
 These functions return 0 if the permission setting is successfully changed. A return value of –1 indicates failure. If the specified file could not be found, `errno` is set to `ENOENT`; if a parameter is invalid, `errno` is set to `EINVAL`.  
  
## Remarks  
 The `_chmod` function changes the permission setting of the file specified by `filename`*.* The permission setting controls the read and write access to the file. The integer expression `pmode` contains one or both of the following manifest constants, defined in SYS\Stat.h.  
  
 `_S_IWRITE`  
 Writing permitted.  
  
 `_S_IREAD`  
 Reading permitted.  
  
 `_S_IREAD | _S_IWRITE`  
 Reading and writing permitted.  
  
 When both constants are given, they are joined with the bitwise `OR` operator ( `|` ). If write permission is not given, the file is read-only. Note that all files are always readable; it is not possible to give write-only permission. Thus, the modes `_S_IWRITE` and `_S_IREAD | _S_IWRITE` are equivalent.  
  
 `_wchmod` is a wide-character version of `_chmod`; the `filename` argument to `_wchmod` is a wide-character string. `_wchmod` and `_chmod` behave identically otherwise.  
  
 This function validates its parameters. If `pmode` is not a combination of one of the manifest constants or incorporates an alternate set of constants, the function simply ignores those. If `filename` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns -1.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tchmod`|`_chmod`|`_chmod`|`_wchmod`|  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_chmod`|<io.h>|<sys/types.h>, <sys/stat.h>, <errno.h>|  
|`_wchmod`|<io.h> or <wchar.h>|<sys/types.h>, <sys/stat.h>, <errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_chmod.c  
// This program uses _chmod to  
// change the mode of a file to read-only.  
// It then attempts to modify the file.  
//  
  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <io.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
// Change the mode and report error or success   
void set_mode_and_report(char * filename, int mask)  
{  
   // Check for failure   
   if( _chmod( filename, mask ) == -1 )  
   {  
      // Determine cause of failure and report.   
      switch (errno)  
      {  
         case EINVAL:  
            fprintf( stderr, "Invalid parameter to chmod.\n");  
            break;  
         case ENOENT:  
            fprintf( stderr, "File %s not found\n", filename );  
            break;  
         default:  
            // Should never be reached   
            fprintf( stderr, "Unexpected error in chmod.\n" );  
       }  
   }  
   else  
   {  
      if (mask == _S_IREAD)  
        printf( "Mode set to read-only\n" );  
      else if (mask & _S_IWRITE)  
        printf( "Mode set to read/write\n" );  
   }  
   fflush(stderr);  
}  
  
int main( void )  
{   
  
   // Create or append to a file.   
   system( "echo /* End of file */ >> crt_chmod.c_input" );  
  
   // Set file mode to read-only:   
   set_mode_and_report("crt_chmod.c_input ", _S_IREAD );  
  
   system( "echo /* End of file */ >> crt_chmod.c_input " );  
  
   // Change back to read/write:   
   set_mode_and_report("crt_chmod.c_input ", _S_IWRITE );  
  
   system( "echo /* End of file */ >> crt_chmod.c_input " );   
}   
```  
  
  **`A line of text.` `A line of text.`Mode set to read-only**  
**Access is denied.**  
**Mode set to read/write**   
## .NET Framework Equivalent  
  
-   [System::IO::File::SetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.setattributes.aspx)  
  
-   [System::Security::Permissions::FileIOPermission](https://msdn.microsoft.com/en-us/library/system.security.permissions.fileiopermission.aspx)  
  
## See Also  
 [File Handling](../VS_visualcpp/File-Handling.md)   
 [_access, _waccess](../VS_visualcpp/_access--_waccess.md)   
 [_creat, _wcreat](../VS_visualcpp/_creat--_wcreat.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../VS_visualcpp/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md)   
 [_open, _wopen](../VS_visualcpp/_open--_wopen.md)   
 [_stat, _wstat Functions](../VS_visualcpp/_stat--_stat32--_stat64--_stati64--_stat32i64--_stat64i32--_wstat--_wstat32--_wstat64--_wstati64--_wstat32i64--_wstat64i32.md)