---
title: "Changes in Constructor Initialization Order"
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
ms.assetid: 8892c38d-6bf7-4cf7-ac8f-15e052135a79
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Changes in Constructor Initialization Order
The order of initialization for class constructors has changed from Managed Extensions for C++ to Visual C++.  
  
## Comparison of Constructor Initialization Order  
 Under Managed Extensions for C++, constructor initialization occurred in the following order:  
  
1.  The constructor of the base class, if any, is invoked.  
  
2.  The initialization list of the class is evaluated.  
  
3.  The code body of the class constructor is executed.  
  
 This order of execution follows the same conventions as in native C++ programming. The new Visual C++ language prescribes the following execution order for CLR classes:  
  
1.  The initialization list of the class is evaluated.  
  
2.  The constructor of the base class, if any, is invoked.  
  
3.  The code body of the class constructor is executed.  
  
 Note this change applies only to CLR classes; native classes in Visual C++ still follow the previous conventions. In both cases, these rules cascade upward throughout the whole hierarchy chain of a given class.  
  
 Consider the following code example using Managed Extensions for C++:  
  
```  
__gc class A  
{  
public:  
   A() : _n(1)  
   {  
   }  
  
protected:  
   int _n;  
};  
  
__gc class B : public A  
{  
public:  
   B() : _m(_n)  
   {  
   }  
private:  
   int _m;  
};  
```  
  
 Following the constructor initialization order prescribed above, we should see the following order of execution when new instances of class `B` are constructed:  
  
1.  The constructor of the base class `A` is invoked. The `_n` member is initialized to `1`.  
  
2.  The initialization list for class `B` is evaluated. The `_m` member is initialized to `1`.  
  
3.  The code body of class `B` is executed.  
  
 Now consider the same code in the new Visual C++ syntax:  
  
```  
ref class A  
{  
public:  
   A() : _n(1)  
   {  
   }  
  
protected:  
   int _n;  
};  
  
ref class B : A  
{  
public:  
   B() : _m(_n)  
   {  
   }  
private:  
   int _m;  
};  
```  
  
 The order of execution when new instances of class `B` are constructed under the new syntax is:  
  
1.  The initialization list for class `B` is evaluated. The `_m` member is initialized to `0` (`0` is the uninitialized value of the `_m` class member).  
  
2.  The constructor of the base class `A` is invoked. The `_n` member is initialized to `1`.  
  
3.  The code body of class `B` is executed.  
  
 Note that a similar syntax produces different results for these code examples. The constructor of class `B` depends on a value from base class `A` to initialize its member. However, the constructor for class `A` has not yet been invoked. Such a dependency can be especially dangerous when the inherited class depends on a memory or resource allocation to occur in the base class constructor.  
  
## What This Means Going from Managed Extensions for C++ to Visual C++ 2010  
 In many cases the changes to the execution order of class constructors should be transparent to the programmer because base classes have no notion of the behavior of inherited classes. However, as these code examples illustrate, the constructors of inherited classes can be greatly affected when their initialization lists depend on the values of base class members. When you move your code from Managed Extensions for C++ to the new syntax, consider moving such constructs to the body of the class constructor, where execution is guaranteed to occur last.  
  
## See Also  
 [Managed Types (C++/CL)](../VS_visualcpp/Managed-Types--C---CL-.md)   
 [Constructors](../VS_visualcpp/Constructors--C---.md)   
 [Constructor Initializers](../Topic/Constructor%20Initializers.md)