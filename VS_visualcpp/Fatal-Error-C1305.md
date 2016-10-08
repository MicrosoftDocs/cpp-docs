---
title: "Fatal Error C1305"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
caps.latest.revision: 10
manager: ghogen
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
# Fatal Error C1305
profile database 'pgd_file' is for a different architecture  
  
 A .pgd file that was generated from the /LTCG:PGINSTRUMENT operation for another platform was passed to [/LTCG:PGOPTIMIZE](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md) . [Profile-guided optimizations](../VS_visualcpp/Profile-Guided-Optimizations.md) are available for x86 and x64 platforms. However, a .pgd file generated with a /LTCG:PGINSTRUMENT operation for one platform is not valid as input to a /LTCG:PGOPTIMIZE for a different platform.  
  
 To resolve this error, only pass a .pgd file that is created with /LTCG:PGINSTRUMENT to /LTCG:PGOPTIMIZE on the same platform.