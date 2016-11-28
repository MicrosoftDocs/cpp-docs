---
title: "Changes in Destructor Semantics | Microsoft Docs"
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
  - "finalizers [C++]"
  - "destructors, C++"
ms.assetid: f1869944-a407-452f-b99a-04d8c209f0dc
caps.latest.revision: 11
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
# Changes in Destructor Semantics
Semantics for class destructors have changed significantly from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 In Managed Extensions, a class destructor was permitted within a reference class but not within a value class. This has not changed in the new syntax. However, the semantics of the class destructor have changed. This topic focuses on the reasons of that change and discusses how it affects the translation of existing CLR code. It is probably the most important programmer-level change between the two versions of the language.  
  
## Non-deterministic Finalization  
 Before the memory associated with an object is reclaimed by the garbage collector, an associated `Finalize` method, if present, is invoked. You can think of this method as a kind of super-destructor because it is not tied to the program lifetime of the object. We refer to this as finalization. The timing of just when or even whether a `Finalize` method is invoked is undefined. This is what we mean when we say that garbage collection exhibits non-deterministic finalization.  
  
 Non-deterministic finalization works well with dynamic memory management. When available memory becomes scarce, the garbage collector kicks in. Under a garbage collected environment, destructors to free memory are unnecessary. Non-deterministic finalization does not work well, however, when an object maintains a critical resource such as a database connection or a lock of some sort. In this case, we should release that resource as soon as possible. In the native world, that is achieved by using a constructor/destructor pair. As soon as the lifetime of the object ends, either when the local block within which it is declared ends, or when the stack unravels because of a thrown exception, the destructor executes and the resource is automatically released. This approach works very well, and its absence under Managed Extensions was sorely missed.  
  
 The solution provided by the CLR is for a class to implement the `Dispose` method of the `IDisposable` interface. The problem here is that `Dispose` requires an explicit invocation by the user. This is error-prone. The C# language provides a modest form of automation in the form of a special `using` statement. The Managed Extensions design provided no special support.  
  
## Destructors in Managed Extensions for C++  
 In Managed Extensions, the destructor of a reference class is implemented by using the following two steps:  
  
1.  The user-supplied destructor is renamed internally to `Finalize`. If the class has a base class (remember, under the CLR Object Model, only single inheritance is supported), the compiler injects a call to its finalizer following execution of the user-supplied code. For example, consider the following simple hierarchy taken from the Managed Extensions language specification:  
  
```  
__gc class A {  
public:  
   ~A() { Console::WriteLine(S"in ~A"); }  
};  
  
__gc class B : public A {  
public:  
   ~B() { Console::WriteLine(S"in ~B");  }  
};  
```  
  
 In this example, both destructors are renamed `Finalize`. `B`'s `Finalize` has an invocation of `A`'s `Finalize` method added following the invocation of `WriteLine`. This is what the garbage collector will by default invoke during finalization. Here is what this internal transformation might look like:  
  
```  
// internal transformation of destructor under Managed Extensions  
__gc class A {  
public:  
   void Finalize() { Console::WriteLine(S"in ~A"); }  
};  
  
__gc class B : public A {  
public:  
   void Finalize() {   
      Console::WriteLine(S"in ~B");  
      A::Finalize();   
   }  
};  
```  
  
1.  In the second step, the compiler synthesizes a virtual destructor. This destructor is what our Managed Extensions user programs invoke either directly or through an application of the delete expression. It is never invoked by the garbage collector.  
  
     Two statements are placed within this synthesized destructor. One is a call to `GC::SuppressFinalize` to make sure that there are no more invocations of `Finalize`. The second is the actual invocation of `Finalize`, which represents the user-supplied destructor for that class. Here is what this might look like:  
  
```  
__gc class A {  
public:  
   virtual ~A() {  
      System::GC::SuppressFinalize(this);  
      A::Finalize();  
   }  
};  
  
__gc class B : public A {  
public:  
   virtual ~B() {  
      System::GC::SuppressFinalize(this);  
      B::Finalize();  
   }  
};  
```  
  
 While this implementation allows the user to explicitly invoke the class `Finalize` method now rather than at a time you have no control over, it does not really tie in with the `Dispose` method solution. This is changed in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
## Destructors in New Syntax  
 In the new syntax, the destructor is renamed internally to the `Dispose` method and the reference class is automatically extended to implement the `IDispose` interface. That is, under [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], our pair of classes is transformed as follows:  
  
```  
// internal transformation of destructor under the new syntax  
__gc class A : IDisposable {  
public:  
   void Dispose() {   
      System::GC::SuppressFinalize(this);  
      Console::WriteLine( "in ~A");  
   }  
};  
  
__gc class B : public A {  
public:  
   void Dispose() {   
      System::GC::SuppressFinalize(this);  
      Console::WriteLine( "in ~B");    
      A::Dispose();   
   }  
};  
```  
  
 When either a destructor is invoked explicitly under the new syntax, or when `delete` is applied to a tracking handle, the underlying `Dispose` method is invoked automatically. If it is a derived class, a call of the `Dispose` method of the base class is inserted at the close of the synthesized method.  
  
 But this does not get us all the way to deterministic finalization. In order to reach that, we need the additional support of local reference objects. (This has no analogous support within Managed Extensions, and so it is not a translation issue.)  
  
## Declaring a Reference Object  
 [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] supports the declaration of an object of a reference class on the local stack or as a member of a class as if it were directly accessible. When combined with the association of the destructor with the `Dispose` method, the result is the automated invocation of finalization semantics on reference types.  
  
 First, we define our reference class such that object creation functions as the acquisition of a resource through its class constructor. Secondly, within the class destructor, we release the resource acquired when the object was created.  
  
```  
public ref class R {  
public:  
   R() { /* acquire expensive resource */ }  
   ~R() { /* release expensive resource */ }  
  
   // … everything else …  
};  
```  
  
 The object is declared locally by using the type name but without the accompanying hat. All uses of the object, such as invoking a method, are done through the member selection dot (`.`) instead of arrow (`->`). At the end of the block, the associated destructor, transformed into `Dispose`, is invoked automatically, as shown here:  
  
```  
void f() {  
   R r;   
   r.methodCall();  
  
   // r is automatically destructed here –  
   // that is, r.Dispose() is invoked  
}  
```  
  
 As with the `using` statement within C#, this does not defy the underlying CLR constraint that all reference types must be allocated on the CLR heap. The underlying semantics remain unchanged. The user could equivalently have written the following (and this is likely the internal transformation performed by the compiler):  
  
```  
// equivalent implementation  
// except that it should be in a try/finally clause  
void f() {  
   R^ r = gcnew R;   
   r->methodCall();  
  
   delete r;  
}  
```  
  
 In effect, under the new syntax, destructors are again paired with constructors as an automated acquisition/release mechanism tied to a local object's lifetime.  
  
## Declaring an Explicit Finalize  
 In the new syntax, as we've seen, the destructor is synthesized into the `Dispose` method. This means that when the destructor is not explicitly invoked, the garbage collector, during finalization, will not as before find an associated `Finalize` method for the object. To support both destruction and finalization, we have introduced a special syntax for providing a finalizer. For example:  
  
```  
public ref class R {  
public:  
   !R() { Console::WriteLine( "I am the R::finalizer()!" ); }  
};  
```  
  
 The `!` prefix is analogous to tilde (`~`) that introduces a class destructor – that is, both post-lifetime methods have a token prefixing the name of the class. If the synthesized `Finalize` method occurs within a derived class, an invocation of the base class `Finalize` method is inserted at its end. If the destructor is explicitly invoked, the finalizer is suppressed. Here is what the transformation might look like:  
  
```  
// internal transformation under new syntax  
public ref class R {  
public:  
   void Finalize() {  
      Console::WriteLine( "I am the R::finalizer()!" );  
   }  
};   
```  
  
## Moving from Managed Extensions for C++ to Visual C++ 2010  
 The runtime behavior of a Managed Extensions for C++ program is  changed when it is compiled under [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] whenever a reference class contains a non-trivial destructor. The required translation algorithm is similar to the following:  
  
1.  If a destructor is present, rewrite that to be the class finalizer.  
  
2.  If a `Dispose` method is present, rewrite that into the class destructor.  
  
3.  If a destructor is present but there is no `Dispose` method, retain the destructor while performing the first item.  
  
 In moving your code from Managed Extensions to the new syntax, you might miss performing this transformation. If the application depended in some way on the execution of associated finalization methods, the behavior of the application will silently differ from the one you intended.  
  
## See Also  
 [Managed Types (C++/CL)](../dotnet/managed-types-cpp-cl.md)   
 [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers)