---
title: "Microsoft-Specific Modifiers"
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
ms.topic: language-reference
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
caps.latest.revision: 10
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
# Microsoft-Specific Modifiers
This section describes Microsoft-specific extensions to C++ in the following areas:  
  
-   [Based addressing](../VS_visualcpp/Based-Addressing.md), the practice of using a pointer as a base from which other pointers can be offset  
  
-   [Function calling conventions](../VS_visualcpp/Calling-Conventions.md)  
  
-   Extended storage-class attributes declared with the [__declspec](../VS_visualcpp/__declspec.md) keyword  
  
-   The [__w64](../VS_visualcpp/__w64.md) keyword  
  
 Many of the Microsoft-specific keywords can be used to modify declarators to form derived types. For more information about declarators, see [Declarators](assetId:///8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
### Microsoft-Specific Keywords  
  
|Keyword|Meaning|Used to Form Derived Types?|  
|-------------|-------------|---------------------------------|  
|[__based](../VS_visualcpp/__based-Grammar.md)|The name that follows declares a 32-bit offset to the 32-bit base contained in the declaration.|Yes|  
|[__cdecl](../VS_visualcpp/__cdecl.md)|The name that follows uses the C naming and calling conventions.|Yes|  
|[__declspec](../VS_visualcpp/__declspec.md)|The name that follows specifies a Microsoft-specific storage-class attribute.|No|  
|[__fastcall](../VS_visualcpp/__fastcall.md)|The name that follows declares a function that uses registers, when available, instead of the stack for argument passing.|Yes|  
|[__restrict](../VS_visualcpp/__restrict.md)|Similar to __declspec([restrict](../VS_visualcpp/restrict.md)), but for use on variables.|No|  
|[__stdcall](../VS_visualcpp/__stdcall.md)|The name that follows specifies a function that observes the standard calling convention.|Yes|  
|[__w64](../VS_visualcpp/__w64.md)|Marks a data type as being larger on a 64-bit compiler.|No|  
|[__unaligned](../VS_visualcpp/__unaligned.md)|Specifies that a pointer to a type or other data is not aligned..|No|  
|[__vectorcall](../VS_visualcpp/__vectorcall.md)|The name that follows declares a function that uses registers, including SSE registers, when available, instead of the stack for argument passing.|Yes|  
  
## See Also  
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)