---
title: "How to: Create and Use shared_ptr Instances | Microsoft Docs"
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
ms.assetid: 7d6ebb73-fa0d-4b0b-a528-bf05de96518e
caps.latest.revision: 15
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
# How to: Create and Use shared_ptr Instances
The `shared_ptr` type is a smart pointer in the C++ standard library that is designed for scenarios in which more than one owner might have to manage the lifetime of the object in memory. After you initialize a `shared_ptr` you can copy it, pass it by value in function arguments, and assign it to other `shared_ptr` instances. All the instances point to the same object, and share access to one "control block" that increments and decrements the reference count whenever a new `shared_ptr` is added, goes out of scope, or is reset. When the reference count reaches zero, the control block deletes the memory resource and itself.  
  
 The following illustration shows several `shared_ptr` instances that point to one memory location.  
  
 [![Shared pointer](../cpp/media/shared_ptr.png "shared_ptr")](assetId:///9785ad08-31d8-411a-86a9-fb9cd9684c27)  
  
## Example  
 Whenever possible, use the [make_shared](http://msdn.microsoft.com/Library/6d6015b9-ad9a-4c06-93ce-b07cf6193d23) function to create a `shared_ptr` when the memory resource is created for the first time. `make_shared` is exception-safe. It uses the same call to allocate the memory for the control block and the resource, and thereby reduces the construction overhead. If you do not use `make_shared`, then you have to use an explicit new expression to create the object before you pass it to the `shared_ptr` constructor. The following example shows various ways to declare and initialize a `shared_ptr` together with a new object.  
  
 [!code-cpp[stl_smart_pointers#1](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_1.cpp)]  
  
## Example  
 The following example shows how to declare and initialize `shared_ptr` instances that take on shared ownership of an object that has already been allocated by another `shared_ptr`. Assume that `sp2` is an initialized `shared_ptr`.  
  
 [!code-cpp[stl_smart_pointers#2](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_2.cpp)]  
  
## Example  
 `shared_ptr` is also helpful in Standard Template Library (STL) containers when you are using algorithms that copy elements. You can wrap elements in a `shared_ptr`, and then copy it into other containers with the understanding that the underlying memory is valid as long as you need it, and no longer. The following example shows how to use the `replace_copy_if` algorithm on `shared_ptr` instances in a vector.  
  
 [!code-cpp[stl_smart_pointers#4](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_3.cpp)]  
  
## Example  
 You can use `dynamic_pointer_cast`, `static_pointer_cast`, and `const_pointer_cast` to cast a `shared_ptr`. These functions resemble the `dynamic_cast`, `static_cast`, and `const_cast` operators. The following example shows how to test the derived type of each element in a vector of `shared_ptr` of base classes, and then copy the elements and display information about them.  
  
 [!code-cpp[stl_smart_pointers#5](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_4.cpp)]  
  
## Example  
 You can pass a `shared_ptr` to another function in the following ways:  
  
-   Pass the `shared_ptr` by value. This invokes the copy constructor, increments the reference count, and makes the callee an owner. There is a small amount of overhead in this operation, which may be significant depending on how many `shared_ptr` objects you are passing. Use this option when the code contract (implied or explicit) between the caller and callee requires that the callee be an owner.  
  
-   Pass the `shared_ptr` by reference or const reference. In this case, the reference count is not incremented, and the callee can access the pointer as long as the caller does not go out of scope. Or, the callee can decide to create a `shared_ptr` based on the reference, and thereby become a shared owner. Use this option when the caller has no knowledge of the callee, or when you must pass a `shared_ptr` and want to avoid the copy operation for performance reasons.  
  
-   Pass the underlying pointer or a reference to the underlying object. This enables the callee to use the object, but does not enable it to share ownership or extend the lifetime. If the callee creates a `shared_ptr` from the raw pointer, the new `shared_ptr` is independent from the original, and does not control the underlying resource. Use this option when the contract between the caller and callee clearly specifies that the caller retains ownership of the `shared_ptr` lifetime.  
  
-   When you are deciding how to pass a `shared_ptr`, determine whether the callee has to share ownership of the underlying resource. An "owner" is an object or function that can keep the underlying resource alive for as long as it needs it. If the caller has to guarantee that the callee can extend the life of the pointer beyond its (the function's) lifetime, use the first option. If you don't care whether the callee extends the lifetime, then pass by reference and let the callee copy it or not.  
  
-   If you have to give a helper function access to the underlying pointer, and you know that the helper function will just use the pointer and return before the calling function returns, then that function does not have to share ownership of the underlying pointer. It just has to access the pointer within the lifetime of the caller's `shared_ptr`. In this case, it is safe to pass the `shared_ptr` by reference, or pass the raw pointer or a reference to the underlying object. Passing this way provides a small performance benefit, and may also help you express your programming intent.  
  
-   Sometimes, for example in a `std:vector<shared_ptr<T>>`, you may have to pass each `shared_ptr` to a lambda expression body or named function object. If the lambda or function is not storing the pointer, then pass the `shared_ptr` by reference to avoid invoking the copy constructor for each element.    
  
## Example  
 The following example shows how `shared_ptr` overloads various comparison operators to enable pointer comparisons on the memory that is owned by the `shared_ptr` instances.  
  
 [!code-cpp[stl_smart_pointers#3](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_6.cpp)]  
  
## See Also  
 [Smart Pointers](../cpp/smart-pointers-modern-cpp.md)