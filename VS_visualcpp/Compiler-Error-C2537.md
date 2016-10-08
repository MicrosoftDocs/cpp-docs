---
title: "Compiler Error C2537"
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
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
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
# Compiler Error C2537
'specifier' : illegal linkage specification  
  
 Possible causes:  
  
1.  The linkage specifier is not supported. Only the "C" linkage specifier is supported.  
  
2.  "C" linkage is specified for more than one function in a set of overloaded functions. This is not allowed.  
  
 The following sample generates C2537:  
  
```  
// C2537.cpp  
// compile with: /c  
extern "c" void func();   // C2537  
extern "C" void func2();   // OK  
```