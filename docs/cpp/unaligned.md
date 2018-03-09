---
title: "__unaligned | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["__unaligned_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__unaligned keyword [C++]"]
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# __unaligned
When you declare a pointer with the `__unaligned` modifier, the compiler assumes the pointer addresses data that is not aligned. Consequently, platform appropriate code is generated to handle unaligned reads and writes through the pointer.
  
## Remarks  
 The `__unaligned` modifier is not valid for x86 platform.
 
 This modifier describes the alignment of the addressed data; the pointer itself is assumed to be aligned.
 
 The necessity of the __unaligned keword varies by platform and enviornment. Failure to mark data appropritely can result in issues ranging from performance penalties to hardware faults.
 
 For more information about alignment, see:  
  
-   [align](../cpp/align-cpp.md)  
  
-   [__alignof Operator](../cpp/alignof-operator.md)  
  
-   [pack](../preprocessor/pack.md)  
  
-   [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Examples of Structure Alignment](../build/examples-of-structure-alignment.md)  

## See Also  
 [Keywords](../cpp/keywords-cpp.md)
