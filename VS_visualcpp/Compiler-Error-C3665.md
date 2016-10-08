---
title: "Compiler Error C3665"
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
ms.assetid: 893bb47e-8de1-43aa-af7d-fa47ad149ee9
caps.latest.revision: 12
manager: ghogen
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
# Compiler Error C3665
'destructor' : override specifier 'keyword' not allowed on a destructor/finalizer  
  
 A keyword was used that is not allowed on a destructor or finalizer.  
  
 For example, a new slot cannot be requested on a destructor or finalizer.  For more information, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md) and [Destructors and finalizers](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Destructors_and_finalizers).  
  
 The following sample generates C3665:  
  
```  
// C3665.cpp  
// compile with: /clr  
public ref struct R {  
   virtual ~R() { }  
   virtual void a() { }  
};  
  
public ref struct S : R {  
   virtual ~S() new {}   // C3665  
   virtual void a() new {}   // OK  
};  
```