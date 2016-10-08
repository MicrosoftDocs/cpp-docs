---
title: "Compiler Error C2061"
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
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
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
# Compiler Error C2061
syntax error : identifier 'identifier'  
  
 The compiler found an identifier where it wasn't expected. Make sure that `identifier` is declared before you use it.  
  
 An initializer may be enclosed by parentheses. To avoid this problem, enclose the declarator in parentheses or make it a `typedef`.  
  
 This error could also be caused when the compiler detects an expression as a class template argument; use [typename](../VS_visualcpp/typename.md) to tell the compiler it is a type.  
  
 The following sample generates C2061:  
  
```  
// C2061.cpp  
// compile with: /c  
template < A a >   // C2061  
// try the following line instead  
// template < typename b >  
class c{};  
```  
  
 C2061 can occur if you pass an instance name to [typeid](../VS_visualcpp/typeid---C---Component-Extensions-.md):  
  
```  
// C2061b.cpp  
// compile with: /clr  
ref struct G {  
   int i;  
};  
  
int main() {  
   G ^ pG = gcnew G;  
   System::Type ^ pType = typeid<pG>;   // C2061  
   System::Type ^ pType2 = typeid<G>;   // OK  
}  
```