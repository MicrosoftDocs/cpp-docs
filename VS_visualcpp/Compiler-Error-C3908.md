---
title: "Compiler Error C3908"
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
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
caps.latest.revision: 8
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
# Compiler Error C3908
access level less restrictive than 'construct'  
  
 A property accessor method (get or set) cannot have less restrictive access than the access specified on the property itself.  Similarly, for event accessor methods.  
  
 For more information, see [property](../VS_visualcpp/property---C---Component-Extensions-.md) and [event](../VS_visualcpp/event---C---Component-Extensions-.md).  
  
 The following sample generates C3908:  
  
```  
// C3908.cpp  
// compile with: /clr  
ref class X {  
protected:  
   property int i {  
   public:   // C3908 property i is protected   
      int get();  
   private:  
      void set(int);   // OK more restrictive  
   };  
};  
```