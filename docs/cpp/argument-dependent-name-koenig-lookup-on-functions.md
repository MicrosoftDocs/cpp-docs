---
title: "Argument-Dependent Name (Koenig) Lookup on Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Koenig lookup"
  - "argument-dependent lookup [C++]"
ms.assetid: c0928401-da2c-4658-942d-9ba4df149c35
caps.latest.revision: 10
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
# Argument-Dependent Name (Koenig) Lookup on Functions
The compiler can use argument-dependent name lookup to find the definition of an unqualified function call. Argument-dependent name lookup is also called Koenig lookup. The type of every argument in a function call is defined within a hierarchy of namespaces, classes, structures, unions, or templates. When you specify an unqualified [postfix](../cpp/postfix-expressions.md) function call, the compiler searches for the function definition in the hierarchy associated with each argument type.  
  
## Example  
 In the sample, the compiler notes that function `f()` takes an argument `x`. Argument `x` is of type `A::X`, which is defined in namespace `A`. The compiler searches namespace `A` and finds a definition for function `f()` that takes an argument of type `A::X`.  
  
```  
// argument_dependent_name_koenig_lookup_on_functions.cpp  
namespace A  
{  
   struct X  
   {  
   };  
   void f(const X&)  
   {  
   }  
}  
int main()  
{  
// The compiler finds A::f() in namespace A, which is where   
// the type of argument x is defined. The type of x is A::X.  
   A::X x;  
   f(x);     
}  
```  
