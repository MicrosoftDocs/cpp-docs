---
title: "__crtLCMapStringW | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__crtLCMapStringW"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__crtLCMapStringW"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__crtLCMapStringW"
ms.assetid: 45b4ac0e-438c-4fa3-b4d1-34195f4467d9
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __crtLCMapStringW
Maps one character string to another, performing a specified locale-dependent transformation. This function can also be used to generate a sort key for the input string.  
  
## Syntax  
  
```cpp  
int __crtLCMapStringW(  
   LCID    Locale,  
   DWORD   dwMapFlags,  
   LPCWSTR lpSrcStr,  
   int     cchSrc,  
   LPWSTR  lpDestStr,  
   int     cchDest)  
```  
  
#### Parameters  
 `Locale`  
 Locale identifier. The locale provides a context for the string mapping or sort key generation. An application can use the `MAKELCID` macro to create a locale identifier.  
  
 `dwMapFlags`  
 The type of transformation to be used during string mapping or sort key generation.  
  
 `lpSrcStr`  
 Pointer to a source string that the function maps or uses for sort key generation. This parameter is assumed to be a Unicode string.  
  
 `cchSrc`  
 Size, in characters, of the string pointed to by the `lpSrcStr` parameter. This count can include the NULL terminator, or not include it.  
  
 A `cchSrc` value of –1 specifies that the string pointed to by `lpSrcStr` is null-terminated. If this is the case, and this function is being used in its string-mapping mode, the function calculates the string's length itself, and null-terminates the mapped string stored into `*lpDestStr`.  
  
 `lpDestStr`  
 Long pointer to a buffer into which the function stores the mapped string or sort key.  
  
 `cchDest`  
 Size, in characters, of the buffer pointed to by `lpDestStr`.  
  
## Return Value  
 If the value of `cchDest` is nonzero, the number of characters, or bytes if `LCMAP_SORTKEY` is specified, written to the buffer indicates success. This count includes room for a NULL terminator.  
  
 If the value of `cchDest` is zero, the size of the buffer in characters, or bytes if `LCMAP_SORTKEY` is specified, required to receive the translated string or sort key indicates success. This size includes room for a NULL terminator.  
  
 Zero indicates failure. To get extended error information, call the `GetLastError` function.  
  
## Remarks  
 If `cchSrc` is greater than zero and `lpSrcStr` is a null-terminated string, `__crtLCMapStringW` sets `cchSrc` to the length of the string. Then `__crtLCMapStringW` calls the wide string (Unicode) version of the `LCMapString` function with the specified parameters. For more information about the parameters and return value of this function, see the `LCMapString` function at [MSDN Library](http://go.microsoft.com/fwlink/?linkID=150542).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__crtLCMapStringW|awint.h|