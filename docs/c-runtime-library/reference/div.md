---
title: "div, ldiv, lldiv | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["div"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["div"]
dev_langs: ["C++"]
helpviewer_keywords: ["div function", "quotients, computing", "quotients", "dividing integers", "remainder computing"]
ms.assetid: 8ae80d97-54fd-499e-b14c-e30993b58119
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# div, ldiv, lldiv
Computes the quotient and the remainder of two integer values.

## Syntax

```C
div_t div(
   int numer,
   int denom
);
ldiv_t ldiv(
   long numer,
   long denom
);
lldiv_t lldiv(
   long long numer,
   long long denom
);
```

```cpp
ldiv_t div(
   long numer,
   long denom
); /* C++ only */
lldiv_t div(
   long long numer,
   long long denom
); /* C++ only */
```

#### Parameters
 *numer*<br/>
 The numerator.

 *denom*<br/>
 The denominator.

## Return Value
 **div** called by using arguments of type **int** returns a structure of type **div_t**, which comprises the quotient and the remainder. The return value with arguments of type **long** is **ldiv_t**, and the return value with arguments of type **long** **long** is **lldiv_t**. **div_t**, **ldiv_t**, and **lldiv_t** are defined in \<stdlib.h>.

## Remarks
 The **div** function divides *numer* by *denom* and thereby computes the quotient and the remainder. The [div_t](../../c-runtime-library/standard-types.md) structure contains the quotient, **quot**, and the remainder, **rem**. The sign of the quotient is the same as that of the mathematical quotient. Its absolute value is the largest integer that is less than the absolute value of the mathematical quotient. If the denominator is 0, the program terminates with an error message.

 The overloads of **div** that take arguments of type **long** or **long** **long** are only available to C++ code. The return types [ldiv_t](../../c-runtime-library/standard-types.md) and [lldiv_t](../../c-runtime-library/standard-types.md) contains members **quot** and **rem**, which have the same meanings as the members of **div_t**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**div**, **ldiv**, **lldiv**|\<stdlib.h>|

 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_div.c
// arguments: 876 13

// This example takes two integers as command-line
// arguments and displays the results of the integer
// division. This program accepts two arguments on the
// command line following the program name, then calls
// div to divide the first argument by the second.
// Finally, it prints the structure members quot and rem.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char *argv[] )
{
   int x,y;
   div_t div_result;

   x = atoi( argv[1] );
   y = atoi( argv[2] );

   printf( "x is %d, y is %d\n", x, y );
   div_result = div( x, y );
   printf( "The quotient is %d, and the remainder is %d\n",
           div_result.quot, div_result.rem );
}
```

```Output
x is 876, y is 13
The quotient is 67, and the remainder is 5
```

## See Also
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
 [ldiv, lldiv](../../c-runtime-library/reference/ldiv-lldiv.md)<br/>
 [imaxdiv](../../c-runtime-library/reference/imaxdiv.md)<br/>
