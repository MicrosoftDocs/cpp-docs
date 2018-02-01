---
title: "C Integer Constants | Microsoft Docs"
ms.custom: ""
ms.date: "02/01/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["integer constants"]
ms.assetid: fcf6b83c-2038-49ec-91ca-3d5ca1f83037
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# C Integer Constants

An "integer constant" is a decimal (base 10), octal (base 8), or hexadecimal (base 16) number that represents an integral value. Use integer constants to represent integer values that cannot be changed.

## Syntax

*integer-constant*:  
&nbsp;&nbsp;*decimal-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*octal-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*hexadecimal-constant* *integer-suffix*<sub>opt</sub>  

*decimal-constant*:  
&nbsp;&nbsp;*nonzero-digit*  
&nbsp;&nbsp;*decimal-constant* *digit*  

*octal-constant*:  
&nbsp;&nbsp;**0**  
&nbsp;&nbsp;*octal-constant* *octal-digit*  

*hexadecimal-constant*:  
&nbsp;&nbsp;**0x**  *hexadecimal-digit*  
&nbsp;&nbsp;**0X**  *hexadecimal-digit*  
&nbsp;&nbsp;*hexadecimal-constant* *hexadecimal-digit*  

*nonzero-digit*: one of  
&nbsp;&nbsp;**1 2 3 4 5 6 7 8 9**  

*octal-digit*: one of  
&nbsp;&nbsp;**0 1 2 3 4 5 6 7**  

*hexadecimal-digit*: one of  
&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**  
&nbsp;&nbsp;**a b c d e f**  
&nbsp;&nbsp;**A B C D E F**  
  
*integer-suffix*:  
&nbsp;&nbsp;*unsigned-suffix* *long-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*long-suffix* *unsigned-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*unsigned-suffix* *64-bit-integer-suffix*<sub>opt</sub>

*unsigned-suffix*: one of  
&nbsp;&nbsp;**u U**  

*long-suffix*: one of  
&nbsp;&nbsp;**l L**  
  
*64-bit-integer-suffix*:  one of
&nbsp;&nbsp;**i64 I64**  

Integer constants are positive unless they are preceded by a minus sign (**-**). The minus sign is interpreted as the unary arithmetic negation operator. (See [Unary Arithmetic Operators](../c-language/unary-arithmetic-operators.md) for information about this operator.)

If an integer constant begins with **0x** or **0X**, it is hexadecimal. If it begins with the digit **0**, it is octal. Otherwise, it is assumed to be decimal.

The following lines are equivalent:

```C
0x1C   /* = Hexadecimal representation for decimal 28 */
034    /* = Octal representation for decimal 28 */
```

No white-space characters can separate the digits of an integer constant. These examples show valid decimal, octal, and hexadecimal constants.

```C
/* Decimal Constants */
10
132
32179

/* Octal Constants */
012
0204
076663

/* Hexadecimal Constants */
0xa or 0xA
0x84
0x7dB3 or 0X7DB3
```

## See also

[C Constants](../c-language/c-constants.md)  
