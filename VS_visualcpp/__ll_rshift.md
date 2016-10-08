---
title: "__ll_rshift"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ef13b732-d122-44a0-add9-f5544a2c4ab2
caps.latest.revision: 12
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# __ll_rshift
**Microsoft Specific**  
  
 Shifts a 64-bit value specified by the first parameter to the right by a number of bits specified by the second parameter.  
  
## Syntax  
  
```  
__int64 __ll_rshift(  
   __int64 Mask,  
   int nBit  
);  
```  
  
#### Parameters  
 [in] `Mask`  
 The 64-bit integer value to shift right.  
  
 [in] `nBit`  
 The number of bits to shift, modulo 64 on x64, and modulo 32 on x86.  
  
## Return Value  
 The mask shifted by `nBit` bits.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__ll_rshift`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 If the second parameter is greater than 64 on x64 (32 on x86), that number is taken modulo 64 (32 on x86) to determine the number of bits to shift. The `ll` prefix indicates that this is an operation on `long long`, another name for `__int64`, the 64-bit signed integral type.  
  
## Example  
  
```  
// ll_rshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ll_rshift)  
  
int main()  
{  
   __int64 Mask = - 0x100;  
   int nBit = 4;  
   cout << hex << Mask << endl;  
   cout << " - " << (- Mask) << endl;  
   Mask = __ll_rshift(Mask, nBit);  
   cout << hex << Mask << endl;  
   cout << " - " << (- Mask) << endl;  
}  
```  
  
## Output  
  
```  
ffffffffffffff00  
 - 100  
fffffffffffffff0  
 - 10  
```  
  
 **Note** If `_ull_rshift` has been used, the MSB of the right-shifted value would have been zero, so the desired result would not have been obtained in the case of a negative value.  
  
### END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__ll_lshift](../VS_visualcpp/__ll_lshift.md)   
 [__ull_rshift](../VS_visualcpp/__ull_rshift.md)