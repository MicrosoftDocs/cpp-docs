---
title: "When Do I Need to Call AtlAxWinTerm?"
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
ms.topic: article
ms.assetid: 0088d494-2d8d-45b4-b582-2af726bd6cbd
caps.latest.revision: 9
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
# When Do I Need to Call AtlAxWinTerm?
[AtlAxWinTerm](../Topic/AtlAxWinTerm.md) unregisters the **"AtlAxWin80"** window class. You should call this function (if you no longer need to create host windows) after all existing host windows have been destroyed. If you don't call this function, the window class will be unregistered automatically when the process terminates.  
  
## See Also  
 [When Do I Need to Call AtlAxWinInit?](../VS_visualcpp/When-Do-I-Need-to-Call-AtlAxWinInit-.md)   
 [Control Containment FAQ](../VS_visualcpp/ATL-Control-Containment-FAQ.md)