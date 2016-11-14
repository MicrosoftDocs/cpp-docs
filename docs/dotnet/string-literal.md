---
title: "String Literal | Microsoft Docs"
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
  - "string literals"
  - "strings [C++], string literals"
ms.assetid: 6d1fc3f8-0d58-4d68-9678-16b4f6dc4766
caps.latest.revision: 8
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
# String Literal
The handling of string literals has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 In the Managed Extensions for C++ language design, a managed string literal was indicated by prefacing the string literal with an `S`. For example:  
  
```  
String *ps1 = "hello";  
String *ps2 = S"goodbye";  
```  
  
 The performance overhead between the two initializations turns out to be non-trivial, as the following CIL representation demonstrates as seen through **ildasm**:  
  
```  
// String *ps1 = "hello";  
ldsflda    valuetype $ArrayType$0xd61117dd  
     modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier)   
     '?A0xbdde7aca.unnamed-global-0'  
  
newobj instance void [mscorlib]System.String::.ctor(int8*)  
stloc.0  
  
// String *ps2 = S"goodbye";  
ldstr      "goodbye"  
stloc.0  
```  
  
 That’s a remarkable savings for just remembering (or learning) to prefix a literal string with an `S`. In the new syntax, the handling of string literals is made transparent, determined by the context of use. The `S` no longer needs to be specified.  
  
 What about cases in which we need to explicitly direct the compiler to one interpretation or another? In these cases, we apply an explicit cast. For example:  
  
```  
f( safe_cast<String^>("ABC") );  
```  
  
 Moreover, the string literal now matches a `String` with a simple conversion rather than a standard conversion. While this may not sound like much it changes the resolution of overloaded function sets which include a `String` and a `const char*` as competing formal parameters. The resolution that once resolved to a `const char*` instance is now flagged as ambiguous. For example:  
  
```  
ref struct R {  
   void f(const char*);  
   void f(String^);  
};  
  
int main () {  
   R r;  
   // old syntax: f( const char* );  
   // new syntax: error: ambiguous  
   r.f("ABC");   
}  
```  
  
 Why is there a difference? Since more than one instance named `f` exists within the program, this requires the function overload resolution algorithm to be applied to the call. The formal resolution of an overload function involves three steps.  
  
1.  The collection of the candidate functions. The candidate functions are those methods within the scope that lexically match the name of the function being invoked. For example, since `f()` is invoked through an instance of `R`, all named functions `f` that are not a member of `R` (or of its base class hierarchy) are not candidate functions. In our example, there are two candidate functions. These are the two member functions of `R` named `f`. A call fails during this phase if the candidate function set is empty.  
  
2.  The set of viable functions from among the candidate functions. A viable function is one that can be invoked with the arguments specified in the call, given the number of arguments and their types. In our example, both candidate functions are also viable functions. A call fails during this phase if the viable function set is empty.  
  
3.  Select the function that represents the best match of the call. This is done by ranking the conversions applied to transform the arguments to the type of the viable function parameters. This is relatively straight-forward with a single parameter function; it becomes somewhat more complex when there are multiple parameters. A call fails during this phase if there is no best match. That is, if the conversions necessary to transform the type of the actual argument to the type of the formal parameter are equally good. The call is flagged as ambiguous.  
  
 In Managed Extensions, the resolution of this call invoked the `const char*` instance as the best match. In the new syntax, the conversion necessary to match `"abc"` to `const char*` and `String^` are now equivalent – that is, equally good – and so the call is flagged as bad – that is, as ambiguous.  
  
 This leads us to two questions:  
  
-   What is the type of the actual argument, `"abc"`?  
  
-   What is the algorithm for determining when one type conversion is better than another?  
  
 The type of the string literal `"abc"` is `const char[4]` – remember, there is an implicit null terminating character at the end of every string literal.  
  
 The algorithm for determining when one type conversion is better than another involves placing the possible type conversions in a hierarchy. Here is my understanding of that hierarchy – all these conversions, of course, are implicit. Using an explicit cast notation overrides the hierarchy similar to the way parentheses overrides the usual operator precedence of an expression.  
  
1.  An exact match is best. Surprisingly, for an argument to be an exact match, it does not need to exactly match the parameter type; it just needs to be close enough. This is the key to understanding what is going on in this example, and how the language has changed.  
  
2.  A promotion is better than a standard conversion. For example, promoting a `short int` to an `int` is better than converting an `int` into a `double`.  
  
3.  A standard conversion is better than a boxing conversion. For example, converting an `int` into a `double` is better that boxing an `int` into an `Object`.  
  
4.  A boxing conversion is better than an implicit user-defined conversion. For example, boxing an `int` into an `Object` is better than applying a conversion operator of a `SmallInt` value class.  
  
5.  An implicit user-defined conversion is better than no conversion at all. An implicit user-defined conversion is the last exit before Error (with the caveat that the formal signature might contain a param array or ellipsis at that position).  
  
 So, what does it mean to say that an exact match isn't necessarily exactly a match? For example, `const char[4]` does not exactly match either `const char*` or `String^`, and yet the ambiguity of our example is between two conflicting exact matches!  
  
 An exact match, as it happens, includes a number of trivial conversions. There are four trivial conversions under ISO-C++ that can be applied and still qualify as an exact match. Three are referred to as lvalue transformations. A fourth type is called a qualification conversion. The three lvalue transformations are treated as a better exact match than one requiring a qualification conversion.  
  
 One form of the lvalue transformation is the native-array-to-pointer conversion. This is what is involved in matching a `const char[4]` to `const char*`. Therefore, the match of `f("abc")` to `f(const char*)` is an exact match. In the earlier incarnations of our language, this was the best match, in fact.  
  
 For the compiler to flag the call as ambiguous, therefore, requires that the conversion of a `const char[4]` to a `String^` also be an exact match through a trivial conversion. This is the change that has been introduced in the new language version. And this is why the call is now flagged as ambiguous.  
  
## See Also  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)   
 [String](../windows/string-cpp-component-extensions.md)