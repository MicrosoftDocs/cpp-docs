---
title: "_setmbcp"
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
  - _setmbcp
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
  - api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
caps.latest.revision: 13
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
# _setmbcp
Sets a new multibyte code page.  
  
## Syntax  
  
```  
int _setmbcp(  
   int codepage   
);  
```  
  
#### Parameters  
 `codepage`  
 New code page setting for locale-independent multibyte routines.  
  
## Return Value  
 Returns 0 if the code page is set successfully. If an invalid code page value is supplied for `codepage`, returns –1 and the code page setting is unchanged. Sets `errno` to `EINVAL` if a memory allocation failure occurs.  
  
## Remarks  
 The `_setmbcp` function specifies a new multibyte code page. By default, the run-time system automatically sets the multibyte code page to the system-default ANSI code page. The multibyte code page setting affects all multibyte routines that are not locale dependent. However, it is possible to instruct `_setmbcp` to use the code page defined for the current locale (see the following list of manifest constants and associated behavior results). For a list of the multibyte routines that are dependent on the locale code page rather than the multibyte code page, see [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md).  
  
 The multibyte code page also affects multibyte-character processing by the following run-time library routines:  
  
||||  
|-|-|-|  
|[_exec functions](../VS_visualcpp/_exec--_wexec-Functions.md)|[_mktemp](../VS_visualcpp/_mktemp--_wmktemp.md)|[_stat](../VS_visualcpp/_stat--_stat32--_stat64--_stati64--_stat32i64--_stat64i32--_wstat--_wstat32--_wstat64--_wstati64--_wstat32i64--_wstat64i32.md)|  
|[_fullpath](../VS_visualcpp/_fullpath--_wfullpath.md)|[_spawn functions](../VS_visualcpp/_spawn--_wspawn-Functions.md)|[_tempnam](../VS_visualcpp/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|  
|[_makepath](../VS_visualcpp/_makepath--_wmakepath.md)|[_splitpath](../VS_visualcpp/_splitpath--_wsplitpath.md)|[tmpnam](../VS_visualcpp/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|  
  
 In addition, all run-time library routines that receive multibyte-character `argv` or `envp` program arguments as parameters (such as the `_exec` and `_spawn` families) process these strings according to the multibyte code page. Therefore, these routines are also affected by a call to `_setmbcp` that changes the multibyte code page.  
  
 The `codepage` argument can be set to any of the following values:  
  
-   `_MB_CP_ANSI` Use ANSI code page obtained from operating system at program startup.  
  
-   `_MB_CP_LOCALE` Use the current locale's code page obtained from a previous call to [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md).  
  
-   `_MB_CP_OEM` Use OEM code page obtained from operating system at program startup.  
  
-   `_MB_CP_SBCS` Use single-byte code page. When the code page is set to `_MB_CP_SBCS`, a routine such as [_ismbblead](../VS_visualcpp/_ismbblead--_ismbblead_l.md) always returns false.  
  
-   Any other valid code page value, regardless of whether the value is an ANSI, OEM, or other operating-system-supported code page (except UTF-7 and UTF-8, which are not supported).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_setmbcp`|<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [_getmbcp](../VS_visualcpp/_getmbcp.md)   
 [setlocale, _wsetlocale](../VS_visualcpp/setlocale--_wsetlocale.md)