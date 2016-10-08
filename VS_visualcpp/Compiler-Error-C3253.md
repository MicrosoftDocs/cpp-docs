---
title: "Compiler Error C3253"
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
ms.assetid: da40be26-0f78-4730-8727-ad11cddf8869
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
# Compiler Error C3253
'function' : error with explicit override  
  
 An explicit override was specified incorrectly. For example, you cannot specify an implementation for an override that you also specify as pure. For more information, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md).  
  
 The following sample generates C3253:  
  
```  
// C3253.cpp  
// compile with: /clr  
public interface struct I {  
   void a();  
   void b();  
   void c();  
};  
  
public ref struct R : I {  
   virtual void a() = 0, I::a {}   // C3253  
   virtual void b() = I::a {}   // OK  
   virtual void c() = 0;   // OK  
};  
```