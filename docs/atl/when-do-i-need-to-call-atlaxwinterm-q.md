---
title: "When Do I Need to Call AtlAxWinTerm? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
f1_keywords: ["AtlAxWinTerm"]
dev_langs: ["C++"]
helpviewer_keywords: ["AtlAxWinTerm method"]
ms.assetid: 0088d494-2d8d-45b4-b582-2af726bd6cbd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# When Do I Need to Call AtlAxWinTerm?
[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) unregisters the **"AtlAxWin80"** window class. You should call this function (if you no longer need to create host windows) after all existing host windows have been destroyed. If you don't call this function, the window class will be unregistered automatically when the process terminates.  
  
## See Also  
 When Do I Need to Call AtlAxWinInit  
[Control Containment FAQ](../atl/atl-control-containment-faq.md)

