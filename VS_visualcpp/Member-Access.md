---
title: "Member Access"
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
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
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
# Member Access
Class member access can be controlled by overloading the member access operator (**–>**). This operator is considered a unary operator in this usage, and the overloaded operator function must be a class member function. Therefore, the declaration for such a function is:  
  
## Syntax  
  
```  
  
class-type *operator–>()  
```  
  
## Remarks  
 where *class-type* is the name of the class to which this operator belongs. The member access operator function must be a nonstatic member function.  
  
 This operator is used (often in conjunction with the pointer-dereference operator) to implement "smart pointers" that validate pointers prior to dereference or count usage.  
  
 The **.** member access operator cannot be overloaded.  
  
## See Also  
 [Operator Overloading](../VS_visualcpp/Operator-Overloading.md)