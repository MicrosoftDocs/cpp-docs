---
title: "bidirectional_iterator_tag Struct | Microsoft Docs"
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
  - "xutility/std::bidirectional_iterator_tag"
  - "std::bidirectional_iterator_tag"
  - "std.bidirectional_iterator_tag"
  - "bidirectional_iterator_tag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bidirectional_iterator_tag class"
  - "bidirectional_iterator_tag struct"
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bidirectional_iterator_tag Struct
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [bidirectional_iterator_tag Struct](https://docs.microsoft.com/cpp/standard-library/bidirectional-iterator-tag-struct).  
  
A class that provides a return type for **iterator_category** function that represents a bidirectional iterator.  
  
## Syntax  
  
```
struct bidirectional_iterator_tag    : public forward_iterator_tag {};
```  
  
## Remarks  
 The category tag classes are used as compile tags for algorithm selection. The template function needs to find the most specific category of its iterator argument, so that it can use the most efficient algorithm at compile time. For every iterator of type `Iterator`, `iterator_traits`< `Iterator`>:: **iterator_category** must be defined to be the most specific category tag that describes the iterator's behavior.  
  
 The type is the same as **iterator**\< **Iter**>:: **iterator_category** when **Iter** describes an object that can serve as a bidirectional iterator.  
  
## Example  
 See [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) for an example of how to use `bidirectional_iterator_tag`.  
  
## Requirements  
 **Header:** \<iterator>  
  
 **Namespace:** std  
  
## See Also  
 [forward_iterator_tag Struct](../standard-library/forward-iterator-tag-struct.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Standard Template Library](../misc/standard-template-library.md)







