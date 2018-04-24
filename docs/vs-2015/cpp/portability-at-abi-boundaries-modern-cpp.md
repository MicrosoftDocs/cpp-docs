---
title: "Portability At ABI Boundaries (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: abbd405e-3038-427c-8c24-e00598f0936a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Portability At ABI Boundaries (Modern C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Portability At ABI Boundaries (Modern C++)](https://docs.microsoft.com/cpp/cpp/portability-at-abi-boundaries-modern-cpp).  
  
Use sufficiently portable types and conventions at binary interface boundaries. A “portable type” is a C built-in type or a struct that contains only C built-in types. Class types can only be used when caller and callee agree on layout, calling convention, etc. This is only possible when both are compiled with the same compiler and compiler settings.  
  
## How to flatten a class for C portability  
 When callers may be compiled with another compiler/language, then “flatten” to an “extern C” API with a specific calling convention:  
  
```cpp  
// class widget {  
//   widget();  
//   ~widget();  
//   double method( int, gadget& );  
// };  
extern “C” {    // functions using explicit “this”  
  struct widget;   // + opaque type (fwd decl only)  
  widget* STDCALL widget_create();    // ctor → create new  “this”  
  void STDCALL widget_destroy( widget* );    // dtor → consume “this”  
  double STDCALL widget_method( widget*, int, gadget* );    // method → use “this”  
}  
  
```  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)



