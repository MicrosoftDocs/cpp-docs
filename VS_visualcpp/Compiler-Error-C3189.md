---
title: "Compiler Error C3189"
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
ms.assetid: b254de79-931e-4a59-a9f4-1c690d90ca5e
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
# Compiler Error C3189
'typeid<type abstract declarator\>': this syntax is no longer supported, use ::typeid instead  
  
 An obsolete form of [typeid](../VS_visualcpp/typeid---C---Component-Extensions-.md) was used, use the new form.  
  
 The following sample generates C3189:  
  
```  
// C3189.cpp  
// compile with: /clr  
int main() {  
   System::Type^ t  = typeid<System::Object>;   // C3189  
   System::Type^ t2  = System::Object::typeid;   // OK  
}  
```