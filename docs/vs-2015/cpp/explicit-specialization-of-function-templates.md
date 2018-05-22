---
title: "Explicit Specialization of Function Templates | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overriding, functions"
  - "function templates, specialization"
  - "explicit specialization of function templates"
  - "declaring functions, specialization of function template"
  - "specialization of function templates"
ms.assetid: eb0fcb73-eaed-42a1-9b83-14b055a34bf8
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Explicit Specialization of Function Templates
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Explicit Specialization of Function Templates](https://docs.microsoft.com/cpp/cpp/explicit-specialization-of-function-templates).  
  
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
 [Function Templates](../cpp/function-templates.md)





