---
title: "Function Template Instantiation"
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
ms.assetid: f22a07c7-3ad1-465a-84f5-8737e274bd47
caps.latest.revision: 8
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
# Function Template Instantiation
When a function template is first called for each type, the compiler creates an instantiation. Each instantiation is a version of the templated function specialized for the type. This instantiation will be called every time the function is used for the type. If you have several identical instantiations, even in different modules, only one copy of the instantiation will end up in the executable file.  
  
 Conversion of function arguments is allowed in function templates for any argument and parameter pair where the parameter does not depend on a template argument.  
  
 Function templates can be explicitly instantiated by declaring the template with a particular type as an argument. For example, the following code is allowed:  
  
```  
// function_template_instantiation.cpp  
template<class T> void f(T) { }  
  
// Instantiate f with the explicitly specified template.  
// argument 'int'  
//  
template void f<int> (int);  
  
// Instantiate f with the deduced template argument 'char'.  
template void f(char);  
int main()  
{  
}  
```  
  
## See Also  
 [Function Templates](../VS_visualcpp/Function-Templates.md)