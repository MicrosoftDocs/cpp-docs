---
title: "C Bit Fields | Microsoft Docs"
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
  - "bitfields"
  - "bit fields"
ms.assetid: 9faf74c4-7fd5-4b44-ad18-04485193d06e
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
# C Bit Fields
In addition to declarators for members of a structure or union, a structure declarator can also be a specified number of bits, called a "bit field." Its length is set off from the declarator for the field name by a colon. A bit field is interpreted as an integral type.  
  
## Syntax  
 *struct-declarator*:  
 *declarator*  
  
 *type-specifier declarator* opt**:** *constant-expression*  
  
 The *constant-expression* specifies the width of the field in bits. The *type-specifier* for the `declarator` must be `unsigned int`, **signed int**, or `int`, and the *constant-expression* must be a nonnegative integer value. If the value is zero, the declaration has no `declarator`. Arrays of bit fields, pointers to bit fields, and functions returning bit fields are not allowed. The optional `declarator` names the bit field. Bit fields can only be declared as part of a structure. The address-of operator (**&**) cannot be applied to bit-field components.  
  
 Unnamed bit fields cannot be referenced, and their contents at run time are unpredictable. They can be used as "dummy" fields, for alignment purposes. An unnamed bit field whose width is specified as 0 guarantees that storage for the member following it in the *struct-declaration-list* begins on an `int` boundary.  
  
 Bit fields must also be long enough to contain the bit pattern. For example, these two statements are not legal:  
  
```  
short a:17;        /* Illegal! */  
int long y:33;     /* Illegal! */  
```  
  
 This example defines a two-dimensional array of structures named `screen`.  
  
```  
struct   
{  
    unsigned short icon : 8;  
    unsigned short color : 4;  
    unsigned short underline : 1;  
    unsigned short blink : 1;  
} screen[25][80];  
```  
  
 The array contains 2,000 elements. Each element is an individual structure containing four bit-field members: `icon`, `color`, `underline`, and `blink`. The size of each structure is two bytes.  
  
 Bit fields have the same semantics as the integer type. This means a bit field is used in expressions in exactly the same way as a variable of the same base type would be used, regardless of how many bits are in the bit field.  
  
 **Microsoft Specific**  
  
 Bit fields defined as `int` are treated as signed. A Microsoft extension to the ANSI C standard allows `char` and **long** types (both **signed** and `unsigned`) for bit fields. Unnamed bit fields with base type **long**, **short**, or `char` (**signed** or `unsigned`) force alignment to a boundary appropriate to the base type.  
  
 Bit fields are allocated within an integer from least-significant to most-significant bit. In the following code  
  
```  
struct mybitfields  
{  
    unsigned short a : 4;  
    unsigned short b : 5;  
    unsigned short c : 7;  
} test;  
  
int main( void );  
{  
    test.a = 2;  
    test.b = 31;  
    test.c = 0;  
}  
```  
  
 the bits would be arranged as follows:  
  
```  
00000001 11110010  
cccccccb bbbbaaaa  
```  
  
 Since the 8086 family of processors stores the low byte of integer values before the high byte, the integer `0x01F2` above would be stored in physical memory as `0xF2` followed by `0x01`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Structure Declarations](../c-language/structure-declarations.md)