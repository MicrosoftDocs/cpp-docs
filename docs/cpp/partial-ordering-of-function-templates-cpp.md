---
title: "Partial Ordering of Function Templates (C++) | Microsoft Docs"
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
  - "partial ordering of function templates"
ms.assetid: 0c17347d-0e80-47ad-b5ac-046462d9dc73
caps.latest.revision: 9
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
# Partial Ordering of Function Templates (C++)
Multiple function templates that match the argument list of a function call can be available. C++ defines a partial ordering of function templates to specify which function should be called. The ordering is partial because there can be some templates that are considered equally specialized.  
  
 The compiler chooses the most specialized template function available from the possible matches. For example, if a function template takes a type **T**, and another function template taking **T\*** is available, the **T\*** version is said to be more specialized and is preferred over the generic **T** version whenever the argument is a pointer type, even though both would be allowable matches.  
  
 Use the following process to determine if one function template candidate is more specialized:  
  
1.  Consider two function templates, T1 and T2.  
  
2.  Replace the parameters in T1 with a hypothetical unique type X.  
  
3.  With the parameter list in T1, see if T2 is a valid template for that parameter list. Ignore any implicit conversions.  
  
4.  Repeat the same process with T1 and T2 reversed.  
  
5.  If one template is a valid template argument list for the other template, but the converse is not true, then that template is considered to be less specialized than the other template. If both templates using the previous step form valid arguments for each other, then they are considered to be equally specialized, and an ambiguous call will result when attempting to use them.  
  
6.  Using these rules:  
  
    1.  A template specialization for a specific type is more specialized than one taking a generic type argument.  
  
    2.  A template taking only **T\*** is more specialized than one taking only **T**, because a hypothetical type **X\*** is a valid argument for a **T** template argument, but **X** is not a valid argument for a **T\*** template argument.  
  
    3.  **const T** is more specialized than **T**, because **const X** is a valid argument for a **T** template argument, but **X** is not a valid argument for a **const T** template argument.  
  
    4.  **const T\*** is more specialized than **T\***, because **const X\*** is a valid argument for a **T\*** template argument, but **X\*** is not a valid argument for a **const T\*** template argument.  
  
7.  The following sample works in Visual C++ .NET 2003 as specified in the standard:  
  
```  
// partial_ordering_of_function_templates.cpp  
// compile with: /EHsc  
#include <iostream>  
  
extern "C" int printf(const char*,...);  
template <class T> void f(T) {  
   printf_s("Less specialized function called\n");  
}  
  
template <class T> void f(T*) {  
   printf_s("More specialized function called\n");  
}  
  
template <class T> void f(const T*) {  
   printf_s("Even more specialized function for const T*\n");  
}  
  
int main() {  
   int i =0;  
   const int j = 0;  
   int *pi = &i;  
   const int *cpi = &j;  
  
   f(i);   // Calls less specialized function.  
   f(pi);  // Calls more specialized function.  
   f(cpi); // Calls even more specialized function.  
   // Without partial ordering, these calls would be ambiguous.  
}  
```  
  
### Output  
  
```  
Less specialized function called  
More specialized function called  
Even more specialized function for const T*  
```  
  
## See Also  
 [Function Templates](../cpp/function-templates.md)