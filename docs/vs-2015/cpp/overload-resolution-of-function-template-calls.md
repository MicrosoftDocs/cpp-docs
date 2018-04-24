---
title: "Overload Resolution of Function Template Calls | Microsoft Docs"
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
  - "function templates overload resolution"
ms.assetid: a2918748-2cbb-4fc6-a176-e256f120bee4
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Overload Resolution of Function Template Calls
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Overload Resolution of Function Template Calls](https://docs.microsoft.com/cpp/cpp/overload-resolution-of-function-template-calls).  
  
A function template can overload nontemplate functions of the same name. In this scenario, function calls are resolved by first using template argument deduction to instantiate the function template with a unique specialization. If template argument deduction fails, the other function overloads are considered to resolve the call. These other overloads, also known as the candidate set, include nontemplate functions and other instantiated function templates. If template argument deduction succeeds, then the generated function is compared with the other functions to determine the best match, following the rules for overload resolution. For more information, see [Overloading](../misc/overloading-cpp.md) and [Argument Matching](../misc/argument-matching.md).  
  
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
  
```Output  
f(int, int)  
void f(T1, T2)  
void f(T1, T2)  
```  
  
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
  
```Output  
void f(T1, T2)  
```  
  
## See Also  
 [Name Resolution](../cpp/templates-and-name-resolution.md)   
 [typename](../cpp/typename.md)   
 [Template Argument Deduction](http://msdn.microsoft.com/library/c4aad83b-fc4f-4a20-9603-1939342c6ce1)





