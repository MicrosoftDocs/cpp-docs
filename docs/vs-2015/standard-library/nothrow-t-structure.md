---
title: "nothrow_t Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# nothrow_t Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [nothrow_t Structure](https://docs.microsoft.com/cpp/standard-library/nothrow-t-structure).  
  
The struct is used as a function parameter to operator new to indicate that the function should return a null pointer to report an allocation failure, rather than throw an exception.  
  
## Syntax  
  
```
struct std::nothrow_t {};
```  
  
## Remarks  
 The struct helps the compiler to select the correct version of the constructor. [nothrow](../standard-library/new-functions.md#nothrow) is a synonym for objects of type `std::nothrow_t`.  
  
## Example  
 See [operator new](../standard-library/new-operators.md#operator_new) and [operator new&#91;&#93;](../standard-library/new-operators.md#operator_new_at) for examples of how `std::nothrow_t` is used as a function parameter.  
  
## Requirements  
 **Header:** \<new>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







