---
title: "Compiler Warning (level 3) C4723"
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
ms.assetid: 07669d14-3fd8-4a43-94bc-b61c50e58460
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
# Compiler Warning (level 3) C4723
potential divide by 0  
  
 The second operand in a divide operation evaluated to zero at compile time, giving undefined results.  
  
 This warning is issued only when using [/Og](../VS_visualcpp/-Og--Global-Optimizations-.md) or an optimization option that implies /Og.  
  
 The compiler may have generated the zero operand.