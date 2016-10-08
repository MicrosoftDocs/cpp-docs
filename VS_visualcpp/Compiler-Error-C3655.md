---
title: "Compiler Error C3655"
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
ms.assetid: 724919ab-2915-4b61-8794-44648e162d62
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
# Compiler Error C3655
'function' : function already explicitly overridden  
  
 A function can only be explicitly overridden once. For more information, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md).  
  
 The following sample generates C3655:  
  
```  
// C3655.cpp  
// compile with: /clr /c  
public ref struct B {  
   virtual void f();  
   virtual void g();  
};  
  
public ref struct D : B {  
   virtual void f() new sealed = B::f;  
   virtual void g() new sealed = B::f;   // C3655  
   // try the following line instead  
   // virtual void g() new sealed = B::g;  
};  
```