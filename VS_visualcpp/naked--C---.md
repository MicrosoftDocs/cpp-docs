---
title: "naked (C++)"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 69723241-05e1-439b-868e-20a83a16ab6d
caps.latest.revision: 12
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# naked (C++)
**Microsoft Specific**  
  
 For functions declared with the `naked` attribute, the compiler generates code without prolog and epilog code. You can use this feature to write your own prolog/epilog code sequences using inline assembler code. Naked functions are particularly useful in writing virtual device drivers.  Note that the `naked` attribute is only valid on x86 and ARM, and is not available on x64.  
  
## Syntax  
  
```  
__declspec(naked) declarator  
```  
  
## Remarks  
 Because the `naked` attribute is only relevant to the definition of a function and is not a type modifier, naked functions must use extended attribute syntax and the [__declspec](../VS_visualcpp/__declspec.md) keyword.  
  
 The compiler cannot generate an inline function for a function marked with the naked attribute, even if the function is also marked with the [__forceinline](../Topic/inline,%20__inline,%20__forceinline.md) keyword.  
  
 The compiler issues an error if the `naked` attribute is applied to anything other than the definition of a non-member method.  
  
## Examples  
 This code defines a function with the `naked` attribute:  
  
```  
__declspec( naked ) int func( formal_parameters ) {}  
```  
  
 Or, alternately:  
  
```  
#define Naked __declspec( naked )  
Naked int func( formal_parameters ) {}  
```  
  
 The `naked` attribute affects only the nature of the compiler's code generation for the function's prolog and epilog sequences. It does not affect the code that is generated for calling such functions. Thus, the `naked` attribute is not considered part of the function's type, and function pointers cannot have the `naked` attribute. Furthermore, the `naked` attribute cannot be applied to a data definition. For example, this code sample generates an error:  
  
```  
__declspec( naked ) int i;       // Error--naked attribute not  
                                 // permitted on data declarations.  
```  
  
 The `naked` attribute is relevant only to the definition of the function and cannot be specified in the function's prototype. For example, this declaration generates a compiler error:  
  
```  
__declspec( naked ) int func();  // Error--naked attribute not   
                                 // permitted on function declarations  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../VS_visualcpp/__declspec.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [Naked Function Calls](../VS_visualcpp/Naked-Function-Calls.md)