---
title: "How to: Create and Use unique_ptr Instances | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9a373030-e587-452f-b9a5-c5f9d58b7673
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
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
# How to: Create and Use unique_ptr Instances
A [unique_ptr](../standard-library/unique-ptr-class.md) does not share its pointer. It cannot be copied to another `unique_ptr`, passed by value to a function, or used in any Standard Template Library (STL) algorithm that requires copies to be made. A `unique_ptr` can only be moved. This means that the ownership of the memory resource is transferred to another `unique_ptr` and the original `unique_ptr` no longer owns it. We recommend that you restrict an object to one owner, because multiple ownership adds complexity to the program logic. Therefore, when you need a smart pointer for a plain C++ object, use `unique_ptr`, and when you construct a `unique_ptr`, use the [make_unique](http://msdn.microsoft.com/Library/4b5fa0d6-fd1b-42b3-a35d-d71c3b6529f8) helper function.  
  
 The following diagram illustrates the transfer of ownership between two `unique_ptr` instances.  
  
 ![Moving the ownership of a unique&#95;ptr](../cpp/media/unique_ptr.png "unique_ptr")  
  
 `unique_ptr` is defined in the `<memory>` header in the STL. It is exactly is efficient as a raw pointer and can be used in STL containers. The addition of `unique_ptr` instances to STL containers is efficient because the move constructor of the `unique_ptr` eliminates the need for a copy operation.  
  
## Example  
 The following example shows how to create `unique_ptr` instances and pass them between functions.  
  
 [!code-cpp[stl_smart_pointers#210](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_1.cpp)]  
  
 These examples demonstrate this basic characteristic of `unique_ptr`: it can be moved, but not copied. "Moving" transfers ownership to a new `unique_ptr` and resets the old `unique_ptr`.  
  
## Example  
 The following example shows how to create `unique_ptr` instances and use them in a vector.  
  
 [!code-cpp[stl_smart_pointers#211](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_2.cpp)]  
  
 In the range for  loop, notice that the `unique_ptr` is passed by reference. If you try to pass by value here, the compiler will throw an error because the `unique_ptr` copy constructor is deleted.  
  
## Example  
 The following example shows how to initialize a `unique_ptr` that is a class member.  
  
 [!code-cpp[stl_smart_pointers#212](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_3.cpp)]  
  
## Example  
 You can use [make_unique](http://msdn.microsoft.com/Library/4b5fa0d6-fd1b-42b3-a35d-d71c3b6529f8) to create a `unique_ptr` to an array, but you cannot use `make_unique` to initialize the array elements.  
  
 [!code-cpp[stl_smart_pointers#213](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_4.cpp)]  
  
 For more examples, see [make_unique](http://msdn.microsoft.com/Library/4b5fa0d6-fd1b-42b3-a35d-d71c3b6529f8).  
  
## See Also  
 [Smart Pointers](../cpp/smart-pointers-modern-cpp.md)   
 [make_unique](http://msdn.microsoft.com/Library/4b5fa0d6-fd1b-42b3-a35d-d71c3b6529f8)