---
title: "nothrow_t Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 20
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
# nothrow_t Structure
The struct is used as a function parameter to operator new to indicate that the function should return a null pointer to report an allocation failure, rather than throw an exception.  
  
## Syntax  
  
```
struct std::nothrow_t {};
```  
  
## Remarks  
 The struct helps the compiler to select the correct version of the constructor. [nothrow](../standard-library/new-functions.md#nothrow) is a synonym for objects of type `std::nothrow_t`.  
  
## Example  
 See [operator new](../standard-library/new-operators.md#operator_new) and [operator new&#91;&#93;](../standard-library/new-operators.md#operator_new_arr) for examples of how `std::nothrow_t` is used as a function parameter.  
  
## Requirements  
 **Header:** \<new>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



