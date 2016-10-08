---
title: "Compiler Error C3290"
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
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
caps.latest.revision: 8
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
# Compiler Error C3290
'type' : a trivial property cannot have reference type  
  
 A property was declared incorrectly. When you declare a trivial property, the compiler creates a variable that the property will update, and it is not possible to have a tracking reference variable in a class.  
  
 See [property](../VS_visualcpp/property---C---Component-Extensions-.md) and [Tracking Reference Operator](../VS_visualcpp/Tracking-Reference-Operator--C---Component-Extensions-.md) for more information.  
  
## Example  
 The following sample generates C3290.  
  
```  
// C3290.cpp  
// compile with: /clr /c  
ref struct R {};  
  
ref struct X {  
   R^ mr;  
  
   property R % y;   // C3290  
   property R ^ x;   // OK  
  
   // OK  
   property R% prop {  
      R% get() {   
         return *mr;   
      }  
  
      void set(R%) {}  
   }  
};  
  
int main() {  
   X x;  
   R% xp = x.prop;  
}  
```