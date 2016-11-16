---
title: "nan, nanf, nanl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "nanf"
  - "nan"
  - "nanl"
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
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "nan"
  - "nanl"
  - "nanf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nan function"
  - "nanf function"
  - "nanl function"
ms.assetid: 790e9158-80ab-43e0-8f5a-096198553fd9
caps.latest.revision: 9
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
# nan, nanf, nanl
Returns a quiet NaN value.  
  
## Syntax  
  
```  
double nan(  
   const char* input   
);  
float nanf(  
   const char* input   
);  
long double nanl(  
   const char* input   
);  
```  
  
#### Parameters  
 `input`  
 A string value.  
  
## Return Value  
 The `nan` functions return a quiet NaN value.  
  
## Remarks  
 The `nan` functions return a floating-point value that corresponds to a quiet (non-signalling) NaN. The `input` value is ignored. For information about how a NaN is represented for output, see [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`nan`, `nanf`, `nanl`|\<math.h>|\<cmath>|  
  
## .NET Framework Equivalent  
 [System::Double::NaN](https://msdn.microsoft.com/en-us/library/system.double.nan.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [_finite, _finitef](../../c-runtime-library/reference/finite-finitef.md)   
 [_fpclass, _fpclassf](../../c-runtime-library/reference/fpclass-fpclassf.md)   
 [isnan, _isnan, _isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)