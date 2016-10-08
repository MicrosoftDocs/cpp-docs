---
title: "Compiler Intrinsics"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 48bb9929-7d78-4fd8-a092-ae3c9f971858
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Intrinsics
Most functions are contained in libraries, but some functions are built in (that is, intrinsic) to the compiler. These are referred to as intrinsic functions or intrinsics.  
  
## Remarks  
 If a function is an intrinsic, the code for that function is usually inserted inline, avoiding the overhead of a function call and allowing highly efficient machine instructions to be emitted for that function. An intrinsic is often faster than the equivalent inline assembly, because the optimizer has a built-in knowledge of how many intrinsics behave, so some optimizations can be available that are not available when inline assembly is used. Also, the optimizer can expand the intrinsic differently, align buffers differently, or make other adjustments depending on the context and arguments of the call.  
  
 The use of intrinsics affects the portability of code, because intrinsics that are available in Visual C++ might not be available if the code is compiled with other compilers and some intrinsics that might be available for some target architectures are not available for all architectures. However, intrinsics are usually more portable than inline assembly. The intrinsics are required on 64-bit architectures where inline assembly is not supported.  
  
 Some intrinsics, such as `__assume` and `__ReadWriteBarrier`, provide information to the compiler, which affects the behavior of the optimizer.  
  
 Some intrinsics are available only as intrinsics, and some are available both in function and intrinsic implementations. You can instruct the compiler to use the intrinsic implementation in one of two ways, depending on whether you want to enable only specific functions or you want to enable all intrinsics. The first way is to use `#pragma intrinsic(``intrinsic-function-name-list``)`. The pragma can be used to specify a single intrinsic or multiple intrinsics separated by commas. The second is to use the [/Oi (Generate Intrinsic Functions)](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md) compiler option, which makes all intrinsics on a given platform available. Under **/Oi**, use `#pragma function(``intrinsic-function-name-list``)` to force a function call to be used instead of an intrinsic. If the documentation for a specific intrinsic notes that the routine is only available as an intrinsic, then the intrinsic implementation is used regardless of whether **/Oi** or `#pragma intrinsic` is specified. In all cases, **/Oi** or `#pragma intrinsic` allows, but does not force, the optimizer to use the intrinsic. The optimizer can still call the function.  
  
 Some standard C/C++ library functions are available in intrinsic implementations on some architectures. When calling a CRT function, the intrinsic implementation is used if **/Oi** is specified on the command line.  
  
 A header file, <intrin.h>, is available that declares prototypes for the common intrinsic functions. Manufacturer-specific intrinsics are available in the <immintrin.h> and <ammintrin.h> header files. Additionally, certain Windows headers declare functions that map onto a compiler intrinsic.  
  
 The following sections list all intrinsics that are available on various architectures. For more information on how the intrinsics work on your particular target processor, refer to the manufacturer's reference documentation.  
  
-   [ARM Intrinsics](../VS_visualcpp/ARM-Intrinsics.md)  
  
-   [x86 Intrinsics List](../VS_visualcpp/x86-Intrinsics-List.md)  
  
-   [x64 (amd64) Intrinsics List](../VS_visualcpp/x64--amd64--Intrinsics-List.md)  
  
-   [Intrinsics Available on All Architectures](../VS_visualcpp/Intrinsics-Available-on-All-Architectures.md)  
  
-   [Alphabetical Listing of Intrinsic Functions](../VS_visualcpp/Alphabetical-Listing-of-Intrinsic-Functions.md)  
  
## See Also  
 [ARM Assembler Reference](../VS_visualcpp/ARM-Assembler-Reference.md)   
 [Microsoft Macro Assembler Reference](../VS_visualcpp/Microsoft-Macro-Assembler-Reference.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [C Run-Time Library Reference](../VS_visualcpp/C-Run-Time-Library-Reference.md)