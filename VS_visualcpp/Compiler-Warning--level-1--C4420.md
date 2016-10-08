---
title: "Compiler Warning (level 1) C4420"
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
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
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
# Compiler Warning (level 1) C4420
'operator' : operator not available, using 'operator' instead; run-time checking may be compromised  
  
 This warning is generated when you use the [/RTCv](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md) (vector new/delete checking) and when no vector form is found. In this case, the non-vector form is used.  
  
 In order for /RTCv to work correctly, the compiler should always call the vector form of [new](../VS_visualcpp/new-Operator--C---.md)/[delete](../VS_visualcpp/delete-Operator--C---.md) if the vector syntax was used.