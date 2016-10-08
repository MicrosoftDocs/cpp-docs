---
title: "Compiler Error C2574"
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
ms.assetid: 3e1c5c18-ee8b-4dbb-bfc0-d3b8991af71b
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
# Compiler Error C2574
'destructor' : cannot be declared static  
  
 Neither destructors nor constructors can be declared `static`.  
  
 The following sample generates C2574:  
  
```  
// C2574.cpp  
// compile with: /c  
class A {  
   virtual static ~A();   // C2574  
   //  try the following line instead  
   // virtual ~A();  
};  
```