---
title: "Compiler Error C3299"
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
ms.assetid: 7cabdf01-bceb-404f-9401-cdd9c7fc1641
caps.latest.revision: 4
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
# Compiler Error C3299
'member_function' : cannot specify constraints, they are inherited from the base method  
  
 When overriding a generic member function, you cannot specify constraint clauses (repeating the constraints implies that the constraints are not inherited).  
  
 The constraint clauses on the generic function you are overriding will be inherited.  
  
 For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../VS_visualcpp/Constraints-on-Generic-Type-Parameters--C---CLI-.md).  
  
## Example  
 The following sample generates C3299.  
  
```  
// C3299.cpp  
// compile with: /clr /c  
public ref struct R {  
   generic<class T>   
   where T : R  
   virtual void f();  
};  
  
public ref struct S : R {  
   generic<class T>   
   where T : R   // C3299  
   virtual void f() override;  
};  
```