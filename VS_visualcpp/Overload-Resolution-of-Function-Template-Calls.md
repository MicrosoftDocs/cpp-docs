---
title: "Overload Resolution of Function Template Calls"
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
ms.assetid: a2918748-2cbb-4fc6-a176-e256f120bee4
caps.latest.revision: 9
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
# Overload Resolution of Function Template Calls
A function template can overload nontemplate functions of the same name. In this scenario, function calls are resolved by first using template argument deduction to instantiate the function template with a unique specialization. If template argument deduction fails, the other function overloads are considered to resolve the call. These other overloads, also known as the candidate set, include nontemplate functions and other instantiated function templates. If template argument deduction succeeds, then the generated function is compared with the other functions to determine the best match, following the rules for overload resolution. For more information, see [Overloading](../Topic/Overloading%20%20\(C++\).md) and [Argument Matching](../Topic/Argument%20Matching.md).  
  
## Example  
 If a nontemplate function is an equally good match to a template function, the nontemplate function is chosen (unless the template arguments were explicitly specified), as in the call `f(1, 1)` in the following example.  
  
```  
// template_name_resolution9.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
void f(int, int) { cout << "f(int, int)" << endl; }  
void f(char, char) { cout << "f(char, char)" << endl; }  
  
template <class T1, class T2>  
void f(T1, T2)  
{  
   cout << "void f(T1, T2)" << endl;  
};  
  
int main()  
{  
   f(1, 1);   // Equally good match; choose the nontemplate function.  
   f('a', 1); // Chooses the template function.  
   f<int, int>(2, 2);  // Template arguments explicitly specified.  
}  
```  
  
 **f(int, int)**  
**void f(T1, T2)**  
**void f(T1, T2)**   
## Example  
 The next example illustrates that the exactly matching template function is preferred if the nontemplate function requires a conversion.  
  
```  
// template_name_resolution10.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
void f(int, int) { cout << "f(int, int)" << endl; }  
  
template <class T1, class T2>  
void f(T1, T2)  
{  
   cout << "void f(T1, T2)" << endl;  
};  
  
int main()  
{  
   long l = 0;  
   int i = 0;  
   // Call the template function f(long, int) because f(int, int)  
   // would require a conversion from long to int.  
   f(l, i);  
}  
```  
  
 **void f(T1, T2)**   
## See Also  
 [Name Resolution](../VS_visualcpp/Templates-and-Name-Resolution.md)   
 [typename](../VS_visualcpp/typename.md)   
 [Template Argument Deduction](../Topic/Template%20Argument%20Deduction.md)