---
title: "ldiv, lldiv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ldiv"
  - "lldiv"
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
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "ldiv"
  - "lldiv"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ldiv function"
  - "lldiv function"
  - "quotients, computing"
  - "computing remainders"
  - "remainder computing"
  - "computing quotients"
ms.assetid: 68ab5d83-27a4-479c-9d52-d055eb139eca
caps.latest.revision: 12
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
# ldiv, lldiv
Computes the quotient and remainder of two integers as one operation.  
  
## Syntax  
  
```  
ldiv_t ldiv(  
   long numer,  
   long denom   
);  
lldiv_t lldiv(  
   long long numer,  
   long long denom   
);  
```  
  
#### Parameters  
 `numer`  
 Numerator.  
  
 `denom`  
 Denominator.  
  
## Return Value  
 `ldiv` returns a structure of type [ldiv_t](../../c-runtime-library/standard-types.md) that comprises both the quotient and the remainder. `lldiv` returns a structure of type [lldiv_t](../../c-runtime-library/standard-types.md) that comprises both the quotient and the remainder.  
  
## Remarks  
 The `ldiv` and `lldiv` functions divide `numer` by `denom`, and thereby compute the quotient and remainder. The sign of the quotient is the same as that of the mathematical quotient. The absolute value of the quotient is the largest integer that is less than the absolute value of the mathematical quotient. If the denominator is 0, the program terminates with an error message. `ldiv` and `lldiv` are the same as `div`, except that the arguments of `ldiv` and the members of the returned structure are all of type `long`, and the arguments of `lldiv` and the members of the returned structure are of type `long long`.  
  
 The `ldiv_t` and `lldiv_t` structures are defined in \<stdlib.h>.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`ldiv`, `lldiv`|\<stdlib.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_ldiv.c  
  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   long x = 5149627, y = 234879;  
   ldiv_t div_result;  
  
   div_result = ldiv( x, y );  
   printf( "For %ld / %ld, the quotient is ", x, y );  
   printf( "%ld, and the remainder is %ld\n",   
            div_result.quot, div_result.rem );  
}  
```  
  
## Output  
  
```  
For 5149627 / 234879, the quotient is 21, and the remainder is 217168  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [div](../../c-runtime-library/reference/div.md)   
 [imaxdiv](../../c-runtime-library/reference/imaxdiv.md)