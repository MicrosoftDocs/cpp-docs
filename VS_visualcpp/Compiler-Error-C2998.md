---
title: "Compiler Error C2998"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 8193d491-b5d9-4477-acb1-cf166889c070
caps.latest.revision: 7
manager: douge
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
# Compiler Error C2998
'identifier' : cannot be a template definition  
  
 The compiler could not process the syntax used in the template definition.  
  
 The following sample generates C2998:  
  
```  
// C2998.cpp  
// compile with: /c  
template <class T> int x = 1018; // C2998  
```