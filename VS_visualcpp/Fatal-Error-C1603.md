---
title: "Fatal Error C1603"
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
ms.assetid: e5a06925-f916-4637-8240-6d2d280e6124
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
# Fatal Error C1603
inline assembly branch target out of range by 'number' bytes  
  
 The computed distance between a JCXZ or JECXZ instruction and its specified target label was greater than 128 bytes. Update your code so that the label is closer to the instruction.