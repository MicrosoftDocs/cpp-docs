---
title: "Compiler Error C2588"
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
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
caps.latest.revision: 6
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
# Compiler Error C2588
'::~identifier' : illegal global destructor  
  
 The destructor is defined for something other than a class, structure, or union. This is not allowed.  
  
 This error can be caused by a missing class, structure, or union name on the left side of the scope resolution (`::`) operator.  
  
 The following sample generates C2588:  
  
```  
// C2588.cpp  
~F();   // C2588  
```