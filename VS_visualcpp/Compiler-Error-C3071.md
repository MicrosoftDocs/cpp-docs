---
title: "Compiler Error C3071"
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
ms.assetid: 69879e66-a60e-4058-9bbd-d5c5e2d8ee37
caps.latest.revision: 7
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
# Compiler Error C3071
operator 'operator' can only be applied to an instance of a ref class or a value-type  
  
 A CLR operator cannot be used on a native type. The operator can be used on a ref class or a ref struct (a value type) but not a native type such as int or an alias for a native type such as System::Int32. These types can't be boxed from C++ code in a way that refers to the native variable, so the operator cannot be used.  
  
 For more information, see [Tracking Reference Operator](../VS_visualcpp/Tracking-Reference-Operator--C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3071.  
  
```  
// C3071.cpp  
// compile with: /clr  
class N {};  
ref struct R {};  
  
int main() {  
   N n;  
   %n;   // C3071  
  
   R r;  
   R ^ r2 = %r;   // OK  
}  
```