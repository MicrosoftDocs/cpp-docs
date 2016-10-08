---
title: "Compiler Error C2800"
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
ms.assetid: a2f1a590-9fe6-44cb-ad09-b4505ef47c6a
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
# Compiler Error C2800
'operator operator' cannot be overloaded  
  
 The following operators cannot be overloaded: class member access (`.`), pointer to member (`.*`), scope resolution (`::`), conditional expression (`? :`), and `sizeof`.  
  
 The following sample generates C2800:  
  
```  
// C2800.cpp  
// compile with: /c  
class C {  
   operator:: ();   // C2800  
};  
```