---
title: "_getdrive"
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
  - _getdrive
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
ms.assetid: e40631a0-8f1a-4897-90ac-e1037ff30bca
caps.latest.revision: 17
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
# _getdrive
Gets the current disk drive.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _getdrive( void );  
```  
  
## Return Value  
 Returns the current (default) drive (1=A, 2=B, and so on). There is no error return.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getdrive`|<direct.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_getdrive.c  
// compile with: /c  
// Illustrates drive functions including:  
//    _getdrive       _chdrive        _getdcwd  
//  
  
#include <stdio.h>  
#include <direct.h>  
#include <stdlib.h>  
#include <ctype.h>  
  
int main( void )  
{  
   int ch, drive, curdrive;  
   static char path[_MAX_PATH];  
  
   // Save current drive.  
   curdrive = _getdrive();  
  
   printf( "Available drives are:\n" );  
  
   // If we can switch to the drive, it exists.  
   for( drive = 1; drive <= 26; drive++ )  
   {  
      if( !_chdrive( drive ) )  
      {  
         printf( "%c:", drive + 'A' - 1 );  
         if( _getdcwd( drive, path, _MAX_PATH ) != NULL )  
            printf( " (Current directory is %s)", path );  
         putchar( '\n' );  
      }  
   }  
  
   // Restore original drive.  
   _chdrive( curdrive );  
}  
```  
  
 **Available drives are:**  
**A: (Current directory is A:\\)**  
**C: (Current directory is C:\\)**  
**E: (Current directory is E:\testdir\bin)**  
**F: (Current directory is F:\\)**  
**G: (Current directory is G:\\)**   
## .NET Framework Equivalent  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## See Also  
 [Directory Control](../VS_visualcpp/Directory-Control.md)   
 [_chdrive](../VS_visualcpp/_chdrive.md)   
 [_getcwd, _wgetcwd](../VS_visualcpp/_getcwd--_wgetcwd.md)   
 [_getdcwd, _wgetdcwd](../VS_visualcpp/_getdcwd--_wgetdcwd.md)