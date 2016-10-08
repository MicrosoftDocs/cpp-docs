---
title: "Fatal Error C1307"
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
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
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
# Fatal Error C1307
program has been edited since profile data was collected  
  
 When using [/LTCG:PGOPTIMIZE](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md), the linker detected an input module that was recompiled after /LTCG:PGINSTRUMENT and that the module was changed to the point where existing profile data is no longer relevant. For example, if the call graph changed in the recompiled module, the compiler will generate C1307.  
  
 To resolve this error, run /LTCG:PGINSTRUMENT, redo all test runs, and run /LTCG:PGOPTIMIZE. If you cannot run /LTCG:PGINSTRUMENT and redo all test runs, use /LTCG:PGUPDATE instead of /LTCG:PGOPTIMIZE to create the optimized image.