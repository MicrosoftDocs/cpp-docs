---
title: "Compiler Error C2535"
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
ms.assetid: a958f83e-e2bf-4a59-b44b-d406ec325d7e
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
# Compiler Error C2535
'identifier' : member function already defined or declared  
  
 This error could be caused by using the same formal parameter list in more than one definition or declaration of an overloaded function.  
  
 If you get C2535 because of the Dispose function, see [Destructors and finalizers](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Destructors_and_finalizers) for more information.  
  
 If you are compiling an ATL project, see Knowledge Base article Q241852.  
  
 The following sample generates C2535:  
  
```  
// C2535.cpp  
// compile with: /c  
class C {  
public:  
   void func();   // forward declaration  
   void func() {}   // C2535  
};  
```