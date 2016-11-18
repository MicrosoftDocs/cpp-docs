---
title: "mem_fun_t Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mem_fun_t"
  - "xfunctional/std::mem_fun_t"
  - "std::mem_fun_t"
  - "std.mem_fun_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mem_fun_t class"
ms.assetid: 242566d4-750c-4c87-9d63-2e2c9d19ca2a
caps.latest.revision: 19
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
# mem_fun_t Class
An adapter class that allows a **non_const** member function that takes no arguments to be called as a unary function object when initialized with a pointer argument.  
  
## Syntax  
  
```
template <class Result, class Type>
class mem_fun_t : public unary_function<Type *, Result> {
    explicit mem_fun_t(Result (Type::* _Pm)());

    Result operator()(Type* _Pleft) const;

 };
```  
  
#### Parameters  
 `_Pm`  
 A pointer to the member function of class **Type** to be converted to a function object.  
  
 `_Pleft`  
 The object that the `_Pm` member function is called on.  
  
## Return Value  
 An adaptable unary function.  
  
## Remarks  
 The template class stores a copy of `_Pm`, which must be a pointer to a member function of class **Type**, in a private member object. It defines its member function `operator()` as returning ( `_Pleft`->* `_Pm`)( ).  
  
## Example  
 The constructor of `mem_fun_t` is not usually used directly; the helper function `mem_fun` is used to adapt member functions. See [mem_fun](../standard-library/functional-functions.md#mem_fun_function) for an example of how to use member function adaptors.  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
## See Also  
 [\<functional>](../standard-library/functional.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



