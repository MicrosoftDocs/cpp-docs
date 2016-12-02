---
title: "align (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "align"
  - "align_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "align __declspec keyword"
  - "__declspec keyword [C++], align"
ms.assetid: 9cb63f58-658b-4425-ac47-af8eabfc5878
caps.latest.revision: 22
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
# align (C++)
In Visual Studio 2015 and later, use the C++11 standard `alignas` specifier to control alignment. For more information, see [Alignment](../cpp/alignment-cpp-declarations.md).  
  
 **Microsoft Specific**  
  
 Use `__declspec(align(#))` to precisely control the alignment of user-defined data (for example, static allocations or automatic data in a function).  
  
## Syntax  
  
```  
__declspec( align( # ) ) declarator  
```  
  
## Remarks  
 Writing applications that use the latest processor instructions introduces some new constraints and issues. In particular, many new instructions require that data must be aligned to 16-byte boundaries. Additionally, by aligning frequently used data to the cache line size of a specific processor, you improve cache performance. For example, if you define a structure whose size is less than 32 bytes, you may want to align it to 32 bytes to make sure that objects of that structure type are efficiently cached.  
  
 \# is the alignment value. Valid entries are integer powers of two from 1 to 8192 (bytes), such as 2, 4, 8, 16, 32, or 64. `declarator` is the data that you are declaring as aligned.  
  
 For information about how to return a value of type `size_t` that is the alignment requirement of the type, see [__alignof](../cpp/alignof-operator.md). For information about how to declare unaligned pointers when targeting 64-bit processors, see [__unaligned](../cpp/unaligned.md).  
  
 You can use `__declspec(align(#))` when you define a `struct`, `union`, or `class`, or when you declare a variable.  
  
 The compiler does not guarantee or attempt to preserve the alignment attribute of data during a copy or data transform operation. For example, [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) can copy a struct declared with `__declspec(align(#))` to any location. Note that ordinary allocators—for example, [malloc](../c-runtime-library/reference/malloc.md), C++ [operator new](new-operator-cpp.md), and the Win32 allocators—return memory that is usually not sufficiently aligned for `__declspec(align(#))` structures or arrays of structures. To guarantee that the destination of a copy or data transformation operation is correctly aligned, use [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md), or write your own allocator.  
  
 You cannot specify alignment for function parameters. When data that has an alignment attribute is passed by value on the stack, its alignment is controlled by the calling convention. If data alignment is important in the called function, copy the parameter into correctly aligned memory before use.  
  
 Without `__declspec(align(#))`, Visual C++ generally aligns data on natural boundaries based on the target processor and the size of the data, up to 4-byte boundaries on 32-bit processors, and 8-byte boundaries on 64-bit processors. Data in classes or structures is aligned in the class or structure at the minimum of its natural alignment and the current packing setting (from #pragma `pack` or the **/Zp** compiler option).  
  
 This example demonstrates the use of `__declspec(align(#))`:  
  
```  
__declspec(align(32)) struct Str1{  
   int a, b, c, d, e;  
};  
```  
  
 This type now has a 32-byte alignment attribute. This means that all static and automatic instances start on a 32-byte boundary. Additional structure types declared with this type as a member preserve this type's alignment attribute, that is, any structure with `Str1` as an element will have an alignment attribute of at least 32.  
  
 Note that `sizeof(struct Str1)` is equal to 32. This implies that if an array of Str1 objects is created, and the base of the array is 32-byte aligned, each member of the array is also 32-byte aligned. To create an array whose base is correctly aligned in dynamic memory, use [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md), or write your own allocator.  
  
 The `sizeof` value for any structure is the offset of the final member, plus that member's size, rounded up to the nearest multiple of the largest member alignment value or the whole structure alignment value, whichever is larger.  
  
 The compiler uses these rules for structure alignment:  
  
-   Unless overridden with `__declspec(align(#))`, the alignment of a scalar structure member is the minimum of its size and the current packing.  
  
-   Unless overridden with `__declspec(align(#))`, the alignment of a structure is the maximum of the individual alignments of its member(s).  
  
-   A structure member is placed at an offset from the start of its parent structure which is the smallest multiple of its alignment greater than or equal to the offset of the end of the previous member.  
  
-   The size of a structure is the smallest multiple of its alignment greater than or equal to the offset of the end of its last member.  
  
 `__declspec(align(#))` can only increase alignment restrictions.  
  
 For more information, see:  
  
-   [align Examples](#vclrfalignexamples)  
  
-   [Defining New Types with __declspec(align(#))](#vclrf_declspecaligntypedef)  
  
-   [Aligning Data in Thread Local Storage](#vclrfthreadlocalstorageallocation)  
  
-   [How align Works with Data Packing](#vclrfhowalignworkswithdatapacking)  
  
-   [Examples of Structure Alignment](../build/examples-of-structure-alignment.md) (x64 specific)  
  
##  <a name="vclrfalignexamples"></a> align Examples  
 The following examples show how `__declspec(align(#))` affects the size and alignment of data structures. The examples assume the following definitions:  
  
```  
#define CACHE_LINE  32  
#define CACHE_ALIGN __declspec(align(CACHE_LINE))  
```  
  
 In this example, the `S1` structure is defined by using `__declspec(align(32))`. All uses of `S1` for a variable definition or in other type declarations are 32-byte aligned. `sizeof(struct S1)` returns 32, and `S1` has 16 padding bytes following the 16 bytes required to hold the four integers. Each `int` member requires 4-byte alignment, but the alignment of the structure itself is declared to be 32. Therefore, the overall alignment is 32.  
  
```  
struct CACHE_ALIGN S1 { // cache align all instances of S1  
   int a, b, c, d;  
};  
struct S1 s1;   // s1 is 32-byte cache aligned  
```  
  
 In this example, `sizeof(struct S2)` returns 16, which is exactly the sum of the member sizes, because that is a multiple of the largest alignment requirement (a multiple of 8).  
  
```  
__declspec(align(8)) struct S2 {  
   int a, b, c, d;  
};  
```  
  
 In the following example, `sizeof(struct S3)` returns 64.  
  
```  
struct S3 {  
   struct S1 s1;   // S3 inherits cache alignment requirement  
                  // from S1 declaration  
   int a;         // a is now cache aligned because of s1  
                  // 28 bytes of trailing padding  
};  
```  
  
 In this example, notice that `a` has the alignment of its natural type, in this case, 4 bytes. However, `S1` must be 32-byte aligned. Twenty-eight bytes of padding follow `a`, so that `s1` starts at offset 32. `S4` then inherits the alignment requirement of `S1`, because it is the largest alignment requirement in the structure. `sizeof(struct S4)` returns 64.  
  
```  
struct S4 {  
   int a;  
   // 28 bytes padding  
    struct S1 s1;      // S4 inherits cache alignment requirement of S1  
};  
```  
  
 The following three variable declarations also use `__declspec(align(#))`. In each case, the variable must be 32-byte aligned. In the case of the array, the base address of the array, not each array member, is 32-byte aligned. The `sizeof` value for each array member is not affected when you use `__declspec(align(#))`.  
  
```  
CACHE_ALIGN int i;  
CACHE_ALIGN int array[128];  
CACHE_ALIGN struct s2 s;  
```  
  
 To align each member of an array, code such as this should be used:  
  
```  
typedef CACHE_ALIGN struct { int a; } S5;  
S5 array[10];  
```  
  
 In this example, notice that aligning the structure itself and aligning the first element have the same effect:  
  
```  
CACHE_ALIGN struct S6 {  
   int a;  
   int b;  
};  
  
struct S7 {  
   CACHE_ALIGN int a;  
               int b;  
};  
```  
  
 `S6` and `S7` have identical alignment, allocation, and size characteristics.  
  
 In this example, the alignment of the starting addresses of a, b, c, and d are 4, 1, 4, and 1, respectively.  
  
```  
void fn() {   
   int a;  
   char b;  
   long c;  
   char d[10]  
}   
```  
  
 The alignment when memory is allocated on the heap depends on which allocation function is called.  For example, if you use `malloc`, the result depends on the operand size. If *arg* >= 8, the memory returned is 8 byte aligned. If *arg* < 8, the alignment of the memory returned is the first power of 2 less than *arg*. For example, if you use malloc(7), the alignment is 4 bytes.  
  
##  <a name="vclrf_declspecaligntypedef"></a> Defining New Types with __declspec(align(#))  
 You can define a type with an alignment characteristic.  
  
 For example, you can define a `struct` with an alignment value this way:  
  
```  
struct aType {int a; int b;};  
typedef __declspec(align(32)) struct aType bType;  
```  
  
 Now, `aType` and `bType` are the same size (8 bytes) but variables of type `bType` will be 32-byte aligned.  
  
##  <a name="vclrfthreadlocalstorageallocation"></a> Aligning Data in Thread Local Storage  
 Static thread-local storage (TLS) created with the `__declspec(thread)` attribute and put in the TLS section in the image works for alignment exactly like normal static data. To create TLS data, the operating system allocates memory the size of the TLS section and respects the TLS section alignment attribute.  
  
 This example shows various ways to place aligned data into thread local storage.  
  
```  
// put an aligned integer in TLS  
__declspec(thread) __declspec(align(32)) int a;     
  
// define an aligned structure and put a variable of the struct type  
// into TLS  
__declspec(thread) __declspec(align(32)) struct F1 { int a; int b; } a;  
  
// create an aligned structure   
struct CACHE_ALIGN S9 {  
   int a;  
   int b;  
};  
// put a variable of the structure type into TLS  
__declspec(thread) struct S9 a;  
```  
  
##  <a name="vclrfhowalignworkswithdatapacking"></a> How align Works with Data Packing  
 The **/Zp** compiler option and the `pack` pragma have the effect of packing data for structure and union members. This example shows how **/Zp** and `__declspec(align(#))` work together:  
  
```  
struct S {  
   char a;  
   short b;  
   double c;  
   CACHE_ALIGN double d;  
   char e;  
   double f;  
};  
```  
  
 The following table lists the offset of each member under a variety of **/Zp** (or #pragma `pack`) values, showing how the two interact.  
  
|Variable|/Zp1|/Zp2|/Zp4|/Zp8|  
|--------------|-----------|-----------|-----------|-----------|  
|a|0|0|0|0|  
|b|1|2|2|2|  
|c|3|4|4|8|  
|d|32|32|32|32|  
|e|40|40|40|40|  
|f|41|42|44|48|  
|sizeof(S)|64|64|64|64|  
  
 For more information, see [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md).  
  
 The offset of an object is based on the offset of the previous object and the current packing setting, unless the object has a `__declspec(align(#))` attribute, in which case the alignment is based on the offset of the previous object and the `__declspec(align(#))` value for the object.  
  
### END Microsoft Specific  
  
## See Also  
 [__declspec](../cpp/declspec.md)   
 [Overview of ARM ABI Conventions](../build/overview-of-arm-abi-conventions.md)   
 [Overview of x64 Calling Conventions](../build/overview-of-x64-calling-conventions.md)