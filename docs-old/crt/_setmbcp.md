---
title: "_setmbcp"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_setmbcp"
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
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_setmbcp"
  - "setmbcp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "setmbcp function"
  - "_setmbcp function"
  - "multibyte code pages"
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
caps.latest.revision: 13
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
 The `_setmbcp` function specifies a new multibyte code page. By default, the run-time system automatically sets the multibyte code page to the system-default ANSI code page. The multibyte code page setting affects all multibyte routines that are not locale dependent. However, it is possible to instruct `_setmbcp` to use the code page defined for the current locale (see the following list of manifest constants and associated behavior results). For a list of the multibyte routines that are dependent on the locale code page rather than the multibyte code page, see [Interpretation of Multibyte-Character Sequences](../crt/interpretation-of-multibyte-character-sequences.md).  
  
 The multibyte code page also affects multibyte-character processing by the following run-time library routines:  
  
||||  
|-|-|-|  
|[_exec functions](../crt/_exec--_wexec-functions.md)|[_mktemp](../crt/_mktemp--_wmktemp.md)|[_stat](../crt/99a75ae6-ff26-47ad-af70-5ea7e17226a5.md)|  
|[_fullpath](../crt/_fullpath--_wfullpath.md)|[_spawn functions](../crt/_spawn--_wspawn-functions.md)|[_tempnam](../crt/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|  
|[_makepath](../crt/_makepath--_wmakepath.md)|[_splitpath](../crt/_splitpath--_wsplitpath.md)|[tmpnam](../crt/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|  
  
 In addition, all run-time library routines that receive multibyte-character `argv` or `envp` program arguments as parameters (such as the `_exec` and `_spawn` families) process these strings according to the multibyte code page. Therefore, these routines are also affected by a call to `_setmbcp` that changes the multibyte code page.  
  
 The `codepage` argument can be set to any of the following values:  
  
-   `_MB_CP_ANSI` Use ANSI code page obtained from operating system at program startup.  
  
-   `_MB_CP_LOCALE` Use the current locale's code page obtained from a previous call to [setlocale](../crt/setlocale--_wsetlocale.md).  
  
-   `_MB_CP_OEM` Use OEM code page obtained from operating system at program startup.  
  
-   `_MB_CP_SBCS` Use single-byte code page. When the code page is set to `_MB_CP_SBCS`, a routine such as [_ismbblead](../crt/_ismbblead--_ismbblead_l.md) always returns false.  
  
-   Any other valid code page value, regardless of whether the value is an ANSI, OEM, or other operating-system-supported code page (except UTF-7 and UTF-8, which are not supported).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_setmbcp`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [_getmbcp](../crt/_getmbcp.md)   
 [setlocale, _wsetlocale](../crt/setlocale--_wsetlocale.md)