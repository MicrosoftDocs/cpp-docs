---
title: "Compiler Warning (level 1) C4489"
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
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
caps.latest.revision: 4
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
# Compiler Warning (level 1) C4489
'specifier' : not allowed on interface method 'method'; override specifiers are only allowed on ref class and value class methods  
  
 A specifier keyword was incorrectly used on an interface method.  
  
 For more information, see [Override Specifiers](../VS_visualcpp/Override-Specifiers---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C4489.  
  
```  
// C4489.cpp  
// compile with: /clr /c /W1  
public interface class I {   
   void f() new;   // C4489  
   virtual void b() override;   // C4489  
  
   void g();   // OK  
};  
```