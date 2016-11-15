---
title: "Fundamental Types  (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__wchar_t_cpp"
  - "long_double_cpp"
  - "unsigned"
  - "wchar_t_cpp"
  - "float_cpp"
  - "wchar_t"
  - "char"
  - "char_cpp"
  - "signed"
  - "__wchar_t"
  - "signed_cpp"
  - "short"
  - "double_cpp"
  - "int_cpp"
  - "long"
  - "__intn_cpp"
  - "short_cpp"
  - "double"
  - "unsigned_cpp"
  - "float"
  - "__intn"
  - "long_cpp"
  - "int"
  - "long_double"
  - "unsigned_int"
  - "__int8"
  - "__int8_cpp"
  - "__int16"
  - "__int16_cpp"
  - "__int32"
  - "__int32_cpp"
  - "__int64"
  - "__int64_cpp"
  - "__int128"
  - "__int128_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "specifiers [C++], type"
  - "float keyword [C++]"
  - "char keyword [C++]"
  - "__wchar_t keyword [C++]"
  - "signed types [C++], summary of data types"
  - "Integer data type, C++ data types"
  - "arithmetic operations [C++], types"
  - "int data type"
  - "unsigned types [C++], summary of data types"
  - "short data type"
  - "double data type, summary of types"
  - "long long keyword [C++]"
  - "long double keyword [C++]"
  - "unsigned types [C++]"
  - "signed types [C++]"
  - "void keyword [C++]"
  - "storage [C++], basic type"
  - "integral types, C++"
  - "wchar_t keyword [C++]"
  - "floating-point numbers, C++ data types"
  - "long keyword [C++]"
  - "type specifiers [C++]"
  - "integral types"
  - "long keyword [C++], C++ data types"
  - "storing types [C++]"
  - "data types [C++], void"
ms.assetid: 58b0106a-0406-4b74-a430-7cbd315c0f89
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
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
# Fundamental Types  (C++)
Fundamental types in C++ are divided into three categories: integral, floating point, and void. Integral types are capable of handling whole numbers. Floating point types are capable of specifying values that may have fractional parts.  
  
 The [void](../cpp/void-cpp.md) type describes an empty set of values. No variable of type `void` can be specified — it is used primarily to declare functions that return no values or to declare generic pointers to untyped or arbitrarily typed data. Any expression can be explicitly converted or cast to type `void`. However, such expressions are restricted to the following uses:  
  
-   An expression statement. (See [Expressions](../cpp/expressions-cpp.md), for more information.)  
  
-   The left operand of the comma operator. (See [Comma Operator](../cpp/comma-operator.md) for more information.)  
  
-   The second or third operand of the conditional operator (`? :`). (See [Expressions with the Conditional Operator](../cpp/conditional-operator-q.md) for more information.)  
  
 The following table explains the restrictions on type sizes. These restrictions are independent of the Microsoft implementation.  
  
### Fundamental Types of the C++ Language  
  
|Category|Type|Contents|  
|--------------|----------|--------------|  
|Integral|`char`|Type `char` is an integral type that usually contains members of the basic execution character set — By default, this is ASCII in Microsoft C++.<br /><br /> The C++ compiler treats variables of type `char`, `signed` `char`, and `unsigned` `char` as having different types. Variables of type `char` are promoted to `int` as if they are type `signed` `char` by default, unless the /J compilation option is used. In this case they are treated as type `unsigned` `char` and are promoted to `int` without sign extension.|  
||`bool`|Type `bool` is an integral type that can have one of the two values `true` or `false`. Its size is unspecified.|  
||`short`|Type `short` `int` (or simply `short`) is an integral type that is larger than or equal to the size of type `char`, and shorter than or equal to the size of type `int`.<br /><br /> Objects of type `short` can be declared as `signed` `short` or `unsigned short`. `Signed short` is a synonym for `short`.|  
||`int`|Type `int` is an integral type that is larger than or equal to the size of type `short` `int`, and shorter than or equal to the size of type `long`.<br /><br /> Objects of type `int` can be declared as `signed` `int` or `unsigned` `int`. `Signed` `int` is a synonym for `int`.|  
||`__int8`, `__int16`, `__int32`, `__int64`|Sized integer `__int``n`, where `n` is the size, in bits, of the integer variable. `__int8`, `__int16`, `__int32` and `__int64` are Microsoft-specific keywords. Not all types are available on all architectures. `(__int128` is not supported.)|  
||`long`|Type `long` (or `long` `int`) is an integral type that is larger than or equal to the size of type `int`.<br /><br /> Objects of type `long` can be declared as `signed` `long` or `unsigned` `long`. `Signed` `long` is a synonym for `long`.|  
||`long` `long`|Larger than an unsigned `long`.<br /><br /> Objects of type `long long` can be declared as `signed` `long long` or `unsigned` `long long`. `Signed` `long long` is a synonym for `long long`.|  
||`wchar_t`, `__wchar_t`|A variable of type `wchar_t` designates a wide-character or multibyte character type. By default, `wchar_t` is a native type, but you can use [/Zc:wchar_t-](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) to make `wchar_t` a typedef for `unsigned short`. The `__wchar_t` type is a Microsoft-specific synonym for the native `wchar_t` type.<br /><br /> Use the L prefix before a character or string literal to designate the wide-character type.|  
|Floating point|`float`|Type `float` is the smallest floating point type.|  
||`double`|Type `double` is a floating point type that is larger than or equal to type `float`, but shorter than or equal to the size of type `long` `double`.<br /><br /> Microsoft specific: The representation of `long double` and `double` is identical. However, `long double` and `double` are separate types.|  
||`long double`|Type `long` `double` is a floating point type that is larger than or equal to type `double`.|  
  
 **Microsoft Specific**  
  
 The following table lists the amount of storage required for fundamental types in Microsoft C++.  
  
### Sizes of Fundamental Types  
  
|Type|Size|  
|----------|----------|  
|`bool`, `char`, `unsigned char`, `signed char`, `__int8`|1 byte|  
|`__int16`, `short`, `unsigned short`, `wchar_t`, `__wchar_t`|2 bytes|  
|`float`, `__int32`, `int`, `unsigned int`, `long`, `unsigned long`|4 bytes|  
|`double`, `__int64`, `long double`, `long long`|8 bytes|  
  
 **END Microsoft Specific**  
  
 See [Data Type Ranges](../cpp/data-type-ranges.md) for a summary of the range of values of each type.  
  
 For more information about type conversion, see [Standard Conversions](../cpp/standard-conversions.md).  
  
## See Also  
 [Data Type Ranges](../cpp/data-type-ranges.md)