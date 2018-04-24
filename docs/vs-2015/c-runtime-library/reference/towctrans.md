---
title: "towctrans | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "towctrans"
api_location: 
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
  - "api-ms-win-crt-string-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "towctrans"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "towctrans function"
ms.assetid: 1ed1e70d-7b31-490f-a7d9-42564b5924ca
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# towctrans
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [towctrans](https://docs.microsoft.com/cpp/c-runtime-library/reference/towctrans).  
  
Transforms a character.  
  
## Syntax  
  
```  
wint_t towctrans(  
   wint_t c,  
   wctrans_t category   
);  
```  
  
#### Parameters  
 `c`  
 The character you want to transform.  
  
 `category`  
 An identifier that contains the return value of [wctrans](../../c-runtime-library/reference/wctrans.md).  
  
## Return Value  
 The character `c`, after `towctrans` used the transform rule in `category`.  
  
## Remarks  
 The value of `category` must have been returned by an earlier successful call to [wctrans](../../c-runtime-library/reference/wctrans.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`towctrans`|\<wctype.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See `wctrans` for a sample that uses `towctrans`.  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)





