---
title: "pointer_to_binary_function Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::pointer_to_binary_function"
  - "xfunctional/std::pointer_to_binary_function"
  - "pointer_to_binary_function"
  - "std.pointer_to_binary_function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointer_to_binary_function function"
  - "pointer_to_binary_function class"
ms.assetid: fb50599f-bcb3-4076-a669-6dcc3eb189a5
caps.latest.revision: 21
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
# pointer_to_binary_function Class
Converts a binary function pointer into an adaptable binary function.  
  
## Syntax  
  
```
template <class Arg1, class Arg2, class Result>
class pointer_to_binary_function
    : public binary_function <Arg1, Arg2, Result>
{
public:
    explicit pointer_to_binary_function(
        Result(*pfunc)(Arg1, Arg2));
    Result operator()(Arg1 left, Arg2 right) const;
};
```  
  
#### Parameters  
 `pfunc`  
 The binary function to be converted.  
  
 `left`  
 The left object that the *\*pfunc* is called on.  
  
 `right`  
 The right object that the *\*pfunc* is called on.  
  
## Return Value  
 The template class stores a copy of **pfunc**. It defines its member function `operator()` as returning (\* **pfunc**)(_ *Left*, \_ *Right*).  
  
## Remarks  
 A binary function pointer is a function object and may be passed to any Standard Template Library algorithm that is expecting a binary function as a parameter, but it is not adaptable. To use it with an adaptor, such as binding a value to it or using it with a negator, it must be supplied with the nested types **first_argument_type**, **second_argument_type**, and **result_type** that make such an adaptation possible. The conversion by `pointer_to_binary_function` allows the function adaptors to work with binary function pointers.  
  
## Example  
 The constructor of `pointer_to_binary_function` is rarely used directly. See the helper function [ptr_fun](../standard-library/functional-functions.md#ptr_fun_function) for an example of how to declare and use the `pointer_to_binary_function` adaptor predicate.  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
## See Also  
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



