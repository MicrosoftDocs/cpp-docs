---
title: "Compiler Error C3498"
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
ms.topic: error-reference
ms.assetid: 0a5a7817-0872-4119-83bf-980a19113374
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
# Compiler Error C3498
'var': you cannot capture a variable that has a managed or WinRTtype  
  
 You cannot capture a variable that has a managed type or a Windows Runtime type in a lambda.  
  
### To correct this error  
  
-   Pass the managed or Windows Runtime variable to the parameter list of the lambda expression.  
  
## Example  
 The following example generates C3498 because a variable that has a managed type appears in the capture list of a lambda expression:  
  
```  
// C3498a.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String ^ s = "Hello";  
   [&s](String ^ r)   
      { return String::Concat(s, r); } (", World!"); // C3498  
}  
```  
  
## Example  
 The following example resolves C3498 by passing the managed variable `s` to the parameter list of the lambda expression:  
  
```  
// C3498b.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String ^ s = "Hello";  
   [](String ^ s, String ^ r)   
      { return String::Concat(s, r); } (s, ", World!");  
}  
```  
  
## See Also  
 [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md)