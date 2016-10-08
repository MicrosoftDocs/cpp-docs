---
title: "Resource Compiler Error RC2151"
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
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
caps.latest.revision: 6
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
# Resource Compiler Error RC2151
cannot re-use string constants  
  
 You are using the same value twice in a **STRINGTABLE** statement. Make sure you are not mixing overlapping decimal and hexadecimal values.  
  
 Each ID in a **STRINGTABLE** must be unique. For maximum efficiency use contiguous constants that start on a multiple of 16.