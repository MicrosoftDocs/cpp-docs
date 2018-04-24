---
title: "When Do I Need to Call AtlAxWinTerm? | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AtlAxWinTerm"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AtlAxWinTerm method"
ms.assetid: 0088d494-2d8d-45b4-b582-2af726bd6cbd
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# When Do I Need to Call AtlAxWinTerm?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [When Do I Need to Call AtlAxWinTerm?](https://docs.microsoft.com/cpp/atl/when-do-i-need-to-call-atlaxwinterm-q).  
  
  
AtlAxWinTerm](../Topic/AtlAxWinTerm.md) unregisters the **"AtlAxWin80"** window class. You should call this function (if you no longer need to create host windows) after all existing host windows have been destroyed. If you don't call this function, the window class will be unregistered automatically when the process terminates.  
  
## See Also  
 When Do I Need to Call AtlAxWinInit  
[Control Containment FAQ](../atl/atl-control-containment-faq.md)





