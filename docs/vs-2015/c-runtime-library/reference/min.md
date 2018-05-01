---
title: "__min | Microsoft Docs"
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
  - "__min"
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "__min"
  - "min"
  - "_min"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__min macro"
  - "min macro"
  - "minimum macro"
  - "_min macro"
ms.assetid: 2037f26c-b48a-4a69-8870-22519f052a3c
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __min
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [__min](https://docs.microsoft.com/cpp/c-runtime-library/reference/min).  
  
Returns the smaller of two values.  
  
## Syntax  
  
```  
type __min(  
   type a,  
   type b   
);  
```  
  
#### Parameters  
 `type`  
 Any numeric data type.  
  
 `a, b`  
 Values of any numeric type to be compared.  
  
## Return Value  
 The smaller of the two arguments.  
  
## Remarks  
 The `__min` macro compares two values and returns the value of the smaller one. The arguments can be of any numeric data type, signed or unsigned. Both arguments and the return value must be of the same data type.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`__min`|\<stdlib.h>|  
  
## Example  
  
```  
// crt_minmax.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int a = 10;  
   int b = 21;  
  
   printf( "The larger of %d and %d is %d\n",  a, b, __max( a, b ) );  
   printf( "The smaller of %d and %d is %d\n", a, b, __min( a, b ) );  
}  
```  
  
```Output  
The larger of 10 and 21 is 21  
The smaller of 10 and 21 is 10  
```  
  
## .NET Framework Equivalent  
 [System::Math::Min](https://msdn.microsoft.com/library/system.math.min.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [__max](../../c-runtime-library/reference/max.md)





