---
title: "Object Lifetime And Resource Management (Modern C++) | Microsoft Docs"
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
ms.assetid: 8aa0e1a1-e04d-46b1-acca-1d548490700f
caps.latest.revision: 18
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
# Object Lifetime And Resource Management (Modern C++)
Unlike managed languages, C++ doesn’t have garbage collection (GC), which automatically releases no-longer-used memory resources as a program runs. In C++, resource management is directly related to object lifetime. This document describes the factors that affect object lifetime in C++ and how to manage it.  
  
 C++ doesn’t have GC primarily because it doesn't handle non-memory resources. Only deterministic destructors like those in C++ can handle memory and non-memory resources equally. GC also has other problems, like higher overhead in memory and CPU consumption, and locality. But universality is a fundamental problem that can't be mitigated through clever optimizations.  
  
## Concepts  
 An important thing in object-lifetime management is the encapsulation—whoever's using an object doesn't have to know what resources that object owns, or how to get rid of them, or even whether it owns any resources at all. It just has to destroy the object. The C++ core language is designed to ensure that objects are destroyed at the correct times, that is, as blocks are exited, in reverse order of construction. When an object is destroyed, its bases and members are destroyed in a particular order.  The language automatically destroys objects, unless you do special things like heap allocation or placement new.  For example, [smart pointers](../cpp/smart-pointers-modern-cpp.md) like `unique_ptr` and `shared_ptr`, and Standard Template Library (STL) containers like `vector`, encapsulate `new`/`delete` and `new[]`/`delete[]` in objects, which have destructors. That's why it's so important to use smart pointers and STL containers.  
  
 Another important concept in lifetime management: destructors. Destructors encapsulate resource release.  (The commonly used mnemonic is RRID, Resource Release Is Destruction.)  A resource is something that you get from "the system" and have to give back later.  Memory is the most common resource, but there are also files, sockets, textures, and other non-memory resources. "Owning" a resource means you can use it when you need it but you also have to release it when you're finished with it.  When an object is destroyed, its destructor releases the resources that it owned.  
  
 The final concept is the DAG (Directed Acyclic Graph).  The structure of ownership in a program forms a DAG. No object can own itself—that's not only impossible but also inherently meaningless. But two objects can share ownership of a third object.  Several kinds of links are possible in a DAG like this: A is a member of B (B owns A), C stores a `vector<D>` (C owns each D element), E stores a `shared_ptr<F>` (E shares ownership of F, possibly with other objects), and so forth.  As long as there are no cycles and every link in the DAG is represented by an object that has a destructor (instead of a raw pointer, handle, or other mechanism), then resource leaks are impossible because the language prevents them. Resources are released immediately after they're no longer needed, without a garbage collector running. The lifetime tracking is overhead-free for stack scope, bases, members, and related cases, and inexpensive for `shared_ptr`.  
  
### Heap-based lifetime  
 For heap object lifetime, use [smart pointers](../cpp/smart-pointers-modern-cpp.md). Use `shared_ptr` and `make_shared` as the default pointer and allocator. Use `weak_ptr` to break cycles, do caching, and observe objects without affecting or assuming anything about their lifetimes.  
  
```cpp  
void func() {  
  
auto p = make_shared<widget>(); // no leak, and exception safe  
...  
p->draw();   
  
} // no delete required, out-of-scope triggers smart pointer destructor  
  
```  
  
 Use `unique_ptr` for unique ownership, for example, in the *pimpl* idiom. (See [Pimpl For Compile-Time Encapsulation](../cpp/pimpl-for-compile-time-encapsulation-modern-cpp.md).) Make a `unique_ptr` the primary target of all explicit `new` expressions.  
  
```cpp  
unique_ptr<widget> p(new widget());  
```  
  
 You can use raw pointers for non-ownership and observation. A non-owning pointer may dangle, but it can’t leak.  
  
```cpp  
class node {  
  ...  
  vector<unique_ptr<node>> children; // node owns children  
  node* parent; // node observes parent, which is not a concern  
  ...  
};  
node::node() : parent(...) { children.emplace_back(new node(...) ); }  
  
```  
  
 When performance optimization is required, you might have to use *well-encapsulated* owning pointers and explicit calls to delete. An example is when you implement your own low-level data structure.  
  
### Stack-based lifetime  
 In modern C++, *stack-based scope* is a powerful way to write robust code because it combines automatic *stack lifetime* and *data member lifetime* with high efficiency—lifetime tracking is essentially free of overhead. Heap object lifetime requires diligent manual management and can be the source of resource leaks and inefficiencies, especially when you are working with raw pointers. Consider this code, which demonstrates stack-based scope:  
  
```cpp  
class widget {  
private:  
  gadget g;   // lifetime automatically tied to enclosing object  
public:  
  void draw();  
};  
  
void functionUsingWidget () {  
  widget w;   // lifetime automatically tied to enclosing scope  
              // constructs w, including the w.g gadget member  
  …  
  w.draw();  
  …  
} // automatic destruction and deallocation for w and w.g  
  // automatic exception safety,   
  // as if "finally { w.dispose(); w.g.dispose(); }"  
  
```  
  
 Use static lifetime sparingly (global static, function local static) because problems can arise. What happens when the constructor of a global object throws an exception? Typically, the app faults in a way that can be difficult to debug. Construction order is problematic for static lifetime objects, and is not concurrency-safe. Not only is object construction a problem, destruction order can be complex, especially where polymorphism is involved. Even if your object or variable isn’t polymorphic and doesn't have complex construction/destruction ordering, there’s still the issue of thread-safe concurrency. A multithreaded app can’t safely modify the data in static objects without having thread-local storage, resource locks, and other special precautions.  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)