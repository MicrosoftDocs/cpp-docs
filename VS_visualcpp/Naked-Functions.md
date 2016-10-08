---
title: "Naked Functions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2543c8af-00d4-4a2a-8a87-e746da1f9929
caps.latest.revision: 8
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
# Naked Functions
**Microsoft Specific**  
  
 The `naked` storage-class attribute is a Microsoft-specific extension to the C language. For functions declared with the `naked` storage-class attribute, the compiler generates code without prolog and epilog code. You can use this feature to write your own prolog/epilog code sequences using inline assembler code. Naked functions are particularly useful in writing virtual device drivers.  
  
 Because the `naked` attribute is only relevant to the definition of a function and is not a type modifier, naked functions use the extended attribute syntax, described in [Extended Storage-Class Attributes](../VS_visualcpp/C-Extended-Storage-Class-Attributes.md).  
  
 The following example defines a function with the `naked` attribute:  
  
```  
__declspec( naked ) int func( formal_parameters )  
{  
   /* Function body */  
}  
```  
  
 Or, alternatively:  
  
```  
#define Naked   __declspec( naked )  
  
Naked int func( formal_parameters )  
{  
   /* Function body */  
}  
```  
  
 The `naked` attribute affects only the nature of the compiler's code generation for the function's prolog and epilog sequences. It does not affect the code that is generated for calling such functions. Thus, the `naked` attribute is not considered part of the function's type, and function pointers cannot have the `naked` attribute. Furthermore, the `naked` attribute cannot be applied to a data definition. For example, the following code generates errors:  
  
```  
__declspec( naked ) int i;  /* Error--naked attribute not */  
                            /* permitted on data declarations. */  
```  
  
 The `naked` attribute is relevant only to the definition of the function and cannot be specified in the function's prototype. The following declaration generates a compiler error:  
  
```  
__declspec( naked ) int func();   /* Error--naked attribute not */  
                     /* permitted on function declarations.    */   \  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Function Definitions](../VS_visualcpp/C-Function-Definitions.md)