---
title: "Compiler Error C2675"
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
ms.assetid: 4b92a12b-bff8-4dd5-a109-620065fc146c
caps.latest.revision: 12
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
# Compiler Error C2675
unary 'operator' : 'type' does not define this operator or a conversion to a type acceptable to the predefined operator  
  
 C2675 can also occur when using a unary operator, and the type does not define the operator or a conversion to a type acceptable to the predefined operator. To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.  
  
## Example  
 The following sample generates C2675.  
  
```  
// C2675.cpp  
struct C {   
   C(){}  
} c;  
  
struct D {   
   D(){}  
   void operator-(){}  
} d;  
  
int main() {  
   -c;   // C2675  
   -d;   // OK  
}  
```