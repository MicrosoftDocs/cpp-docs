---
title: "Aggregates and Unions | Microsoft Docs"
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
  - "aggregates [C++], and unions"
ms.assetid: 859fc211-b111-4f12-af98-de78e48f9b92
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
# Aggregates and Unions
Other types such as arrays, structs, and unions have stricter alignment requirements that ensure consistent aggregate and union storage and data retrieval. Here are the definitions for array, structure, and union:  
  
 Array  
 Contains an ordered group of adjacent data objects. Each object is called an element. All elements within an array have the same size and data type.  
  
 Structure  
 Contains an ordered group of data objects. Unlike the elements of an array, the data objects within a structure can have different data types and sizes. Each data object in a structure is called a member.  
  
 Union  
 An object that holds any one of a set of named members. The members of the named set can be of any type. The storage allocated for a union is equal to the storage required for the largest member of that union, plus any padding required for alignment.  
  
 The following table shows the strongly suggested alignment for the scalar members of unions and structures.  
  
||||  
|-|-|-|  
|Scalar Type|C Data Type|Required Alignment|  
|**INT8**|`char`|Byte|  
|**UINT8**|`unsigned char`|Byte|  
|**INT16**|**short**|Word|  
|**UINT16**|**unsigned short**|Word|  
|**INT32**|**int, long**|Doubleword|  
|**UINT32**|**unsigned int, unsigned long**|Doubleword|  
|**INT64**|`__int64`|Quadword|  
|**UINT64**|**unsigned __int64**|Quadword|  
|**FP32 (single precision)**|**float**|Doubleword|  
|**FP64 (double precision)**|**double**|Quadword|  
|**POINTER**|**\***|Quadword|  
|`__m64`|**struct __m64**|Quadword|  
|`__m128`|**struct __m128**|Octaword|  
  
 The following aggregate alignment rules apply:  
  
-   The alignment of an array is the same as the alignment of one of the elements of the array.  
  
-   The alignment of the beginning of a structure or a union is the maximum alignment of any individual member. Each member within the structure or union must be placed at its proper alignment as defined in the previous table, which may require implicit internal padding, depending on the previous member.  
  
-   Structure size must be an integral multiple of its alignment, which may require padding after the last member. Since structures and unions can be grouped in arrays, each array element of a structure or union must begin and end at the proper alignment previously determined.  
  
-   It is possible to align data in such a way as to be greater than the alignment requirements as long as the previous rules are maintained.  
  
-   An individual compiler may adjust the packing of a structure for size reasons. For example [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md) allows for adjusting the packing of structures.  
  
## See Also  
 [Types and Storage](../build/types-and-storage.md)