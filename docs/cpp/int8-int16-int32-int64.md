---
title: "__int8, __int16, __int32, __int64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__int8_cpp"
  - "__int64"
  - "__int8"
  - "__int16"
  - "__int16_cpp"
  - "__int64_cpp"
  - "__int32_cpp"
  - "__int32"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__int16 keyword [C++]"
  - "integer data type, integer types in C++"
  - "__int32 keyword [C++]"
  - "integer types [C++]"
  - "__int8 keyword [C++]"
  - "__int64 keyword [C++]"
ms.assetid: 8e384602-2578-4980-8cc8-da63842356b2
caps.latest.revision: 11
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
# __int8, __int16, __int32, __int64
## Microsoft Specific  
 Microsoft C/C++ features support for sized integer types. You can declare 8-, 16-, 32-, or 64-bit integer variables by using the **__int***n* type specifier, where *n* is 8, 16, 32, or 64.  
  
 The following example declares one variable for each of these types of sized integers:  
  
```  
__int8 nSmall;      // Declares 8-bit integer  
__int16 nMedium;    // Declares 16-bit integer  
__int32 nLarge;     // Declares 32-bit integer  
__int64 nHuge;      // Declares 64-bit integer  
```  
  
 The types `__int8`, `__int16`, and `__int32` are synonyms for the ANSI types that have the same size, and are useful for writing portable code that behaves identically across multiple platforms. The `__int8` data type is synonymous with type `char`, `__int16` is synonymous with type **short**, and `__int32` is synonymous with type `int`. The `__int64` type has no ANSI equivalent.  
  
## Example  
 The following sample shows that an __int*xx* parameter will be promoted to `int`:  
  
```  
// sized_int_types.cpp  
  
#include <stdio.h>  
  
void func(int i) {  
    printf_s("%s\n", __FUNCTION__);  
}  
  
int main()  
{  
    __int8 i8 = 100;  
    func(i8);   // no void func(__int8 i8) function  
                // __int8 will be promoted to int  
}  
```  
  
```Output  
func  
```  
  
## END Microsoft Specific  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 [Fundamental Types](../cpp/fundamental-types-cpp.md)   
 [Data Type Ranges](../cpp/data-type-ranges.md)