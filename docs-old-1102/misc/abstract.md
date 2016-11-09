---
title: "__abstract"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__abstract_cpp"
  - "__abstract"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classes [C++], abstract"
  - "__abstract keyword"
ms.assetid: fc6eee5e-9f07-4438-97f7-f2e124263575
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
# __abstract
> [!NOTE]
>  This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [abstract](../windows/abstract-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Declares a managed class that cannot be instantiated directly.  
  
## Syntax  
  
```  
  
      __abstract   
      class-specifier  
__abstract struct-specifier  
```  
  
## Remarks  
 The `__abstract` keyword declares that the target class can only be used as a base class of another class. Applying `__abstract` to a class or structure does not imply that the result is a __gc class or \__gc structure.  
  
 Differing from the C++ notion of an [abstract](../cpp/abstract-classes-cpp.md) base class, a class with the `__abstract` keyword can define its member functions.  
  
> [!NOTE]
>  The `__abstract` keyword is not allowed when used with the `__value` or `__sealed` keyword and redundant when used with the `__interface` keyword.  
  
## Example  
 In the following example, the `Derived` class is derived from an abstract base class (`Base`). Instantiation is then attempted on both, but only `Derived` is successful.  
  
```  
// keyword__abstract.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__abstract __gc class Base {  
   int BaseFunction() {  
      return 0;  
   }  
};  
  
__gc class Derived: public Base {};  
  
int main() {  
   Base* MyBase = new Base();   // C3622 can't BAse is abstract  
   Derived* MyDerived = new Derived();  
}  
```