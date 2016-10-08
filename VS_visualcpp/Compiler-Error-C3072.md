---
title: "Compiler Error C3072"
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
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
caps.latest.revision: 5
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
# Compiler Error C3072
operator 'operator' cannot be applied to an instance of a ref class  
  
 use the unary '`operator` ' operator to convert an instance of a ref class to a handle type  
  
 A CLR type requires CLR operators, not native (or standard) operators.  For more information, see [Tracking Reference Operator](../VS_visualcpp/Tracking-Reference-Operator--C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3072.  
  
```  
// C3072.cpp  
// compile with: /clr  
ref class R {};  
  
int main() {  
   R r1;  
   R^ r2 = &r1;   // C3072  
   R^ r3 = %r1;   // OK  
}  
```