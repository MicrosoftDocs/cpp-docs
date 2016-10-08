---
title: "Sealing a Virtual Function"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0e9fae03-6425-4512-9a24-8ccb6dc8a0d4
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Sealing a Virtual Function
The syntax for sealing a virtual function has changed from Managed Extensions for C++ to Visual C++.  
  
 The `__sealed` keyword is used in Managed Extensions to modify either a reference type, disallowing subsequent derivation from it (see [Declaration of a Managed Class Type](../VS_visualcpp/Declaration-of-a-Managed-Class-Type.md)), or to modify a virtual function, disallowing subsequent overriding of the method in a derived class. For example:  
  
```  
__gc class base { public: virtual void f(); };  
__gc class derived : public base {  
public:  
   __sealed void f();  
};  
```  
  
 In this example, `derived::f()` overrides the `base::f()` instance based on the exact match of the function prototype. The `__sealed` keyword indicates that a subsequent class inherited from the derived class cannot provide an override of `derived::f()`.  
  
 In the new syntax, `sealed` is placed after the signature rather than being allowed to appear anywhere before the actual function prototype, as was previously allowed. In addition, the use of `sealed` requires an explicit use of the `virtual` keyword as well. That is, the correct translation of `derived`, above, is as follows:  
  
```  
ref class derived: public base {  
public:  
   virtual void f() override sealed;  
};  
```  
  
 The absence of the `virtual` keyword in this instance results in an error. In the new syntax, the contextual keyword `abstract` can be used in place of the `=0` to indicate a pure virtual function. This was not supported within Managed Extensions. For example:  
  
```  
__gc class base { public: virtual void f()=0; };  
```  
  
 can be rewritten as  
  
```  
ref class base { public: virtual void f() abstract; };  
```  
  
## See Also  
 [Member Declarations within a Class or Interface (C++/CLI)](../VS_visualcpp/Member-Declarations-within-a-Class-or-Interface--C---CLI-.md)   
 [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md)