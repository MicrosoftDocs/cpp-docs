---
title: "Compiler Error C3648"
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
ms.assetid: 5d042989-41cb-4cd0-aa50-976b70146aaf
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
# Compiler Error C3648
this explicit override syntax requires /clr:oldSyntax  
  
 When compiling for the latest managed syntax, the compiler found explicit override syntax for previous versions.  
  
 For more information, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md). For more information on the older syntax, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides--C---.md).  
  
 The following sample generates C3648:  
  
```  
// C3648.cpp  
// compile with: /clr  
public interface struct I {  
   void f();  
};  
  
public ref struct R : I {  
   virtual void I::f() {}   // C3648  
   // try the following line instead  
   // virtual void f() = I::f{}  
};  
```