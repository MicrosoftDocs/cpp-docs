---
title: "malloc Alignment | Microsoft Docs"
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
ms.assetid: a8d1d1b4-5122-456f-9a64-a50e105e55a5
caps.latest.revision: 14
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
# malloc Alignment
[malloc](../c-runtime-library/reference/malloc.md) is guaranteed to return memory that's suitably aligned for storing any object that has a fundamental alignment and that could fit in the amount of memory that's allocated. A *fundamental alignment* is an alignment that's less than or equal to the largest alignment that's supported by the implementation without an alignment specification. (In Visual C++, this is the alignment that's required for a `double`, or 8 bytes. In code that targets 64-bit platforms, it’s 16 bytes.) For example, a four-byte allocation would be aligned on a boundary that supports any four-byte or smaller object.  
  
 Visual C++ permits types that have *extended alignment*, which are also known as *over-aligned* types. For example, the SSE types [__m128](../cpp/m128.md) and `__m256`, and types that are declared by using `__declspec(align(``n``))` where `n` is greater than 8, have extended alignment. Memory alignment on a boundary that's suitable for an object that requires extended alignment is not guaranteed by `malloc`. To allocate memory for over-aligned types, use [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) and related functions.  
  
## See Also  
 [Stack Usage](../build/stack-usage.md)   
 [align](../cpp/align-cpp.md)   
 [__declspec](../cpp/declspec.md)