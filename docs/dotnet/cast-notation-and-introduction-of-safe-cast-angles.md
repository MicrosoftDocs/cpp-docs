---
title: "Cast Notation and Introduction of safe_cast&lt;&gt; | Microsoft Docs"
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
helpviewer_keywords: 
  - "casting"
  - "C-style casts and /clr, motivation for new cast notation"
  - "safe_cast keyword [C++]"
ms.assetid: 4eb1d000-3b93-4394-a37b-8b8563f8dc4d
caps.latest.revision: 9
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
# Cast Notation and Introduction of safe_cast&lt;&gt;
The cast notation has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 Modifying an existing structure is a different and more difficult experience than crafting the initial structure. There are fewer degrees of freedom, and the solution tends towards a compromise between an ideal restructuring and what is practicable given the existing structural dependencies.  
  
 Language extension is another example. Back in the early 1990s as Object-Orienting programming became an important paradigm, the need for a type-safe downcast facility in C++ became pressing. Downcasting is the user-explicit conversion of a base-class pointer or reference to a pointer or reference of a derived class. Downcasting requires an explicit cast. The reason is that the actual type of the base class pointer is an aspect of the runtime; the compiler therefore cannot check it. Or, to rephrase that, a downcast facility, just like a virtual function call, requires some form of dynamic resolution. This raises two questions:  
  
-   Why should a downcast be necessary in the Object-Oriented paradigm? Isn’t the virtual function mechanism sufficient? That is, why can’t one claim that any need for a downcast (or a cast of any sort) is a design failure?  
  
-   Why should support of a downcast be a problem in C++? After all, it is not a problem in object-oriented languages such as Smalltalk (or, subsequently, Java and C#)? What is it about C++ that makes supporting a downcast facility difficult?  
  
 A virtual function represents a type-dependent algorithm common to a family of types. (We are not considering interfaces, which are not supported in ISO-C++ but are available in CLR programming and which represent an interesting design alternative). The design of that family is typically represented by a class hierarchy in which there is an abstract base class declaring the common interface (the virtual functions) and a set of concrete derived classes which represent the actual family types in the application domain.  
  
 A `Light` hierarchy in a Computer Generated Imagery (CGI) application domain, for example, will have common attributes such as `color`, `intensity`, `position`, `on`, `off`, and so on. One can control several lights, by using the common interface without worrying whether a particular light is a spotlight, a directional light, a non-directional light (think of the sun), or perhaps a barn-door light. In this case, downcasting to a particular light-type to exercise its virtual interface is unnecessary. In a production environment, however,  speed is essential. One might downcast and explicitly invoke each method if by doing so inline execution of the calls can be performed instead of using the virtual mechanism.  
  
 So, one reason to downcast in C++ is to suppress the virtual mechanism in return for a significant gain in runtime performance. (Note that the automation of this manual optimization is an active area of research. However, it is more difficult to solve than replacing the explicit use of the `register` or `inline` keyword.)  
  
 A second reason to downcast falls out of the dual nature of polymorphism. One way to think of polymorphism is being divided into a passive and dynamic pair of forms.  
  
 A virtual invocation (and a downcast facility) represents dynamic uses of polymorphism: one is performing an action based on the actual type of the base class pointer at that particular instance in the execution of the program.  
  
 Assigning a derived class object to its base class pointer, however, is a passive form of polymorphism; it is using the polymorphism as a transport mechanism. This is the main use of `Object`, for example, in pre-generic CLR programming. When used passively, the base class pointer chosen for transport and storage typically offers an interface that is too abstract. `Object`, for example, provides roughly five methods through its interface; any more specific behavior requires an explicit downcast. For example, if we want to adjust the angle of our spotlight or its rate of fall off, we would have to downcast explicitly. A virtual interface within a family of sub-types cannot practicably be a superset of all the possible methods of its many children, and so a downcast facility will always be needed within an object-oriented language.  
  
 If a safe downcast facility is needed in an object-oriented language, then why did it take C++ so long to add one? The problem is in how to make the information as to the run-time type of the pointer available. In the case of a virtual function, the run-time information is set up in two parts by the compiler:  
  
-   The class object contains an additional virtual table pointer member (either at the beginning or end of the class object; that’s has an interesting history in itself) that addresses the appropriate virtual table. For example, a spotlight object addresses a spotlight virtual table, a directional light, a directional light virtual table, and so on  
  
-   Each virtual function has an associated fixed slot in the table, and the actual instance to invoke is represented by the address stored within the table. For example, the virtual `Light` destructor might be associated with slot 0, `Color` with slot 1, and so on. This is an efficient if inflexible strategy because it is set up at compile-time and represents a minimal overhead.  
  
 The problem, then, is how to make the type information available to the pointer without changing the size of C++ pointers, either by adding a second address or by directly adding some sort of type encoding. This would not be acceptable to those programmers (and programs) that decide not to use the object-oriented paradigm – which was still the predominant user community. Another possibility was to introduce a special pointer for polymorphic class types, but this would be confusing, and make it difficult to inter-mix the two, particularly with issues of pointer arithmetic. It would also not be acceptable to maintain a run-time table that associates each pointer with its currently associated type, and dynamically updating it.  
  
 The problem then is a pair of user communities which have different but legitimate programming aspirations. The solution has to be a compromise between the two communities, allowing each not only their aspiration but the ability to interoperate. This means that the solutions offered by either side are likely to be infeasible and the solution implemented finally to be less than perfect. The actual resolution revolves around the definition of a polymorphic class: a polymorphic class is one that contains a virtual function. A polymorphic class supports a dynamic type-safe downcast. This solves the maintain-the-pointer-as-address problem because all polymorphic classes contain that additional pointer member to their associated virtual table. The associated type information, therefore, can be stored in an expanded virtual table structure. The cost of the type-safe downcast is (almost) localized to users of the facility.  
  
 The next issue with the type-safe downcast was its syntax. Because it is a cast, the original proposal to the ISO-C++ committee used the unadorned cast syntax, as in this example:  
  
```  
spot = ( SpotLight* ) plight;  
```  
  
 but this was rejected by the committee because it did not allow the user to control the cost of the cast. If the dynamic type-safe downcast has the same syntax as the previously unsafe but static cast notation, then it becomes a substitution, and the user has no ability to suppress the runtime overhead when it is unnecessary and perhaps too costly.  
  
 In general, in C++, there is always a mechanism by which to suppress compiler-supported functionality. For example, we can turn off the virtual mechanism by either using the class scope operator (`Box::rotate(angle)`) or by invoking the virtual method through a class object (rather than a pointer or reference of that class). This latter suppression is not required by the language but is a quality of implementation issue, similar to the suppression of the construction of a temporary in a declaration of the form:  
  
```  
// compilers are free to optimize away the temporary  
X x = X::X( 10 );  
```  
  
 So the proposal was taken back for further consideration, and several alternative notations were considered, and the one brought back to the committee was of the form (`?type`), which indicated its undetermined – that is, dynamic nature. This gave the user the ability to toggle between the two forms – static or dynamic – but no one was too pleased with it. So it was back to the drawing board. The third and successful notation is the now standard `dynamic_cast<type>`, which was generalized to a set of four new-style cast notations.  
  
 In ISO-C++, `dynamic_cast` returns `0` when applied to an inappropriate pointer type, and throws a `std::bad_cast` exception when applied to a reference type. In Managed Extensions for C++, applying `dynamic_cast` to a managed reference type (because of its pointer representation) always returned `0`. `__try_cast<type>` was introduced as an analog to the exception throwing variant of the `dynamic_cast`, except that it throws `System::InvalidCastException` if the cast fails.  
  
```  
public __gc class ItemVerb;  
public __gc class ItemVerbCollection {  
public:  
   ItemVerb *EnsureVerbArray() [] {  
      return __try_cast<ItemVerb *[]>  
         (verbList->ToArray(__typeof(ItemVerb *)));  
   }  
};  
```  
  
 In the new syntax, `__try_cast` has been recast as `safe_cast`. Here is the same code fragment in the new syntax:  
  
```  
public ref class ItemVerb;  
public ref class ItemVerbCollection {  
public:  
   array<ItemVerb^>^ EnsureVerbArray() {  
      return safe_cast<array<ItemVerb^>^>  
         ( verbList->ToArray( ItemVerb::typeid ));  
   }  
};  
```  
  
 In the managed world, it is important to allow for verifiable code by limiting the ability of programmers to cast between types in ways that leave the code unverifiable. This is a critical aspect of the dynamic programming paradigm represented by the new syntax. For this reason, instances of old-style casts are recast internally as run-time casts, so that, for example:  
  
```  
// internally recast into the   
// equivalent safe_cast expression above  
( array<ItemVerb^>^ ) verbList->ToArray( ItemVerb::typeid );   
```  
  
 On the other hand, because polymorphism provides both an active and a passive mode, it is sometimes necessary to perform a downcast just to gain access to the non-virtual API of a subtype. This can occur, for example, with the member(s) of a class that want to address any type within the hierarchy (passive polymorphism as a transport mechanism) but for which the actual instance within a particular program context is known. In this case, having a run-time check of the cast can be an unacceptable overhead. If the new syntax is to serve as the managed systems programming language, it must provide some means of allowing a compile-time (that is, static) downcast. That is why the application of the `static_cast` notation is allowed to remain a compile-time downcast:  
  
```  
// ok: cast performed at compile-time.   
// No run-time check for type correctness  
static_cast< array<ItemVerb^>^>(verbList->ToArray(ItemVerb::typeid));  
```  
  
 The problem is that there is no way to guarantee that the programmer doing the `static_cast` is correct and well-intentioned; that is, there is no way to force managed code to be verifiable. This is a more urgent concern under the dynamic program paradigm than under native, but is not sufficient within a system programming language to disallow the user the ability to toggle between a static and run-time cast.  
  
 There is a performance trap and pitfall in the new syntax, however. In native programming, there is no difference in performance between the old-style cast notation and the new-style `static_cast` notation. But in the new syntax, the old-style cast notation is significantly more expensive than the use of the new-style `static_cast` notation. The reason is that the compiler internally transforms the use of the old-style notation into a run-time check that throws an exception. Moreover, it also changes the execution profile of the code because it causes an uncaught exception bringing down the application – perhaps wisely, but the same error would not cause that exception if the `static_cast` notation were used. One might argue this will help prod users into using the new-style notation. But only when it fails; otherwise, it will cause programs that use the old-style notation to run significantly slower without a visible understanding of why, similar to the following C programmer pitfalls:  
  
```  
// pitfall # 1:   
// initialization can remove a temporary class object,   
// assignment cannot  
Matrix m;  
m = another_matrix;  
  
// pitfall # 2: declaration of class objects far from their use  
Matrix m( 2000, 2000 ), n( 2000, 2000 );  
if ( ! mumble ) return;  
```  
  
## See Also  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)   
 [C-Style Casts with /clr (C++/CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)   
 [safe_cast](../windows/safe-cast-cpp-component-extensions.md)