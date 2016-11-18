---
title: "const_mem_fun1_ref_t Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::const_mem_fun1_ref_t"
  - "std.const_mem_fun1_ref_t"
  - "xfunctional/std::const_mem_fun1_ref_t"
  - "const_mem_fun1_ref_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_mem_fun1_ref_t class"
ms.assetid: 8220d373-fa1c-44be-a21d-96d49b3ea6bb
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
# const_mem_fun1_ref_t Class
An adapter class that allows a **const** member function that takes a single argument to be called as a binary function object when initialized with a reference argument.  
  
## Syntax  
  
```
template <class Result, class Type, class Arg>
class const_mem_fun1_ref_t
 : public binary_function<Type, Arg, Result> 
 {
    explicit const_mem_fun1_ref_t(Result (Type::* Pm)(Arg) const);
    Result operator()(const Type& left, Arg right) const;
 };
```  
  
#### Parameters  
 `Pm`  
 A pointer to the member function of class **Type** to be converted to a function object.  
  
 `left`  
 The **const** object that the `Pm` member function is called on.  
  
 `right`  
 The argument that is being given to `Pm`.  
  
## Return Value  
 An adaptable binary function.  
  
## Remarks  
 The template class stores a copy of `Pm`, which must be a pointer to a member function of class **Type**, in a private member object. It defines its member function `operator()` as returning ( `left`.\* *Pm*)( `right`) **const**.  
  
## Example  
 The constructor of `const_mem_fun1_ref_t` is not usually used directly; the helper function `mem_fun_ref` is used to adapt member functions. See [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref_function) for examples of how to use member function adaptors.  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



