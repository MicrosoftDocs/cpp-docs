---
title: "Name Decoration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "name decoration [C++]"
  - "names [C++], decorated"
  - "decorated names, calling conventions"
ms.assetid: 8327a27b-bb4f-49f2-8218-b851b9d2a463
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
# Name Decoration
Name decoration usually refers to C++ naming conventions, but can apply to a number of C cases as well. By default, C++ uses the function name, parameters, and return type to create a linker name for the function. Consider the following function:  
  
```  
void CALLTYPE test(void)  
```  
  
 The following table shows the linker name for various calling conventions.  
  
|Calling convention|extern "C" or .c file|.cpp, .cxx or /TP|  
|------------------------|---------------------------|------------------------|  
|C naming convention (`__cdecl`)|_test|?test@@ZAXXZ|  
|Fastcall naming convention (`__fastcall`)|@test@0|?test@@YIXXZ|  
|Standard Call naming convention (`__stdcall`)|_test@0|?test@@YGXXZ|  
|Vectorcall naming convention (`__vectorcall`)|test@@0|?test@@YQXXZ|  
  
 Use extern "C" to call a C function from C++. Extern "C" forces use of the C naming convention for non-class C++ functions. Be aware of compiler switches **/Tc** or **/Tp**, which tell the compiler to ignore the filename extension and compile the file as C or C++, respectively. These options may cause names you do not expect.  
  
 Having function prototypes that have mismatched parameters can also cause this error. Name decoration incorporates the parameters of a function into the final decorated function name. Calling a function with the parameter types that do not match those in the function declaration may also cause LNK2001.  
  
 There is currently no standard for C++ naming between compiler vendors or even between different versions of a compiler. Therefore linking object files compiled with other compilers may not produce the same naming scheme and thus causes unresolved externals.  
  
## See Also  
 [Linker Tools Error LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md)