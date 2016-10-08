---
title: "forward_iterator_tag Struct"
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
ms.assetid: 68b633ac-b135-4e9e-837d-14248a262ec5
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
# forward_iterator_tag Struct
A class that provides a return type for **iterator_category** function that represents a forward iterator.  
  
## Syntax  
  
```  
struct forward_iterator_tag    : public input_iterator_tag {};  
  
```  
  
## Remarks  
 The category tag classes are used as compile tags for algorithm selection. The template function needs to find out what is the most specific category of its iterator argument so that it can use the most efficient algorithm at compile time. For every iterator of type `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** must be defined to be the most specific category tag that describes the iterator's behavior.  
  
 The type is the same as **iterator**< **Iter**> **::iterator_category** when **Iter** describes an object that can serve as a forward iterator.  
  
## Example  
 See [iterator_traits](../VS_visualcpp/iterator_traits-Struct.md) or [random_access_iterator_tag](../VS_visualcpp/random_access_iterator_tag-Struct.md) for an example of how to use the **iterator_tag**s.  
  
## Requirements  
 **Header:** <iterator\>  
  
 **Namespace:** std  
  
## See Also  
 [input_iterator_tag Struct](../VS_visualcpp/input_iterator_tag-Struct.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)