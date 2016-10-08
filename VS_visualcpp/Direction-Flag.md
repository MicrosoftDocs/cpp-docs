---
title: "Direction Flag"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0836b4af-dbbb-4ab8-a4b2-156f2e2099e2
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
# Direction Flag
The direction flag is a CPU flag specific to Intel 80x86 processors. It applies to all assembly instructions that use the REP (repeat) prefix, such as MOVS, MOVSD, MOVSW, and others. Addresses provided to applicable instructions are increased if the direction flag is cleared.  
  
 The C run-time routines assume that the direction flag is cleared. If you are using other functions with the C run-time functions, you must ensure that the other functions leave the direction flag alone or restore it to its original condition. Expecting the direction flag to be clear upon entry makes the run-time code faster and more efficient.  
  
 The C Run-Time library functions, such as the string-manipulation and buffer-manipulation routines, expect the direction flag to be clear.  
  
## See Also  
 [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md)