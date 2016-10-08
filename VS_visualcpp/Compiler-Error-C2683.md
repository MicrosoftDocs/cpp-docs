---
title: "Compiler Error C2683"
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
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
caps.latest.revision: 10
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
# Compiler Error C2683
'cast' : 'type' is not a polymorphic type  
  
 You cannot use [dynamic_cast](../VS_visualcpp/dynamic_cast-Operator.md) to convert from a non-polymorphic class (a class with no virtual functions).  
  
 You can use [static_cast](../VS_visualcpp/static_cast-Operator.md) to perform conversions of non-polymorphic types. However, `static_cast` does not perform a run-time check.  
  
 The following sample generates C2683:  
  
```  
// C2683.cpp  
// compile with: /c  
class B { };  
class D : public B { };  
  
void f(B* pb) {  
   D* pd1 = dynamic_cast<D*>(pb);  // C2683  
   D* pd1 = static_cast<D*>(pb);   // OK  
}  
```