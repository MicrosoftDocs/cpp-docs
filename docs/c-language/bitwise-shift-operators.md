---
title: "Bitwise Shift Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operators [C++], bitwise"
  - "shift operators, bitwise"
  - "bitwise-shift operators"
  - "operators [C++], shift"
ms.assetid: d0485785-5c72-47e1-a7c0-0adde03ade23
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
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
# Bitwise Shift Operators
The shift operators shift their first operand left (`<<`) or right (`>>`) by the number of positions the second operand specifies.  
  
## Syntax  
 *shift-expression*:  
 *additive-expression*  
  
 *shift-expression*  `<<`  *additive-expression shift-expression*  `>>`  *additive-expression*  
  
 Both operands must be integral values. These operators perform the usual arithmetic conversions; the type of the result is the type of the left operand after conversion.  
  
 For leftward shifts, the vacated right bits are set to 0. For rightward shifts, the vacated left bits are filled based on the type of the first operand after conversion. If the type is `unsigned`, they are set to 0. Otherwise, they are filled with copies of the sign bit. For left-shift operators without overflow, the statement  
  
```  
expr1 << expr2   
```  
  
 is equivalent to multiplication by 2<sup>expr2</sup>. For right-shift operators,  
  
```  
expr1 >> expr2   
```  
  
 is equivalent to division by 2<sup>expr2</sup> if `expr1` is unsigned or has a nonnegative value.  
  
 The result of a shift operation is undefined if the second operand is negative, or if the right operand is greater than or equal to the width in bits of the promoted left operand.  
  
 Since the conversions performed by the shift operators do not provide for overflow or underflow conditions, information may be lost if the result of a shift operation cannot be represented in the type of the first operand after conversion.  
  
```  
unsigned int x, y, z;  
  
x = 0x00AA;  
y = 0x5500;  
  
z = ( x << 8 ) + ( y >> 8 );  
```  
  
 In this example, `x` is shifted left eight positions and `y` is shifted right eight positions. The shifted values are added, giving 0xAA55, and assigned to `z`.  
  
 Shifting a negative value to the right yields half the original value, rounded down. For example, –253 (binary 11111111 00000011) shifted right one bit produces –127 (binary 11111111 10000001). A positive 253 shifts right to produce +126.  
  
 Right shifts preserve the sign bit. When a signed integer shifts right, the most-significant bit remains set. When an unsigned integer shifts right, the most-significant bit is cleared.  
  
## See Also  
 [Left Shift and Right Shift Operators (>> and <<)](../cpp/left-shift-and-right-shift-operators-input-and-output.md)