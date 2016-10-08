---
title: "Compiler Error C2460"
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
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
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
# Compiler Error C2460
'identifier1' : uses 'identifier2', which is being defined  
  
 A class or structure (`identifier2`) is declared as a member of itself (`identifier1`). Recursive definitions of classes and structures are not allowed.  
  
 The following sample generates C2460:  
  
```  
// C2460.cpp  
class C {  
   C aC;    // C2460  
};  
```  
  
 Instead, use a pointer reference in the class.  
  
```  
// C2460.cpp  
class C {  
   C * aC;    // OK  
};  
```