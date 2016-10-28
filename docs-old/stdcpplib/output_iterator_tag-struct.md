---
title: "output_iterator_tag Struct"
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
  - "std::output_iterator_tag"
  - "output_iterator_tag"
  - "xutility/std::output_iterator_tag"
  - "std.output_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "output_iterator_tag class"
  - "output_iterator_tag struct"
ms.assetid: c23a4331-b069-4fa0-9c3a-1c9be7095553
caps.latest.revision: 18
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# output_iterator_tag Struct
A class that provides a return type for **iterator_category** function that represents an output iterator.  
  
## Syntax  
  
```
struct output_iterator_tag {};
```  
  
## Remarks  
 The category tag classes are used as compile tags for algorithm selection. The template function needs to find the most specific category of its iterator argument so that it can use the most efficient algorithm at compile time. For every iterator of type `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** must be defined to be the most specific category tag that describes the iterator's behavior.  
  
 The type is the same as **iterator**\< **Iter**> **::iterator_category** when **Iter** describes an object that can serve as a output iterator.  
  
 This tag is not parameterized on the `value_type` or `difference_type` for the iterator, as with the other iterator tags, because output iterators do not have either a `value_type` or a `difference_type`.  
  
## Example  
 See [iterator_traits](../stdcpplib/iterator_traits-struct.md) or [random_access_iterator_tag](../stdcpplib/random_access_iterator_tag-struct.md) for an example of how to use **iterator_tag**s.  
  
## Requirements  
 **Header:** \<iterator>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

