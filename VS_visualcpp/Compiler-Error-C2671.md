---
title: "Compiler Error C2671"
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
ms.assetid: fc0ee40f-c8f3-408f-b89d-745d149c4169
caps.latest.revision: 8
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
# Compiler Error C2671
'function' : static member functions do not have 'this' pointers  
  
 A `static` member function tried to access `this`.  
  
 The following sample generates C2671:  
  
```  
// C2671.cpp  
struct S {  
   static S* const func() { return this; }  // C2671  
};  
```