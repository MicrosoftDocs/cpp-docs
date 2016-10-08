---
title: "Compiler Error C2480"
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
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
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
# Compiler Error C2480
'identifier' : 'thread' is only valid for data items of static extent  
  
 You cannot use the `thread` attribute with an automatic variable, nonstatic data member, function parameter, or on function declarations or definitions.  
  
 Use the `thread` attribute for global variables, static data members, and local static variables only.  
  
 The following sample generates C2480:  
  
```  
// C2480.cpp  
// compile with: /c  
__declspec( thread ) void func();   // C2480  
__declspec( thread ) static int i;   // OK  
```