---
title: "_lrotl, _lrotr"
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
  - "_lrotl"
  - "_lrotr"
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
  - "lrotr"
  - "lrotl"
  - "_lrotr"
  - "_lrotl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "lrotl function"
  - "bits"
  - "_lrotr function"
  - "lrotr function"
  - "rotating bits"
  - "_lrotl function"
  - "bits, rotating"
ms.assetid: d42f295b-35f9-49d2-9ee4-c66896ffe68e
caps.latest.revision: 10
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
# _lrotl, _lrotr
Rotates bits to the left (`_lrotl`) or right (`_lrotr`).  
  
## Syntax  
  
```  
  
      unsigned long _lrotl(  
   unsigned long value,  
   int shift   
);  
unsigned long _lrotr(  
   unsigned long value,  
   int shift   
);  
```  
  
#### Parameters  
 *value*  
 Value to be rotated.  
  
 `shift`  
 Number of bits to shift *value*.  
  
## Return Value  
 Both functions return the rotated value. There is no error return.  
  
## Remarks  
 The `_lrotl` and `_lrotr` functions rotate *value* by `shift` bits. `_lrotl` rotates the value left. `_lrotr` rotates the value right. Both functions wrap bits rotated off one end of *value* to the other end.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_lrotl`|\<stdlib.h>|  
|`_lrotr`|\<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../crt/crt-library-features.md).  
  
## Example  
  
```  
// crt_lrot.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   unsigned long val = 0x0fac35791;  
  
   printf( "0x%8.8lx rotated left eight times is 0x%8.8lx\n",   
            val, _lrotl( val, 8 ) );  
   printf( "0x%8.8lx rotated right four times is 0x%8.8lx\n",   
            val, _lrotr( val, 4 ) );  
}  
```  
  
## Output  
  
```  
0xfac35791 rotated left eight times is 0xc35791fa  
0xfac35791 rotated right four times is 0x1fac3579  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../crt/floating-point-support.md)   
 [_rotl, _rotl64, _rotr, _rotr64](../crt/_rotl--_rotl64--_rotr--_rotr64.md)