---
title: "Bessel Functions: _j0, _j1, _jn, _y0, _y1, _yn | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_j0"
  - "_j1"
  - "_jn"
  - "_y0"
  - "_y1"
  - "_yn"
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
  - "c.bessel"
  - "_j0"
  - "_j1"
  - "_jn"
  - "_y0"
  - "_y1"
  - "_yn"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "Bessel functions"
  - "_j0 function"
  - "_j1 function"
  - "_jn function"
  - "_y0 function"
  - "_y1 function"
  - "_yn function"
ms.assetid: a21a8bf1-df9d-4ba0-a8c2-e7ef71921d96
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# Bessel Functions: _j0, _j1, _jn, _y0, _y1, _yn
Computes the Bessel function of the first or second kind, of orders 0, 1, or n. The Bessel functions are commonly used in the mathematics of electromagnetic wave theory.  
  
## Syntax  
  
```  
double _j0(   
   double x   
);  
double _j1(   
   double x   
);  
double _jn(   
   int n,  
   double x   
);  
double _y0(   
   double x   
);  
double _y1(   
   double x   
);  
double _yn(   
   int n,  
   double x   
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
 `n`  
 Integer order of Bessel function.  
  
## Return Value  
 Each of these routines returns a Bessel function of `x`. If `x` is negative in the `_y0`, `_y1`, or `_yn` functions, the routine sets `errno` to `EDOM`, prints a `_DOMAIN` error message to `stderr`, and returns `_HUGE_VAL`. You can modify error handling by using `_matherr`.  
  
## Remarks  
 The `_j0`, `_j1`, and `_jn` routines return Bessel functions of the first kind: orders 0, 1, and n, respectively.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|`INVALID`|`_DOMAIN`|  
  
 The `_y0`, `_y1`, and `_yn` routines return Bessel functions of the second kind: orders 0, 1, and n, respectively.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|`INVALID`|`_DOMAIN`|  
|± 0|`ZERODIVIDE`|`_SING`|  
|&#124;x&#124;<0.0|`INVALID`|`_DOMAIN`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_j0`, `_j1`, `_jn`, `_y0`, `_y1`, `_yn`|\<cmath> (C++), \<math.h> (C, C++)|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_bessel1.c  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.387;  
   int n = 3, c;  
  
   printf( "Bessel functions for x = %f:\n", x );  
   printf( " Kind   Order  Function     Result\n\n" );  
   printf( " First  0      _j0( x )     %f\n", _j0( x ) );  
   printf( " First  1      _j1( x )     %f\n", _j1( x ) );  
   for( c = 2; c < 5; c++ )  
      printf( " First  %d      _jn( %d, x )  %f\n", c, c, _jn( c, x ) );  
   printf( " Second 0      _y0( x )     %f\n", _y0( x ) );  
   printf( " Second 1      _y1( x )     %f\n", _y1( x ) );  
   for( c = 2; c < 5; c++ )  
      printf( " Second %d      _yn( %d, x )  %f\n", c, c, _yn( c, x ) );  
}  
```  
  
```Output  
Bessel functions for x = 2.387000:  
 Kind   Order  Function     Result  
  
 First  0      _j0( x )     0.009288  
 First  1      _j1( x )     0.522941  
 First  2      _jn( 2, x )  0.428870  
 First  3      _jn( 3, x )  0.195734  
 First  4      _jn( 4, x )  0.063131  
 Second 0      _y0( x )     0.511681  
 Second 1      _y1( x )     0.094374  
 Second 2      _yn( 2, x )  -0.432608  
 Second 3      _yn( 3, x )  -0.819314  
 Second 4      _yn( 4, x )  -1.626833  
```  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [_matherr](../../c-runtime-library/reference/matherr.md)