---
title: "Microsoft-Specific Modifiers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
caps.latest.revision: 10
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
# Microsoft-Specific Modifiers
This section describes Microsoft-specific extensions to C++ in the following areas:  
  
-   [Based addressing](../cpp/based-addressing.md), the practice of using a pointer as a base from which other pointers can be offset  
  
-   [Function calling conventions](../cpp/calling-conventions.md)  
  
-   Extended storage-class attributes declared with the [__declspec](../cpp/declspec.md) keyword  
  
-   The [__w64](../cpp/w64.md) keyword  
  
 Many of the Microsoft-specific keywords can be used to modify declarators to form derived types. For more information about declarators, see [Declarators](http://msdn.microsoft.com/en-us/8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
### Microsoft-Specific Keywords  
  
|Keyword|Meaning|Used to Form Derived Types?|  
|-------------|-------------|---------------------------------|  
|[__based](../cpp/based-grammar.md)|The name that follows declares a 32-bit offset to the 32-bit base contained in the declaration.|Yes|  
|[__cdecl](../cpp/cdecl.md)|The name that follows uses the C naming and calling conventions.|Yes|  
|[__declspec](../cpp/declspec.md)|The name that follows specifies a Microsoft-specific storage-class attribute.|No|  
|[__fastcall](../cpp/fastcall.md)|The name that follows declares a function that uses registers, when available, instead of the stack for argument passing.|Yes|  
|[__restrict](../cpp/extension-restrict.md)|Similar to __declspec([restrict](../cpp/restrict.md)), but for use on variables.|No|  
|[__stdcall](../cpp/stdcall.md)|The name that follows specifies a function that observes the standard calling convention.|Yes|  
|[__w64](../cpp/w64.md)|Marks a data type as being larger on a 64-bit compiler.|No|  
|[__unaligned](../cpp/unaligned.md)|Specifies that a pointer to a type or other data is not aligned..|No|  
|[__vectorcall](../cpp/vectorcall.md)|The name that follows declares a function that uses registers, including SSE registers, when available, instead of the stack for argument passing.|Yes|  
  
## See Also  
 [C++ Language Reference](../cpp/cpp-language-reference.md)