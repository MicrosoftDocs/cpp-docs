---
title: "allocator&lt;void&gt; Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "memory/std::allocator<void>"
  - "std::allocator<void>"
  - "std.allocator<void>"
  - "allocator<void>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator<void> class"
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
caps.latest.revision: 18
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
# allocator&lt;void&gt; Class
A specialization of the template class allocator to type `void`, defining the types that make sense in this context.  
  
## Syntax  
  
```
template <>
class allocator<void> {
    typedef void *pointer;
    typedef const void *const_pointer;
    typedef void value_type;
    template <class Other>
    struct rebind;
    allocator();
    allocator(const allocator<void>&);

    template <class Other>
    allocator(const allocator<Other>&);

    template <class Other>
    allocator<void>& operator=(const allocator<Other>&);
};
```  
  
## Remarks  
 The class explicitly specializes template class [allocator](../standard-library/allocator-class.md) for type *void.* Its constructors and assignment operator behave the same as for the template class, but it defines only the following types:  
  
- [const_pointer](../standard-library/allocator-class.md#allocator__const_pointer).  
  
- [pointer](../standard-library/allocator-class.md#allocator__pointer).  
  
- [value_type](../standard-library/allocator-class.md#allocator__value_type).  
  
- [rebind](../standard-library/allocator-class.md#allocator__rebind), a nested template class.  
  
## Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



