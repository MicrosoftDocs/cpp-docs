---
title: "Compiler Error C2333"
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
ms.assetid: 2636fc1e-d3e7-4e68-8628-3c81a99ba813
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
# Compiler Error C2333
'function' : error in function declaration; skipping function body  
  
 This error occurs after another error, for member functions defined inside their class.  
  
 The following sample generates C2333:  
  
```  
// C2333.cpp  
struct s1 {  
   s1(s1) {}   // C2333  
};  
```