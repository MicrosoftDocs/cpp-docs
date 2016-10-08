---
title: "Compiler Warning (level 1) C4048"
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
ms.assetid: 8429f513-4732-40f1-8e56-4c224e723bcb
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
# Compiler Warning (level 1) C4048
different declared array subscripts : 'identifier1' and 'identifier2'  
  
 An expression involves pointers to arrays of different size. The pointers are used without conversion.  
  
 This warning may be fixed if you explicitly cast the arrays to the same or equivalent type.