---
title: "C Multiplicative Operators | Microsoft Docs"
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
  - "arithmetic operators [C++], multiplicative operators"
  - "/ operator"
  - "/ operator, multiplicative operators"
  - "remainder operator (%)"
  - "operators [C], multiplication"
  - "% operator"
  - "slash (/) operator"
  - "multiplication operator [C++], multiplicative operators"
ms.assetid: 495471c9-319b-4eb4-bd97-039a025fd3a9
caps.latest.revision: 8
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
# C Multiplicative Operators
The multiplicative operators perform multiplication (**\***), division (**/**), and remainder (`%`) operations.  
  
 **Syntax**  
  
 *multiplicative-expression*:  
 *cast-expression*  
  
 *multiplicative-expression*  **\***  *cast-expression*  
  
 *multiplicative-expression*  **/**  *cast-expression*  
  
 *multiplicative-expression*  **%**  *cast-expression*  
  
 The operands of the remainder operator (`%`) must be integral. The multiplication (**\***) and division (**/**) operators can take integral- or floating-type operands; the types of the operands can be different.  
  
 The multiplicative operators perform the usual arithmetic conversions on the operands. The type of the result is the type of the operands after conversion.  
  
> [!NOTE]
>  Since the conversions performed by the multiplicative operators do not provide for overflow or underflow conditions, information may be lost if the result of a multiplicative operation cannot be represented in the type of the operands after conversion.  
  
 The C multiplicative operators are described below:  
  
|Operator|Description|  
|--------------|-----------------|  
|**\***|The multiplication operator causes its two operands to be multiplied.|  
|**/**|The division operator causes the first operand to be divided by the second. If two integer operands are divided and the result is not an integer, it is truncated according to the following rules:|  
||-   The result of division by 0 is undefined according to the ANSI C standard. The Microsoft C compiler generates an error at compile time or run time.|  
||-   If both operands are positive or unsigned, the result is truncated toward 0.|  
||-   If either operand is negative, whether the result of the operation is the largest integer less than or equal to the algebraic quotient or is the smallest integer greater than or equal to the algebraic quotient is implementation defined. (See the Microsoft Specific section below.)|  
|`%`|The result of the remainder operator is the remainder when the first operand is divided by the second. When the division is inexact, the result is determined by the following rules:|  
||-   If the right operand is zero, the result is undefined.|  
||-   If both operands are positive or unsigned, the result is positive.|  
||-   If either operand is negative and the result is inexact, the result is implementation defined. (See the Microsoft Specific section below.)|  
  
 **Microsoft Specific**  
  
 In division where either operand is negative, the direction of truncation is toward 0.  
  
 If either operation is negative in division with the remainder operator, the result has the same sign as the dividend (the first operand in the expression).  
  
 **END Microsoft Specific**  
  
## Examples  
 The declarations shown below are used for the following examples:  
  
```  
int i = 10, j = 3, n;  
double x = 2.0, y;  
```  
  
 This statement uses the multiplication operator:  
  
```  
y = x * i;  
```  
  
 In this case, `x` is multiplied by `i` to give the value 20.0. The result has **double** type.  
  
```  
n = i / j;  
```  
  
 In this example, 10 is divided by 3. The result is truncated toward 0, yielding the integer value 3.  
  
```  
n = i % j;  
```  
  
 This statement assigns `n` the integer remainder, 1, when 10 is divided by 3.  
  
 **Microsoft Specific**  
  
 The sign of the remainder is the same as the sign of the dividend. For example:  
  
```  
50 % -6 = 2  
-50 % 6 = -2  
```  
  
 In each case, `50` and `2` have the same sign.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Multiplicative Operators and the Modulus Operator](../cpp/multiplicative-operators-and-the-modulus-operator.md)