---
title: "nothrow_t Structure"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "nothrow_t"
  - "std.nothrow_t"
  - "std::nothrow_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nothrow_t class"
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
caps.latest.revision: 19
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
# nothrow_t Structure
The struct is used as a function parameter to operator new to indicate that the function should return a null pointer to report an allocation failure, rather than throw an exception.  
  
## Syntax  
  
```
struct std::nothrow_t {};
```  
  
## Remarks  
 The struct helps the compiler to select the correct version of the constructor. [nothrow](../stdcpplib/-new--functions.md#nothrow) is a synonym for objects of type `std::nothrow_t`.  
  
## Example  
 See [operator new](../stdcpplib/-new--operators.md#operator_new) and [operator new&#91;&#93;](../stdcpplib/-new--operators.md#operator_new_at) for examples of how `std::nothrow_t` is used as a function parameter.  
  
## Requirements  
 **Header:** \<new>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)

