---
title: "override Specifier | Microsoft Docs"
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
  - "override Identifier"
ms.assetid: b286fb46-9374-4ad8-b2e7-4607119b6133
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
# override Specifier
You can use the `override` keyword to designate member functions that override a virtual function in a base class.  
  
## Syntax  
  
```  
  
function-declaration override;  
```  
  
## Remarks  
 `override` is context-sensitive and has special meaning only when it's used after a member function declaration; otherwise, it's not a reserved keyword.  
  
## Example  
 Use `override` to help prevent inadvertent inheritance behavior in your code. The following example shows where, without using `override`, the member function behavior of the derived class may not have been intended. The compiler doesn't emit any errors for this code.  
  
```cpp  
class BaseClass  
{  
    virtual void funcA();  
    virtual void funcB() const;  
    virtual void funcC(int = 0);  
    void funcD();  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void funcA(); // ok, works as intended  
  
    virtual void funcB(); // DerivedClass::funcB() is non-const, so it does not  
                          // override BaseClass::funcB() const and it is a new member function  
  
    virtual void funcC(double = 0.0); // DerivedClass::funcC(double) has a different  
                                      // parameter type than BaseClass::funcC(int), so  
                                      // DerivedClass::funcC(double) is a new member function  
  
};  
  
```  
  
 When you use `override`, the compiler generates errors instead of silently creating new member functions.  
  
```cpp  
class BaseClass  
{  
    virtual void funcA();  
    virtual void funcB() const;  
    virtual void funcC(int = 0);  
    void funcD();  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void funcA() override; // ok  
  
    virtual void funcB() override; // compiler error: DerivedClass::funcB() does not   
                                   // override BaseClass::funcB() const  
  
    virtual void funcC( double = 0.0 ) override; // compiler error:   
                                                 // DerivedClass::funcC(double) does not   
                                                 // override BaseClass::funcC(int)  
  
    void funcD() override; // compiler error: DerivedClass::funcD() does not   
                           // override the non-virtual BaseClass::funcD()  
};  
  
```  
  
 To specify that functions cannot be overridden and that classes cannot be inherited, use the [final](../cpp/final-specifier.md) keyword.  
  
## See Also  
 [final Specifier](../cpp/final-specifier.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 