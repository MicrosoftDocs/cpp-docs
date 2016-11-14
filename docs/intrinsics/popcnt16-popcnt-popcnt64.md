---
title: "__popcnt16, __popcnt, __popcnt64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__popcnt64"
  - "__popcnt"
  - "__popcnt16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "popcnt instruction"
  - "__popcnt16"
  - "__popcnt64"
  - "__popcnt"
ms.assetid: e525b236-adc8-42df-9b9b-8b7d8c245d3b
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __popcnt16, __popcnt, __popcnt64
**Microsoft Specific**  
  
 Counts the number of one bits (population count) in a 16-, 32-, or 64-byte unsigned integer.  
  
## Syntax  
  
```  
unsigned short __popcnt16(  
   unsigned short value  
);  
unsigned int __popcnt(  
   unsigned int value  
);  
unsigned __int64 __popcnt64(  
   unsigned __int64 value  
);  
```  
  
#### Parameters  
 [in] `value`  
 The 16-, 32-, or 64-bit unsigned integer for which we want the population count.  
  
## Return Value  
 The number of one bits in the `value` parameter.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__popcnt16`|Advanced Bit Manipulation|  
|`__popcnt`|Advanced Bit Manipulation|  
|`__popcnt64`|Advanced Bit Manipulation in 64-bit mode.|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 Each of these intrinsics generates the `popcnt` instruction.  The size of the value that the `popcnt` instruction returns is the same as the size of its argument.  In 32-bit mode there are no 64-bit general-purpose registers, hence no 64-bit `popcnt`.  
  
 To determine hardware support for the `popcnt` instruction, call the `__cpuid` intrinsic with `InfoType=0x00000001` and check bit 23 of `CPUInfo[2] (ECX)`. This bit is 1 if the instruction is supported, and 0 otherwise. If you run code that uses this intrinsic on hardware that does not support the `popcnt` instruction, the results are unpredictable.  
  
## Example  
  
```  
#include <iostream>   
#include <intrin.h>   
using namespace std;   
  
int main()   
{  
  unsigned short us[3] = {0, 0xFF, 0xFFFF};  
  unsigned short usr;  
  unsigned int   ui[4] = {0, 0xFF, 0xFFFF, 0xFFFFFFFF};  
  unsigned int   uir;  
  
  for (int i=0; i<3; i++) {  
    usr = __popcnt16(us[i]);  
    cout << "__popcnt16(0x" << hex << us[i] << ") = " << dec << usr << endl;  
  }  
  
  for (int i=0; i<4; i++) {  
    uir = __popcnt(ui[i]);  
    cout << "__popcnt(0x" << hex << ui[i] << ") = " << dec << uir << endl;  
  }  
}  
  
```  
  
```Output  
__popcnt16(0x0) = 0  
__popcnt16(0xff) = 8  
__popcnt16(0xffff) = 16  
__popcnt(0x0) = 0  
__popcnt(0xff) = 8  
__oopcnt(0xffff) = 16  
__popcnt(0xffffffff) = 32  
```  
  
## END Microsoft Specific  
 Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)