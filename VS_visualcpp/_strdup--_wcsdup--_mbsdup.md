---
title: "_strdup, _wcsdup, _mbsdup"
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
  - _strdup
  - _mbsdup
  - _wcsdup
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
  - api-ms-win-crt-multibyte-l1-1-0.dll
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: 8604f8bb-95e9-45d3-93ef-20397ebf247a
caps.latest.revision: 19
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
# _strdup, _wcsdup, _mbsdup
Duplicates strings.  
  
> [!IMPORTANT]
>  `_mbsdup` cannot be used in applications that execute in the                  Windows Runtime. For more information, see                  [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *_strdup(  
   const char *strSource   
);  
wchar_t *_wcsdup(  
   const wchar_t *strSource   
);  
unsigned char *_mbsdup(  
   const unsigned char *strSource   
);  
```  
  
#### Parameters  
 `strSource`  
 Null-terminated source string.  
  
## Return Value  
 Each of these functions returns a pointer to the storage location for the copied string or `NULL` if storage cannot be allocated.  
  
## Remarks  
 The `_strdup` function calls [malloc](../VS_visualcpp/malloc.md) to allocate storage space for a copy of `strSource` and then copies `strSource` to the allocated space.  
  
 `_wcsdup` and `_mbsdup` are wide-character and multibyte-character versions of `_strdup`. The arguments and return value of `_wcsdup` are wide-character strings; those of `_mbsdup` are multibyte-character strings. These three functions behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsdup`|`_strdup`|`_mbsdup`|`_wcsdup`|  
  
 Because `_strdup` calls `malloc` to allocate storage space for the copy of `strSource`, it is good practice always to release this memory by calling the [free](../VS_visualcpp/free.md) routine on the pointer that's returned by the call to `_strdup`.  
  
 If `_DEBUG` and `_CRTDBG_MAP_ALLOC` are defined, `_strdup` and `_wcsdup` are replaced by calls to `_strdup_dbg` and `_wcsdup_dbg` to allow for debugging memory allocations. For more information, see [_strdup_dbg, _wcsdup_dbg](../VS_visualcpp/_strdup_dbg--_wcsdup_dbg.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strdup`|<string.h>|  
|`_wcsdup`|<string.h> or <wchar.h>|  
|`_mbsdup`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_strdup.c  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char buffer[] = "This is the buffer text";  
   char *newstring;  
   printf( "Original: %s\n", buffer );  
   newstring = _strdup( buffer );  
   printf( "Copy:     %s\n", newstring );  
   free( newstring );  
}  
```  
  
 **Original: This is the buffer text**  
**Copy:     This is the buffer text**   
## .NET Framework Equivalent  
 [System::String::Clone](https://msdn.microsoft.com/en-us/library/system.string.clone.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [memset, wmemset](../VS_visualcpp/memset--wmemset.md)   
 [strcat, wcscat, _mbscat](../VS_visualcpp/strcat--wcscat--_mbscat.md)   
 [strcmp, wcscmp, _mbscmp](../VS_visualcpp/strcmp--wcscmp--_mbscmp.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../VS_visualcpp/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../VS_visualcpp/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../VS_visualcpp/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../VS_visualcpp/strspn--wcsspn--_mbsspn--_mbsspn_l.md)