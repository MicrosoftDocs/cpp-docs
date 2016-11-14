---
title: "IEEE Floating-Point Representation | Microsoft Docs"
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
helpviewer_keywords: 
  - "float keyword"
  - "real*8 value"
  - "floating-point numbers, IEEE representation"
  - "double data type, floating-point representation"
  - "IEEE floating point representation"
  - "real*10 value"
  - "long double"
  - "real*4 value"
ms.assetid: 537833e8-fe05-49fc-8169-55fd0314b195
caps.latest.revision: 7
author: "corob-msft"
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
# IEEE Floating-Point Representation
Microsoft Visual C++ is consistent with the IEEE numeric standards. There are three internal varieties of real numbers. Real\*4 and real\*8 are used in Visual C++. Real\*4 is declared using the word **float**. Real\*8 is declared using the word **double**. In Windows 32-bit programming, the `long double` data type maps to **double**. There is, however, assembly language support for computations using the real*10 data type.  
  
 The values are stored as follows:  
  
|Value|Stored as|  
|-----------|---------------|  
|real*4|sign bit, 8-bit exponent, 23-bit mantissa|  
|real*8|sign bit, 11-bit exponent, 52-bit mantissa|  
|real*10|sign bit, 15-bit exponent, 64-bit mantissa|  
  
 In real*4 and real\*8 formats, there is an assumed leading 1 in the mantissa that is not stored in memory, so the mantissas are actually 24 or 53 bits, even though only 23 or 52 bits are stored. The real\*10 format actually stores this bit.  
  
 The exponents are biased by half of their possible value. This means you subtract this bias from the stored exponent to get the actual exponent. If the stored exponent is less than the bias, it is actually a negative exponent.  
  
 The exponents are biased as follows:  
  
|Exponent|Biased by|  
|--------------|---------------|  
|8-bit (real*4)|127|  
|11-bit (real*8)|1023|  
|15-bit (real*10)|16383|  
  
 These exponents are not powers of ten; they are powers of two. That is, 8-bit stored exponents can be up to 127. The value 2**127 is roughly equivalent to 10\*\*38, which is the actual limit of real\*4.  
  
 The mantissa is stored as a binary fraction of the form 1.XXX... . This fraction has a value greater than or equal to 1 and less than 2. Note that real numbers are always stored in normalized form; that is, the mantissa is left-shifted such that the high-order bit of the mantissa is always 1. Because this bit is always 1, it is assumed (not stored) in the real*4 and real\*8 formats. The binary (not decimal) point is assumed to be just to the right of the leading 1.  
  
 The format, then, for the various sizes is as follows:  
  
|Format|BYTE 1|BYTE 2|BYTE 3|BYTE 4|...|BYTE n|  
|------------|------------|------------|------------|------------|---------|------------|  
|real*4|`SXXX XXXX`|`XMMM MMMM`|`MMMM MMMM`|`MMMM MMMM`|||  
|real*8|`SXXX XXXX`|`XXXX MMMM`|`MMMM MMMM`|`MMMM MMMM`|...|`MMMM MMMM`|  
|real*10|`SXXX XXXX`|`XXXX XXXX`|`1MMM MMMM`|`MMMM MMMM`|...|`MMMM MMMM`|  
  
 `S` represents the sign bit, the `X`'s are the exponent bits, and the `M`'s are the mantissa bits. Note that the leftmost bit is assumed in real*4 and real\*8 formats, but is present as "1" in BYTE 3 of the real\*10 format.  
  
 To shift the binary point properly, you first unbias the exponent and then move the binary point to the right or left the appropriate number of bits.  
  
## Examples  
 The following are some examples in real*4 format:  
  
-   In the following example, the sign bit is zero, and the stored exponent is 128, or 100 0000 0 in binary, which is 127 plus 1. The stored mantissa is (1.) 000 0000 ... 0000 0000, which has an implied leading 1 and binary point, so the actual mantissa is one.  
  
    ```  
                        SXXX XXXX XMMM MMMM ... MMMM MMMM  
    2   =  1  * 2**1  = 0100 0000 0000 0000 ... 0000 0000 = 4000 0000  
    ```  
  
-   Same as +2 except that the sign bit is set. This is true for all IEEE format floating-point numbers.  
  
    ```  
    -2  = -1  * 2**1  = 1100 0000 0000 0000 ... 0000 0000 = C000 0000  
    ```  
  
-   Same mantissa, exponent increases by one (biased value is 129, or 100 0000 1 in binary.  
  
    ```  
    4  =  1  * 2**2  = 0100 0000 1000 0000 ... 0000 0000 = 4080 0000  
    ```  
  
-   Same exponent, mantissa is larger by half — it's (1.) 100 0000 ...0000 0000, which, since this is a binary fraction, is 1 1/2 (the values of the fractional digits are 1/2, 1/4, 1/8, and so forth).  
  
    ```  
    6  = 1.5 * 2**2  = 0100 0000 1100 0000 ... 0000 0000 = 40C0 0000  
    ```  
  
-   Same exponent as other powers of two, mantissa is one less than two at 127, or 011 1111 1 in binary.  
  
    ```  
    1  = 1   * 2**0  = 0011 1111 1000 0000 ... 0000 0000 = 3F80 0000  
    ```  
  
-   The biased exponent is 126, 011 1111 0 in binary, and the mantissa is (1.) 100 0000 ... 0000 0000, which is 1 1/2.  
  
    ```  
    .75 = 1.5 * 2**-1 = 0011 1111 0100 0000 ... 0000 0000 = 3F40 0000  
    ```  
  
-   Exactly the same as two except that the bit that represents 1/4 is set in the mantissa.  
  
    ```  
    2.5 = 1.25 * 2**1 = 0100 0000 0010 0000 ... 0000 0000 = 4020 0000  
    ```  
  
-   1/10 is a repeating fraction in binary. The mantissa is just shy of 1.6, and the biased exponent says that 1.6 is to be divided by 16 (it is 011 1101 1 in binary, which is 123 in decimal). The true exponent is 123 – 127 = –4, which means that the factor by which to multiply is 2**–4 = 1/16. Note that the stored mantissa is rounded up in the last bit — an attempt to represent the unrepresentable number as accurately as possible. (The reason that 1/10 and 1/100 are not exactly representable in binary is similar to the reason that 1/3 is not exactly representable in decimal.)  
  
    ```  
    0.1 = 1.6 * 2**-4 = 0011 1101 1100 1100 ... 1100 1101 = 3DCC CCCD  
    ```  
  
-   `0  = 1.0 * 2**-128 = all zeros--a special case.`  
  
## See Also  
 [Why Floating-Point Numbers May Lose Precision](../../build/reference/why-floating-point-numbers-may-lose-precision.md)