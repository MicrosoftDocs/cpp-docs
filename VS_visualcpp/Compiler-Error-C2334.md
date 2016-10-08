---
title: "Compiler Error C2334"
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
ms.assetid: 36142855-e00b-4bbf-80f5-a301edeff46e
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
# Compiler Error C2334
unexpected token(s) preceding ': or {'; skipping apparent function body  
  
 The following sample generates C2334. This error occurs after error C2059:  
  
```  
// C2334.cpp  
// compile with: /c  
// C2059 expected  
struct s1 {  
   s1   {}   // C2334  
   s1() {}   // OK  
};  
```