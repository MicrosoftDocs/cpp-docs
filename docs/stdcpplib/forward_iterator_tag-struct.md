---
title: "forward_iterator_tag Struct"
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
  - "std.forward_iterator_tag"
  - "forward_iterator_tag"
  - "std::forward_iterator_tag"
  - "xutility/std::forward_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "forward_iterator_tag struct"
  - "forward_iterator_tag class"
ms.assetid: 68b633ac-b135-4e9e-837d-14248a262ec5
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
# forward_iterator_tag Struct
A class that provides a return type for **iterator_category** function that represents a forward iterator.  
  
## Syntax  
  
```
struct forward_iterator_tag    : public input_iterator_tag {};
```  
  
## Remarks  
 The category tag classes are used as compile tags for algorithm selection. The template function needs to find out what is the most specific category of its iterator argument so that it can use the most efficient algorithm at compile time. For every iterator of type `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** must be defined to be the most specific category tag that describes the iterator's behavior.  
  
 The type is the same as **iterator**\< **Iter**> **::iterator_category** when **Iter** describes an object that can serve as a forward iterator.  
  
## Example  
 See [iterator_traits](../stdcpplib/iterator_traits-struct.md) or [random_access_iterator_tag](../stdcpplib/random_access_iterator_tag-struct.md) for an example of how to use the **iterator_tag**s.  
  
## Requirements  
 **Header:** \<iterator>  
  
 **Namespace:** std  
  
## See Also  
 [input_iterator_tag Struct](../stdcpplib/input_iterator_tag-struct.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

