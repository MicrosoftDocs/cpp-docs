---
title: "Compiler Error C3199"
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
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
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
# Compiler Error C3199
invalid use of floating-point pragmas: exceptions are not supported in non-precise mode  
  
 The [float_control](../VS_visualcpp/float_control.md) pragma was used to specify floating-point exception model under an [/fp](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) setting other than **/fp:precise**.  
  
 The following sample generates C3199:  
  
```  
// C3199.cpp  
// compile with: /fp:fast  
#pragma float_control(except, on)   // C3199  
```