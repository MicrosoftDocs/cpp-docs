---
title: "Explicit Override of an Interface Member | Microsoft Docs"
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
  - "virtual functions, explicit overrides"
  - "overriding functions"
  - "interface members, explicit overrides"
  - "functions [C++], overriding"
  - "explicit override of virtual function"
ms.assetid: 46f1f536-bf43-4311-9a17-ff2282e528a9
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
# Explicit Override of an Interface Member
The syntax for declaring an explicit override of an interface member within a class has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 You often want to provide two instances of an interface member within a class that implements the interface – one that is used when class objects are manipulated through an interface handle, and one that is used when class objects are used through the class interface. For example:  
  
```  
public __gc class R : public ICloneable {  
   // to be used through ICloneable  
   Object* ICloneable::Clone();  
  
   // to be used through an R  
   R* Clone();  
};  
```  
  
 In Managed Extensions we do this by providing an explicit declaration of the interface method with the method's name qualified with the name of the interface. The class-specific instance is unqualified. This eliminates the need to downcast the return value of `Clone`, in this example, when explicit called through an instance of `R`.  
  
 In the new syntax, a general overriding mechanism has been introduced that replaces the Managed Extensions syntax. Our example would be rewritten as follows:  
  
```  
public ref class R : public ICloneable {  
public:  
   // to be used through ICloneable  
   virtual Object^ InterfaceClone() = ICloneable::Clone;  
  
   // to be used through an R  
   virtual R^ Clone();  
};  
```  
  
 This revision requires that the interface member being explicitly overridden be given a unique name within the class. Here, I've provided the awkward name of `InterfaceClone`. The behavior is still the same – an invocation through the `ICloneable` interface invokes the renamed `InterfaceClone,` while a call through an object of type `R` invokes the second `Clone` instance.  
  
## See Also  
 [Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [Explicit Overrides](../windows/explicit-overrides-cpp-component-extensions.md)