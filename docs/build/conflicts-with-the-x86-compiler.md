---
title: "Conflicts with the x86 Compiler | Microsoft Docs"
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
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
caps.latest.revision: 9
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
# Conflicts with the x86 Compiler
Data types that are larger than 4 bytes are not automatically aligned on the stack when you use the x86 compiler to compile an application. Because the architecture for the x86 compiler is a 4 byte aligned stack, anything larger than 4 bytes, for example, a 64-bit integer, cannot be automatically aligned to an 8-byte address.  
  
 Working with unaligned data has two implications.  
  
-   It may take longer to access unaligned locations than it takes to access aligned locations.  
  
-   Unaligned locations cannot be used in interlocked operations.  
  
 If you require more strict alignment, use `__declspec(align(N)) on your variable declarations`. This causes the compiler to dynamically align the stack to meet your specifications. However, dynamically adjusting the stack at run time may cause slower execution of your application.  
  
## See Also  
 [Types and Storage](../build/types-and-storage.md)   
 [align](../cpp/align-cpp.md)