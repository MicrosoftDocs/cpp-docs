---
title: "const_mem_fun_t Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f169d381-019b-4a0e-a9a3-54da6d948270
caps.latest.revision: 18
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
# const_mem_fun_t Class
An adapter class that allows a const member function that takes no arguments to be called as a unary function object when initialized with a reference argument.  
  
## Syntax  
  
```  
template<class Result, class Type>  
   class const_mem_fun_t : public unary_function <Type *, Result>   
   {  
   explicit const_mem_fun_t( Result ( Type::* _Pm )( ) const );  
   Result operator()(  
      const Type* _Pleft  
   ) const;  
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
 The template class stores a copy of `_Pm`, which must be a pointer to a member function of class **Type**, in a private member object. It defines its member function `operator()` as returning ( `_Pleft`->\* `_Pm`)() **const**.  
  
## Example  
 The constructor of `const_mem_fun_t` is not usually used directly; the helper function `mem_fun` is used to adapt member functions. See [mem_fun](../VS_visualcpp/-functional--functions.md#mem_fun_function) for an example of how to use member function adaptors.  
  
## Requirements  
 **Header:** <functional\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)