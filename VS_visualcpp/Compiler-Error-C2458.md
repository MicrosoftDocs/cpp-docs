---
title: "Compiler Error C2458"
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
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
caps.latest.revision: 7
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
# Compiler Error C2458
'identifier' : redefinition within definition  
  
 A class, structure, union, or enumeration is redefined in its own declaration.  
  
 The following sample generates C2458:  
  
```  
// C2458.cpp  
class C {  
   enum i { C };   // C2458  
};  
```