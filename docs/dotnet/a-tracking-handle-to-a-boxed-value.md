---
title: "A Tracking Handle to a Boxed Value | Microsoft Docs"
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
  - "boxed value types, tracking handle to"
ms.assetid: 16c92048-5b74-47d5-8eca-dfea3d38879a
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
# A Tracking Handle to a Boxed Value
The usage of a tracking handle to reference a value type has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 Boxing is a peculiarity of the CLR unified type system. Value types directly contain their state, while reference types are an implicit pair: the named entity is a handle to an unnamed object allocated on the managed heap. Any initialization or assignment of a value type to an `Object`, for example, requires that the value type be placed within the CLR heap – this is where the image of boxing it arises – first by allocating the associated memory, then by copying the value type’s state, and then returning the address of this anonymous Value/Reference hybrid. Thus, when one writes in C#  
  
```  
object o = 1024; // C# implicit boxing  
```  
  
 there is a great deal more going on than is made apparent by the simplicity of the code. The design of C# hides the complexity not only of what operations are taking place under the hood, but also of the abstraction of boxing itself. Managed Extensions for C++, on the other hand, concerned that this would lead to a false sense of efficiency, puts it in the user’s face by requiring an explicit instruction:  
  
```  
Object *o = __box( 1024 ); // Managed Extensions explicit boxing  
```  
  
 Boxing is implicit in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)]:  
  
```  
Object ^o = 1024; // new syntax implicit boxing  
```  
  
 The `__box` keyword serves a vital service within Managed Extensions, one that is absent by design from languages such as C# and [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]: it provides both a vocabulary and tracking handle for directly manipulating a boxed instance on the managed heap. For example, consider the following small program:  
  
```  
int main() {  
   double result = 3.14159;  
   __box double * br = __box( result );  
  
   result = 2.7;   
   *br = 2.17;     
   Object * o = br;  
  
   Console::WriteLine( S"result :: {0}", result.ToString() ) ;  
   Console::WriteLine( S"result :: {0}", __box(result) ) ;  
   Console::WriteLine( S"result :: {0}", br );  
}  
```  
  
 The underlying code generated for the three invocations of `WriteLine` show the various costs of accessing the value of a boxed value type (thanks to Yves Dolce for pointing out these differences), where the indicated lines show the overhead associated with each invocation.  
  
```  
// Console::WriteLine( S"result :: {0}", result.ToString() ) ;  
ldstr      "result :: {0}"  
ldloca.s   result  // ToString overhead  
call       instance string  [mscorlib]System.Double::ToString()  // ToString overhead  
call       void [mscorlib]System.Console::WriteLine(string, object)  
  
// Console::WriteLine( S"result :: {0}", __box(result) ) ;  
Ldstr    " result :: {0}"  
ldloc.0  
box    [mscorlib]System.Double // box overhead  
call    void [mscorlib]System.Console::WriteLine(string, object)  
  
// Console::WriteLine( S"result :: {0}", br );  
ldstr    "result :: {0}"  
ldloc.0  
call     void [mscorlib]System.Console::WriteLine(string, object)  
```  
  
 Passing the boxed value type directly to `Console::WriteLine` eliminates both the boxing and the need to invoke `ToString()`. (Of course, there is the earlier boxing to initialize `br`, so we don’t gain anything unless we really put `br` to work.  
  
 In the new syntax, the support for boxed value types is considerably more elegant and integrated within the type system while retaining its power. For example, here is the translation of the earlier small program:  
  
```  
int main()  
{  
   double result = 3.14159;  
   double^ br = result;  
   result = 2.7;  
   *br = 2.17;  
   Object^ o = br;  
   Console::WriteLine( "result :: {0}", result.ToString() );  
   Console::WriteLine( "result :: {0}", result );  
   Console::WriteLine( "result :: {0}", br );  
}  
```  
  
## See Also  
 [Value Types and Their Behaviors (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [How to: Explicitly Request Boxing](../dotnet/how-to-explicitly-request-boxing.md)