---
title: "Value Type Semantics | Microsoft Docs"
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
  - "interior_ptr keyword [C++]"
  - "virtual functions, value types"
  - "inheritance, value types"
  - "pinning pointers"
  - "pin_ptr keyword [C++]"
  - "__pin keyword"
ms.assetid: 7f065589-ad25-4850-baf1-985142e35e52
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
# Value Type Semantics
Value type semantics have changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 Here is the canonical simple value type used in the Managed Extensions for C++ spec:  
  
```  
__value struct V { int i; };  
__gc struct R { V vr; };  
```  
  
 In Managed Extensions, we can have four syntactic variants of a value type (where forms 2 and 3 are the same semantically):  
  
```  
V v = { 0 };       // Form (1)  
V *pv = 0;         // Form (2) an implicit form of (3)  
V __gc *pvgc = 0;  // Form (3)  
__box V* pvbx = 0; // Form (4) must be local   
```  
  
## Invoking Inherited Virtual Methods  
 `Form (1)` is the canonical value object, and it is reasonably well understood, except when someone attempts to invoke an inherited virtual method such as `ToString()`. For example:  
  
```  
v.ToString(); // error!  
```  
  
 In order to invoke this method, because it is not overridden in `V`, the compiler must have access to the associated virtual table of the base class. Because value types are in-state storage without the associated pointer to its virtual table (vptr), this requires that `v` be boxed. In the Managed Extensions language design, implicit boxing is not supported but must be explicitly specified by the programmer, as in  
  
```  
__box( v )->ToString(); // Managed Extensions: note the arrow  
```  
  
 The primary motive behind this design is pedagogical: underlying mechanism needs to be visible to the programmer so that she will understand the 'cost' of not providing an instance within her value type. Were `V` to contain an instance of `ToString`, the boxing would not be necessary.  
  
 The lexical complexity of explicitly boxing the object, but not the underlying cost of the boxing itself, is removed in the new syntax:  
  
```  
v.ToString(); // new syntax  
```  
  
 but at the cost of possibly misleading the class designer as to the cost of not having provided an explicit instance of the `ToString` method within `V`. The reason for preferring the implicit boxing is that while there is usually just one class designer, there are an unlimited number of users, none of whom would have the freedom to modify `V` to eliminate the possibly onerous explicit box.  
  
 The criteria by which to determine whether or not to provide an overriding instance of `ToString` within a value class should be the frequency and location of its uses. If it is called very rarely, there is of course little benefit in its definition. Similarly, if it is called in non-performant areas of the application, adding it will also not measurably add to the general performance of the application. Alternatively, one can keep a tracking handle to the boxed value, and calls through that handle would not require boxing.  
  
## There is No Longer a Value Class Default Constructor  
 Another difference with a value type between Managed Extensions and the new syntax is the removal of support for a default constructor. This is because there are occasions during execution in which the CLR can create an instance of the value type without invoking the associated default constructor. That is, the attempt under Managed Extensions to support a default constructor within a value type could not in practice be guaranteed. Given that absence of guarantee, it was felt to be better to drop the support altogether rather than have it be non-deterministic in its application.  
  
 This is not as bad as it might initially seem. This is because each object of a value type is zeroed out automatically (that is, each type is initialized to its default value). As a result, the members of a local instance are never undefined. In this sense, the loss of the ability to define a trivial default constructor is really not a loss at all – and in fact is more efficient when performed by the CLR.  
  
 The problem is when a user of Managed Extensions defines a non-trivial default constructor. This has no mapping to the new syntax. The code within the constructor will need to be migrated into a named initialization method that would then need to be explicitly invoked by the user.  
  
 The declaration of a value type object within the new syntax is otherwise unchanged. The down side of this is that value types are not satisfactory for the wrapping of native types for the following reasons:  
  
-   There is no support for a destructor within a value type. That is, there is no way to automate a set of actions triggered by the end of an object's lifetime.  
  
-   A native class can be contained only within a managed type as a pointer which is then allocated on the native heap.  
  
 We would like to wrap a small native class in a value type rather than a reference type to avoid a double heap allocation: the native heap to hold the native type, and the CLR heap to hold the managed wrapper. Wrapping a native class within a value type allows you to avoid the managed heap, but provides no way to automate the reclamation of the native heap memory. Reference types are the only practicable managed type within which to wrap non-trivial native classes.  
  
## Interior Pointers  
 `Form (2)` and `Form (3)` above can address nearly anything in this world or the next (that is, anything managed or native). So, for example, all the following are permitted in Managed Extensions:  
  
```  
__value struct V { int i; };  
__gc struct R { V vr; };  
  
V v = { 0 };  // Form (1)  
V *pv = 0;  // Form (2)  
V __gc *pvgc = 0;  // Form (3)  
__box V* pvbx = 0;  // Form (4)  
  
R* r;  
  
pv = &v;            // address a value type on the stack  
pv = __nogc new V;  // address a value type on native heap  
pv = pvgc;          // we are not sure what this addresses  
pv = pvbx;          // address a boxed value type on managed heap  
pv = &r->vr;        // an interior pointer to value type within a  
                    //    reference type on the managed heap  
```  
  
 So, a `V*` can address a location within a local block (and therefore can be dangling), at global scope, within the native heap (for example, if the object it addresses has already been deleted), within the CLR heap (and therefore will be tracked if it should be relocated during garbage collection), and within the interior of a reference object on the CLR heap (an interior pointer, as this is called, is also transparently tracked).  
  
 In Managed Extensions, there is no way to separate out the native aspects of a `V*`; that is, it is treated at its inclusive, which handles the possibility of it addressing an object or subobject on the managed heap.  
  
 In the new syntax, a value type pointer is factored into two types: `V*`, which is limited to non-CLR heap locations, and the interior pointer, `interior_ptr<V>`, which allows for but does not require an address within the managed heap.  
  
```  
// may not address within managed heap   
V *pv = 0;   
  
// may or may not address within managed heap  
interior_ptr<V> pvgc = nullptr;   
```  
  
 `Form (2)` and `Form (3)` of Managed Extensions map into `interior_ptr<V>`. `Form (4)` is a tracking handle. It addresses the whole object that has been boxed within the managed heap. It is translated in the new syntax into a `V^`,  
  
```  
V^ pvbx = nullptr; // __box V* pvbx = 0;    
```  
  
 The following declarations in Managed Extensions all map to interior pointers in the new syntax. (They are value types within the `System` namespace.)  
  
```  
Int32 *pi;   // => interior_ptr<Int32> pi;  
Boolean *pb; // => interior_ptr<Boolean> pb;  
E *pe;       // => interior_ptr<E> pe; // Enumeration  
```  
  
 The built-in types are not considered managed types, although they do serve as aliases to the types within the `System` namespace. Thus the following mappings hold true between Managed Extensions and the new syntax:  
  
```  
int * pi;     // => int* pi;  
int __gc * pi2; // => interior_ptr<int> pi2;  
```  
  
 When translating a `V*` in your existing program, the most conservative strategy is to always turn it to an `interior_ptr<V>`. This is how it was treated under Managed Extensions. In the new syntax, the programmer has the option of restricting a value type to non-managed heap addresses by specifying `V*` rather than an interior pointer. If, on translating your program, you can do a transitive closure of all its uses and be sure that no assigned address is within the managed heap, then leaving it as `V*` is fine.  
  
## Pinning Pointers  
 The garbage collector may optionally move objects that reside on the CLR heap to different locations within the heap, usually during a compaction phase. This movement is not a problem to tracking handles, tracking references, and interior pointers which update these entities transparently. This movement is a problem, however, if the user has passed the address of an object on the CLR heap outside of the runtime environment. In this case, the volatile movement of the object is likely to cause a runtime failure. To exempt objects such as these from being moved, we must locally pin them to their location for the extent of their outside use.  
  
 In Managed Extensions, a *pinning pointer* is declared by qualifying a pointer declaration with the `__pin` keyword. Here is an example slightly modified from the Managed Extensions specification:  
  
```  
__gc struct H { int j; };  
  
int main()   
{  
   H * h = new H;  
   int __pin * k = & h -> j;  
  
   // …  
};  
```  
  
 In the new language design, a pinning pointer is declared with syntax analogous to that of an interior pointer.  
  
```  
ref struct H  
{  
public:  
   int j;  
};  
  
int main()  
{  
   H^ h = gcnew H;  
   pin_ptr<int> k = &h->j;  
  
   // …  
}  
```  
  
 A pinning pointer under the new syntax is a special case of an interior pointer. The original constraints on a pinning pointer remain. For example, it cannot be used as a parameter or return type of a method; it can be declared only on a local object. A number of additional constraints, however, have been added in the new syntax.  
  
 The default value of a pinning pointer is `nullptr`, not `0`. A `pin_ptr<>` cannot be initialized or assigned `0`. All assignments of `0` in existing code will need to be changed to `nullptr`.  
  
 A pinning pointer under Managed Extensions was permitted to address a whole object, as in the following example taken from the Managed Extensions specification:  
  
```  
__gc class G {  
public:  
   void incr(int* pi) { pi += 1; }  
};  
__gc struct H { int j; };  
void f( G * g ) {  
   H __pin * pH = new H;     
   g->incr(& pH -> j);     
};  
```  
  
 In the new syntax, pinning the whole object returned by the `new` expression is not supported. Rather, the address of the interior member needs to be pinned. For example,  
  
```  
ref class G {  
public:  
   void incr(int* pi) { *pi += 1; }  
};  
ref struct H { int j; };  
void f( G^ g ) {  
   H ^ph = gcnew H;  
   Console::WriteLine(ph->j);  
   pin_ptr<int> pj = &ph->j;  
   g->incr(  pj );  
   Console::WriteLine(ph->j);  
}  
```  
  
## See Also  
 [Value Types and Their Behaviors (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)   
 [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)