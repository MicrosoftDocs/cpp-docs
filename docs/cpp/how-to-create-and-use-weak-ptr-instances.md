---
title: "How to: Create and Use weak_ptr Instances | Microsoft Docs"
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
ms.assetid: 8dd6909b-b070-4afa-9696-f2fc94579c65
caps.latest.revision: 12
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
# How to: Create and Use weak_ptr Instances
Sometimes an object must store a way to access the underlying object of a `shared_ptr` without causing the reference count to be incremented. Typically, this situation occurs when you have cyclic references between `shared_ptr` instances.  
  
 The best design is to avoid shared ownership of pointers whenever you can. However, if you must have shared ownership of `shared_ptr` instances, avoid cyclic references between them. When cyclic references are unavoidable, or even preferable for some reason, use `weak_ptr` to give one or more of the owners a weak reference to another `shared_ptr`. By using a `weak_ptr`, you can create a `shared_ptr` that joins to an existing set of related instances, but only if the underlying memory resource is still valid. A `weak_ptr` itself does not participate in the reference counting, and therefore, it cannot prevent the reference count from going to zero. However, you can use a `weak_ptr` to try to obtain a new copy of the `shared_ptr` with which it was initialized. If the memory has already been deleted, a **bad_weak_ptr** exception is thrown. If the memory is still valid, the new shared pointer increments the reference count and guarantees that the memory will be valid as long as the `shared_ptr` variable stays in scope.  
  
## Example  
 The following code example shows a case where `weak_ptr` is used to ensure proper deletion of objects that have circular dependencies. As you examine the example, assume that it was created only after alternative solutions were considered. The `Controller` objects represent some aspect of a machine process, and they operate independently. Each controller must be able to query the status of the other controllers at any time, and each one contains a private `vector<weak_ptr<Controller>>` for this purpose. Each vector contains a circular reference, and therefore, `weak_ptr` instances are used instead of `shared_ptr`.  
  
 [!code-cpp[stl_smart_pointers#222](../cpp/codesnippet/CPP/how-to-create-and-use-weak-ptr-instances_1.cpp)]  
  
```Output  
Creating Controller0Creating Controller1Creating Controller2Creating Controller3Creating Controller4push_back to v[0]: 1push_back to v[0]: 2push_back to v[0]: 3push_back to v[0]: 4push_back to v[1]: 0push_back to v[1]: 2push_back to v[1]: 3push_back to v[1]: 4push_back to v[2]: 0push_back to v[2]: 1push_back to v[2]: 3push_back to v[2]: 4push_back to v[3]: 0push_back to v[3]: 1push_back to v[3]: 2push_back to v[3]: 4push_back to v[4]: 0push_back to v[4]: 1push_back to v[4]: 2push_back to v[4]: 3use_count = 1Status of 1 = OnStatus of 2 = OnStatus of 3 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 2 = OnStatus of 3 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 1 = OnStatus of 3 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 1 = OnStatus of 2 = OnStatus of 4 = Onuse_count = 1Status of 0 = OnStatus of 1 = OnStatus of 2 = OnStatus of 3 = OnDestroying Controller0Destroying Controller1Destroying Controller2Destroying Controller3Destroying Controller4Press any key  
```  
  
 As an experiment, modify the vector `others` to be a `vector<shared_ptr<Controller>>`, and then in the output, notice that no destructors are invoked when `TestRun` returns.  
  
## See Also  
 [Smart Pointers](../cpp/smart-pointers-modern-cpp.md)