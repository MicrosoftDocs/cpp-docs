---
title: "Compiler Warning (level 2) C4056"
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
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
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
# Compiler Warning (level 2) C4056
overflow in floating point constant arithmetic  
  
 Floating-point constant arithmetic generates a result that exceeds the maximum allowable value.  
  
 This warning can be caused by compiler optimizations performed during constant arithmetic. You can safely ignore this warning if it goes away when you turn off optimization ([/Od](../VS_visualcpp/-Od--Disable--Debug--.md)).  
  
 The following sample generates C4056:  
  
```  
// C4056.cpp  
// compile with: /W2 /LD  
#pragma warning (default : 4056)  
float fp_val = 1.0e300 * 1.0e300;   // C4056  
```