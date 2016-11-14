---
title: "__alignof Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__alignof"
  - "alignof"
  - "alignas"
  - "__alignof_cpp"
  - "alignof_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "alignas"
  - "alignment of structures"
  - "__alignof keyword [C++]"
  - "alignof"
  - "types [C++], alignment requirements"
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
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
# __alignof Operator
C++11 introduces the `alignof` operator that returns the alignment, in bytes, of the specified type. For maximum portability, you should use the alignof operator instead of the Microsoft-specific __alignof operator.  
  
 **Microsoft Specific**  
  
 Returns a value of type **size_t** that is the alignment requirement of the type.  
  
## Syntax  
  
```  
  
      __alignof(   
   type    
)  
```  
  
## Remarks  
 For example:  
  
|Expression|Value|  
|----------------|-----------|  
|**__alignof( char )**|1|  
|**__alignof( short )**|2|  
|**__alignof( int )**|4|  
|**__alignof( \__int64 )**|8|  
|**__alignof( float )**|4|  
|**__alignof( double )**|8|  
|**__alignof( char\* )**|4|  
  
 The `__alignof` value is the same as the value for `sizeof` for basic types. Consider, however, this example:  
  
```  
typedef struct { int a; double b; } S;  
// __alignof(S) == 8  
```  
  
 In this case, the `__alignof` value is the alignment requirement of the largest element in the structure.  
  
 Similarly, for  
  
```  
typedef __declspec(align(32)) struct { int a; } S;  
```  
  
 `__alignof(S)` is equal to `32`.  
  
 One use for `__alignof` would be as a parameter to one of your own memory-allocation routines. For example, given the following defined structure `S`, you could call a memory-allocation routine named `aligned_malloc` to allocate memory on a particular alignment boundary.  
  
```  
typedef __declspec(align(32)) struct { int a; double b; } S;  
int n = 50; // array size  
S* p = (S*)aligned_malloc(n * sizeof(S), __alignof(S));  
```  
  
 For more information on modifying alignment, see:  
  
-   [pack](../preprocessor/pack.md)  
  
-   [align](../cpp/align-cpp.md)  
  
-   [__unaligned](../cpp/unaligned.md)  
  
-   [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Examples of Structure Alignment](../build/examples-of-structure-alignment.md) (x64 specific)  
  
 For more information on differences in alignment in code for x86 and x64, see:  
  
-   [Conflicts with the x86 Compiler](../build/conflicts-with-the-x86-compiler.md)  
  
## END Microsoft Specific  
  
## See Also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)   
 [Keywords](../cpp/keywords-cpp.md)