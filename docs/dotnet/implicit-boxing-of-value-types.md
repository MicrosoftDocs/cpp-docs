---
title: "Implicit Boxing of Value Types | Microsoft Docs"
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
  - "boxing, Visual C++"
  - "__box keyword"
  - "boxing"
  - "boxing, __box keyword"
  - "value types, boxed"
ms.assetid: 9597c92f-a3fe-44af-ad80-f9d656847a35
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
# Implicit Boxing of Value Types
The boxing of value types has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 In language design, we imposed a philosophical position in lieu of practical experience with the feature and, in practice, it was a mistake. As an analogy, in the original multiple inheritance language design, Stroustrup decided that a virtual base class sub-object could not be initialized within a derived class constructor, and therefore the language required that any class serving as a virtual base class must define a default constructor. It is that default constructor that would be invoked by any subsequent virtual derivation.  
  
 The problem of a virtual base class hierarchy is that responsibility for the initialization of the shared virtual sub-object shifts with each subsequent derivation. For example, if I define a base class for which initialization requires the allocation of a buffer, the user-specified size of that buffer might be passed as an argument to the constructor. If I then provide two subsequent virtual derivations, call them `inputb` and `outputb`, each provides a particular value to the base class constructor. Now, when I derived an `in_out` class from both `inputb` and `outputb`, neither of those values to the shared virtual base class sub-object can sensibly be allowed to evaluate.  
  
 Therefore, in the original language design, Stroustrup disallowed the explicit initialization of a virtual base class within the member initialization list of the derived class constructor. While this solved the problem, in practice the inability to direct the initialization of the virtual base class proved impracticable. Keith Gorlen of the National Institute of Health, who had implemented a freeware version of the SmallTalk collection library called nihcl, was a principle voice in convincing Stroustrup that he had to come up with a more flexible language design.  
  
 A principle of Object-Oriented hierarchical design holds that a derived class should concern itself only with the non-private implementation of its immediate base classes. In order to support a flexible initialization design for virtual inheritance, Stroustrup had to violate this principle. The most derived class in a hierarchy assumes responsibility for all virtual sub-object initialization regardless of how deep into the hierarchy it occurs. For example, `inputb` and `outputb` are both responsible for explicitly initializing their immediate virtual base class. When `in_out` derives from both `inputb` and `outputb`, `in_out` becomes responsible for the initialization of the once removed virtual base class, and the initialization made explicit within `inputb` and `outputb` is suppressed.  
  
 This provides the flexibility required by language developers, but at the cost of a complicated semantics. This burden of complication is stripped away if we restrict a virtual base class to be without state and simply allow it to specify an interface. This is a recommended design idiom within C++. Within CLR programming, it is raised to policy with the Interface type.  
  
 Here is a simple code sample– and in this case, the explicit boxing is unnecessary:  
  
```  
// Managed Extensions for C++ requires explicit __box operation  
int my1DIntArray __gc[] = { 1, 2, 3, 4, 5 };  
Object* myObjArray __gc[] = {   
   __box(26), __box(27), __box(28), __box(29), __box(30)  
};  
  
Console::WriteLine( "{0}\t{1}\t{2}", __box(0),  
   __box(my1DIntArray->GetLowerBound(0)),  
   __box(my1DIntArray->GetUpperBound(0)) );  
```  
  
 As you can see, there is a whole lot of boxing going on. Under [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], value type boxing is implicit:  
  
```  
// new syntax makes boxing implicit  
array<int>^ my1DIntArray = {1,2,3,4,5};  
array<Object^>^ myObjArray = {26,27,28,29,30};  
  
Console::WriteLine( "{0}\t{1}\t{2}", 0,   
   my1DIntArray->GetLowerBound( 0 ),   
   my1DIntArray->GetUpperBound( 0 ) );  
```  
  
## See Also  
 [Value Types and Their Behaviors (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Boxing](../windows/boxing-cpp-component-extensions.md)