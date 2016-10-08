---
title: "Compiler Error C2847"
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
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
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
# Compiler Error C2847
cannot apply sizeof to managed or WinRT type 'class'  
  
 The [sizeof](../VS_visualcpp/sizeof-Operator.md) operator gets the value of an object at compile time. The size of a managed or WinRT class, interface, or value type is dynamic and so cannot be known at compile time.  
  
 For example, the following sample generates C2847:  
  
```  
// C2847.cpp  
// compile with: /clr  
ref class A {};  
  
int main() {  
   A ^ xA = gcnew A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```  
  
 The following sample generates C2847:  
  
```  
// C2847_b.cpp  
// compile with: /clr:oldSyntax  
__gc class A {};  
  
int main() {  
   A *xA = new A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```