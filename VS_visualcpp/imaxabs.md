---
title: "imaxabs"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - imaxabs
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
  - api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
ms.assetid: de2566a3-1415-4e9a-91b5-7ac3a49ebf5e
caps.latest.revision: 5
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
# imaxabs
Calculates the absolute value of an integer of any size.  
  
## Syntax  
  
```  
intmax_t imaxabs(  
   intmax_t n   
);  
```  
  
#### Parameters  
 *n*  
 Integer value.  
  
## Return Value  
 The `imaxabs` function returns the absolute value of the argument. There is no error return.  
  
> [!NOTE]
>  Because the range of negative integers that can be represented by using `intmax_t` is larger than the range of positive integers that can be represented, it's possible to supply an argument to `imaxabs` that can’t be converted. If the absolute value of the argument cannot be represented by the return type, the behavior of `imaxabs` is undefined.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`imaxabs`|<inttypes.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## Example  
  
```  
// crt_imaxabs.c  
// Build using: cl /W3 /Tc crt_imaxabs.c  
// This example calls imaxabs to compute an  
// absolute value, then displays the results.  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <inttypes.h>  
  
int main(int argc, char *argv[])  
{  
   intmax_t x = LLONG_MIN + 2;  
  
   printf("The absolute value of %lld is %lld\n", x, imaxabs(x));  
}  
```  
  
 **The absolute value of -9223372036854775806 is 9223372036854775806**   
## .NET Framework Equivalent  
 [System::Math::Abs](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [abs, labs, llabs, _abs64](../VS_visualcpp/abs--labs--llabs--_abs64.md)   
 [_cabs](../VS_visualcpp/_cabs.md)   
 [fabs, fabsf, fabsl](../VS_visualcpp/fabs--fabsf--fabsl.md)   
 [labs, llabs](../Topic/labs,%20llabs.md)