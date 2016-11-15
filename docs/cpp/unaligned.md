---
title: "__unaligned | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__unaligned_cpp"
  - "__unaligned"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__unaligned keyword [C++]"
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
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
# __unaligned
When you declare a pointer with the `__unaligned` modifier, the compiler assumes that the pointer addresses data that is not aligned. Consequently, for an application that targets an Itanium Processor Family (IPF) computer, the compiler generates code that reads the unaligned data one byte at a time.  
  
## Remarks  
 The `__unaligned` modifier is valid for the [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] and [!INCLUDE[vcpritanium](../cpp/includes/vcpritanium_md.md)] compilers but affects only applications that target an IPF computer. This modifier describes the alignment of the addressed data only; the pointer itself is assumed to be aligned.  
  
 The [!INCLUDE[vcpritanium](../cpp/includes/vcpritanium_md.md)] processor generates an alignment fault when it accesses misaligned data, and the time to process the fault weakens performance. Use the `__unaligned` modifier to cause the processor to read data one byte at a time and avoid the fault. This modifier is not required for [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] applications because the [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] processor handles misaligned data without faulting.  
  
 For more information about alignment, see:  
  
-   [align](../cpp/align-cpp.md)  
  
-   [__alignof Operator](../cpp/alignof-operator.md)  
  
-   [pack](../preprocessor/pack.md)  
  
-   [/Zp (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Examples of Structure Alignment](../build/examples-of-structure-alignment.md)  
  
## Example  
  
```  
// unaligned_keyword.cpp  
// compile with: /c  
// processor: x64 IPF  
#include <stdio.h>  
int main() {  
   char buf[100];  
  
   int __unaligned *p1 = (int*)(&buf[37]);  
   int *p2 = (int *)p1;  
  
   *p1 = 0;   // ok  
  
   __try {  
      *p2 = 0;  // throws an exception  
   }  
   __except(1) {  
      puts("exception");  
   }  
}  
```  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)