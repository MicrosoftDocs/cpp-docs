---
title: "__try_cast"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__try_cast"
  - "__try_cast_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__try_cast keyword"
  - "casting failures"
  - "exceptions, unsuccessful casts"
  - "throwing exceptions, unsuccessful casts"
ms.assetid: e9e5da3a-f5b9-4915-b30a-a432e8574d03
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.mt: 
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
# __try_cast
**Note** This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [safe_cast](../windows/safe-cast-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Performs the specified cast or throws an exception if the cast fails.  
  
## Syntax  
  
```  
  
__try_cast <  
 type-id  
 > ( expression )  
```  
  
## Remarks  
 The `__try_cast` keyword (similar in behavior to [dynamic_cast](../cpp/dynamic-cast-operator.md)) provides support for automatically throwing an exception (of type **System::InvalidCastException**) whenever the specified casting operation fails.  
  
 The `__try_cast` keyword can be used during the testing phase of your application, automatically alerting you to possible casting failures.  
  
 When porting Managed Extensions for C++, replace `__try_cast` calls with [safe_cast](../windows/safe-cast-cpp-component-extensions.md).  
  
 `__try_cast` does not work on casts of pointer to value types ([__value](../misc/value.md)), since it is not possible to check the types at runtime.  
  
## Example  
 In the following example, an attempt to cast a pointer (of `Derived` type) to another pointer (of `MoreDerived` type) is made. If the cast fails, it is caught and reported by the catch block:  
  
```  
// keyword__try_cast.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc struct Base {};   
__gc struct Derived : Base {};  
__gc struct MoreDerived : Derived {};  
  
int main() {  
   Base*bp = new Derived;  
   try {  
       MoreDerived* mdp = __try_cast<MoreDerived*>(bp);  
   }  
   catch(System::InvalidCastException*) {  
       Console::WriteLine("Could not cast 'bp' to MoreDerived*");  
   }  
}  
```  
  
## Output  
  
```  
Could not cast 'bp' to MoreDerived*  
```