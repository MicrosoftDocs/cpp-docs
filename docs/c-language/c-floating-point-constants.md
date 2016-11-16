---
title: "C Floating-Point Constants | Microsoft Docs"
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
  - "types [C], constants"
  - "floating-point numbers, floating-point constants"
  - "constants, floating-point"
  - "floating-point constants"
  - "floating-point constants, about floating-point constants"
  - "double data type, floating-point constants"
ms.assetid: e1bd9b44-d6ab-470c-93e5-07142c7a2062
caps.latest.revision: 12
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
# C Floating-Point Constants
A "floating-point constant" is a decimal number that represents a signed real number. The representation of a signed real number includes an integer portion, a fractional portion, and an exponent. Use floating-point constants to represent floating-point values that cannot be changed.  
  
## Syntax  
 *floating-point-constant*:  
 *fractional-constant exponent-part* opt*floating-suffix* opt  
  
 *digit-sequence exponent-part floating-suffix* opt  
  
 *fractional-constant*:  
 *digit-sequence* opt**.** *digit-sequence*  
  
 *digit-sequence*  **.**  
  
 *exponent-part*:  
 **e**  *sign* opt*digit-sequence*  
  
 **E**  *sign* opt*digit-sequence*  
  
 *sign* : one of  
 **+ –**  
  
 *digit-sequence*:  
 *digit*  
  
 *digit-sequence digit*  
  
 *floating-suffix* : one of  
 **f l F L**  
  
 You can omit either the digits before the decimal point (the integer portion of the value) or the digits after the decimal point (the fractional portion), but not both. You can leave out the decimal point only if you include an exponent. No white-space characters can separate the digits or characters of the constant.  
  
 The following examples illustrate some forms of floating-point constants and expressions:  
  
```  
15.75  
1.575E1   /* = 15.75   */  
1575e-2   /* = 15.75   */  
-2.5e-3   /* = -0.0025 */  
25E-4     /* =  0.0025 */  
```  
  
 Floating-point constants are positive unless they are preceded by a minus sign (**–**). In this case, the minus sign is treated as a unary arithmetic negation operator. Floating-point constants have type **float**, **double**, or `long double`.  
  
 A floating-point constant without an **f**, **F**, **l**, or **L** suffix has type **double**. If the letter **f** or **F** is the suffix, the constant has type **float**. If suffixed by the letter **l** or **L**, it has type `long double`. For example:  
  
```  
100L  /* Has type long double  */  
100F  /* Has type float        */  
```  
  
 Note that the Microsoft C compiler maps **long double** to type **double**. See [Storage of Basic Types](../c-language/storage-of-basic-types.md) for information about type **double**, **float**, and **long**.  
  
 You can omit the integer portion of the floating-point constant, as shown in the following examples. The number .75 can be expressed in many ways, including the following:  
  
```  
.0075e2  
0.075e1  
.075e1  
75e-2  
```  
  
## See Also  
 [C Constants](../c-language/c-constants.md)