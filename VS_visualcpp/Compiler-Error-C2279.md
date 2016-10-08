---
title: "Compiler Error C2279"
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
ms.assetid: 1b5c88ef-2336-49b8-9ddb-d61f97c73e14
caps.latest.revision: 11
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
# Compiler Error C2279
exception specification cannot appear in a typedef declaration  
  
 Under **/Za**, [exception specifications](../VS_visualcpp/Exception-Specifications--throw---C---.md) are not allowed in a typedef declaration.  
  
 The following sample generates C2279:  
  
```  
// C2279.cpp  
// compile with: /Za /c  
typedef int (*xy)() throw(...);   // C2279  
typedef int (*xyz)();   // OK  
```