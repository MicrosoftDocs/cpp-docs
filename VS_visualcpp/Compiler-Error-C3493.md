---
title: "Compiler Error C3493"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 734b4257-12a3-436f-8488-c8c55ec81634
caps.latest.revision: 6
manager: douge
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
# Compiler Error C3493
'var' cannot be implicitly captured because no default capture mode has been specified  
  
 The empty lambda expression capture, `[]`, specifies that the lambda expression does not explicitly or implicitly capture any variables.  
  
### To correct this error  
  
-   Provide a default capture mode, or  
  
-   Explicitly capture one or more variables.  
  
## Example  
 The following example generates C3493 because it modifies an external variable but specifies the empty capture clause:  
  
```  
// C3493a.cpp  
  
int main()  
{  
   int m = 55;  
   [](int n) { m = n; }(99); // C3493  
}  
```  
  
## Example  
 The following example resolves C3493 by specifying by-reference as the default capture mode.  
  
```  
// C3493b.cpp  
  
int main()  
{  
   int m = 55;  
   [&](int n) { m = n; }(99);  
}  
```  
  
## See Also  
 [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md)