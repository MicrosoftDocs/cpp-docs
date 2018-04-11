---
title: "_ismbbalpha, _ismbbalpha_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_ismbbalpha", "_ismbbalpha_l"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ismbbalpha", "ismbbalpha_l", "_ismbbalpha", "_ismbbalpha_l"]
dev_langs: ["C++"]
helpviewer_keywords: ["ismbbalpha function", "ismbbalpha_l function", "_ismbbalpha function", "_ismbbalpha_l function"]
ms.assetid: 8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _ismbbalpha, _ismbbalpha_l

Determines whether a specified multibyte character is alpha.  
  
## Syntax  
  
```  
int _ismbbalpha(  
   unsigned int c   
);  
int _ismbbalpha_l(  
   unsigned int c   
);  
```  
  
### Parameters  

`c`  
 Integer to be tested.  
  
 `locale`  
 Locale to use.  
  
## Return Value  

`_ismbbalpha` returns a nonzero value if the expression:  
  
```  
isalpha || _ismbbkalnum  
```  
  
 is nonzero for `c`, or 0 if it is not. `_ismbbalpha` uses the current locale for any locale-dependent character settings. `_ismbbalpha_l` is identical except that it uses the locale passed in.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbbalpha`|\<mbctype.h>|  
|`_ismbbalpha_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## See Also  

[Byte Classification](../../c-runtime-library/byte-classification.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)