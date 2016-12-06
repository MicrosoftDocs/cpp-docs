---
title: "Reference (C++ AMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::Reference (C++ AMP)"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++ Accelerated Massive Parallelism, reference"
ms.assetid: 372a8aed-8a53-48c9-996f-9c3cf09c9fa8
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
# Reference (C++ AMP)
This section contains reference information for the C++ Accelerated Massive Parallelism (C++ AMP) runtime.  
  
> [!NOTE]
>  The C++ language standard reserves the use of identifiers that begin with an underscore (`_`) character for implementations such as libraries. Do not use names beginning with an underscore in your code. The behavior of code elements whose names follow this convention are not guaranteed and are subject to change in future releases. For these reasons, such code elements are omitted from this documentation.  
  
## In This Section  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)  
 Provides classes and functions that enable the acceleration of C++ code on data parallel hardware.  
  
 [Concurrency::direct3d Namespace](concurrency-direct3d-namespace.md)  
 Provides functions that support D3D interoperability. Enables seamless use of D3D resources for compute in AMP code and the use of resources created in AMP in D3D code, without creating redundant intermediate copies. You can use C++ AMP to incrementally accelerate the compute-intensive sections of your DirectX applications and use the D3D API on data produced from AMP computations.  
  
 [Concurrency::fast_math Namespace](concurrency-fast-math-namespace.md)  
 Functions in the `fast_math` namespace are not C99-compliant. Only single-precision versions of each function are provided. These functions use the DirectX intrinsic functions, which are faster than the corresponding functions in the `precise_math` namespace and do not require extended double-precision support on the accelerator, but they are less accurate. There are two versions of each function for source-level compatibility with C99 code; both versions take and return single-precision values.  
  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)  
 Provides types and functions that are designed for graphics programming.  
  
 [Concurrency::precise_math Namespace](concurrency-precise-math-namespace.md)  
 Functions in the `precise_math` namespace are C99 compliant. Both single-precision and double-precision versions of each function are included. These functions—this includes the single-precision functions—require extended double-precision support on the accelerator.  
  
## Related Sections  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)  
 C++ AMP accelerates the execution of your C++ code by taking advantage of the data-parallel hardware that's commonly present as a graphics processing unit (GPU) on a discrete graphics card.





