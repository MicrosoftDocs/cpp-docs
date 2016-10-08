---
title: "Explicit Specialization of Function Templates"
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
ms.topic: language-reference
ms.assetid: eb0fcb73-eaed-42a1-9b83-14b055a34bf8
caps.latest.revision: 7
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
# Explicit Specialization of Function Templates
With a function template, you can define special behavior for a specific type by providing an explicit specialization (override) of the function template for that type. For example:  
  
```  
template<> void MySwap(double a, double b);  
```  
  
 This declaration enables you to define a different function for **double** variables. Like non-template functions, standard type conversions (such as promoting a variable of type **float** to **double**) are applied.  
  
## Example  
  
```  
// explicit_specialization.cpp  
template<class T> void f(T t)  
{  
};  
  
// Explicit specialization of f with 'char' with the  
// template argument explicitly specified:  
//  
template<> void f<char>(char c)  
{  
}  
  
// Explicit specialization of f with 'double' with the  
// template argument deduced:  
//  
template<> void f(double d)  
{  
}  
int main()  
{  
}  
```  
  
## See Also  
 [Function Templates](../VS_visualcpp/Function-Templates.md)