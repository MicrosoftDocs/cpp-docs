---
title: "Compiler Error C3409"
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
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
caps.latest.revision: 13
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
# Compiler Error C3409
empty attribute block is not allowed  
  
 The square brackets were interpreted by the compiler as an [attribute](../VS_visualcpp/C---Attributes-Reference.md) block, but no attributes were found.  
  
 The compiler may generate this error when you use square brackets as part of the definition of a lambda expression. This error occurs when the compiler cannot determine whether the square brackets are part of the definition of a lambda expression or of an attribute block. For more information about lambda expressions, see [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md).  
  
### To correct this error  
  
1.  If the square brackets are part of an attribute block:  
  
    1.  Provide one or more attributes in the attribute block.  
  
    2.  Remove the attribute block.  
  
2.  If the square brackets are part of a lambda expression:  
  
    1.  Make sure that the lambda expression follows valid syntax rules.  
  
         For more information about lambda expression syntax, see [Lambda Expression Syntax](../VS_visualcpp/Lambda-Expression-Syntax.md).  
  
    2.  
  
## Example  
 The following example generates C3409.  
  
```  
// C3409.cpp  
// compile with: /c  
#include <windows.h>  
[]   // C3409  
class a {};  
  
// OK  
[object, uuid("00000000-0000-0000-0000-000000000000")]  
__interface x {};  
  
[coclass, uuid("00000000-0000-0000-0000-000000000001")]  
class b : public x {};  
```  
  
## Example  
 The following example generates C3409 because a lambda expression uses the `mutable` specification, but does not provide a parameter list. The compiler cannot determine whether the square brackets are part of the definition of a lambda expression or of an attribute block.  
  
```  
// C3409b.cpp  
  
int main()  
{  
   [] mutable {}();  
}  
```  
  
## See Also  
 [attribute](../VS_visualcpp/C---Attributes-Reference.md)   
 [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md)   
 [Lambda Expression Syntax](../VS_visualcpp/Lambda-Expression-Syntax.md)