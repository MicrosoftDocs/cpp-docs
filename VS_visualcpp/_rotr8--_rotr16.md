---
title: "_rotr8, _rotr16"
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
ms.assetid: dfbd2c82-82b4-427a-ad52-51609027ebff
caps.latest.revision: 15
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
# _rotr8, _rotr16
**Microsoft Specific**  
  
 Rotate the input values to the right to the least significant bit (LSB) by a specified number of bit positions.  
  
## Syntax  
  
```  
unsigned char _rotr8(   
   unsigned char value,   
   unsigned char shift   
);  
unsigned short _rotr16(   
   unsigned short value,   
   unsigned char shift   
);  
```  
  
#### Parameters  
 [in] `value`  
 The value to rotate.  
  
 [in] `shift`  
 The number of bits to rotate.  
  
## Return Value  
 The rotated value.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_rotr8`|x86, ARM, x64|  
|`_rotr16`|x86, ARM, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 Unlike a right-shift operation, when executing a right rotation, the low order bits that fall off the low end are moved into the high order bit positions.  
  
## Example  
  
```  
// rotr.cpp  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_rotr8, _rotr16)  
  
int main()  
{  
    unsigned char c = 'A', c1, c2;  
  
    for (int i = 0; i < 8; i++)  
    {  
       printf_s("Rotating 0x%x right by %d bits gives 0x%x\n", c,  
                i, _rotr8(c, i));  
    }  
  
    unsigned short s = 0x12;  
    int nBit = 10;  
  
    printf_s("Rotating unsigned short 0x%x right by %d bits "  
             "gives 0x%x\n",  
            s, nBit, _rotr16(s, nBit));  
}  
```  
  
 **Rotating 0x41 right by 0 bits gives 0x41**  
**Rotating 0x41 right by 1 bits gives 0xa0**  
**Rotating 0x41 right by 2 bits gives 0x50**  
**Rotating 0x41 right by 3 bits gives 0x28**  
**Rotating 0x41 right by 4 bits gives 0x14**  
**Rotating 0x41 right by 5 bits gives 0xa**  
**Rotating 0x41 right by 6 bits gives 0x5**  
**Rotating 0x41 right by 7 bits gives 0x82**  
**Rotating unsigned short 0x12 right by 10 bits gives 0x480**   
## END Microsoft Specific  
  
## See Also  
 [_rotl8, _rotl16](../VS_visualcpp/_rotl8--_rotl16.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)