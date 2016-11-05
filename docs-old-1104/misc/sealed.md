---
title: "__sealed | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__sealed_cpp"
  - "__sealed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sealed keyword [C++]"
  - "__sealed keyword"
ms.assetid: 9e5f778a-4ad8-468d-9c44-783e576fb49b
caps.latest.revision: 11
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
# __sealed
> [!NOTE]
>  This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [sealed](../windows/sealed-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Prevents a method from being overridden or a class from being a base class.  
  
## Syntax  
  
```  
  
      __sealed   
      class-specifier  
__sealed struct-specifier  
__sealed function-declarator  
```  
  
## Remarks  
 The `__sealed` keyword specifies that a class method cannot be overridden or that a class cannot be a base class.  
  
 When using the `__sealed` keyword, keep the following points in mind:  
  
-   A `__sealed` virtual method cannot be overridden.  
  
-   If a nonvirtual member method is marked `__sealed`, the `__sealed` qualification is ignored.  
  
-   A `__sealed` method cannot be pure.  
  
-   The **__sealed** keyword is not allowed when used with the [__interface](../cpp/interface.md) keyword.  
  
 When a class (or struct) is marked with `__sealed`, the class cannot be used as a base class. For example:  
  
```  
__sealed __gc class A {  
   // ...  
};  
// error: cannot derive from a sealed class  
__gc class B : public A { /* ...*/ };  
```  
  
> [!NOTE]
>  The `__sealed` keyword is not allowed when used with the `__abstract` keyword.  
  
## Example  
 In the following example, a sealed virtual method (`f`) is declared. The function is then overridden in `main()`, causing a compiler error:  
  
```  
// keyword__sealed.cpp  
// compile with: /clr:oldSyntax  
  
#using <mscorlib.dll>  
extern "C" int printf_s(const char*, ...);  
  
__gc struct I  
{  
    __sealed virtual void f()  
    {   
        printf_s("I::f()\n");   
    }  
    virtual void g()  
    {  
        printf_s("I::g()\n");  
    }  
};  
  
__gc struct A : I   
{  
    void f() // C3248 sealed function  
    {   
        printf_s("A::f()\n");   
    }     
    void g()  
    {  
        printf_s("A::g()\n");  
    }  
};  
  
int main()  
{  
    A* pA = new A;  
  
    pA->f();  
    pA->g();  
}  
```