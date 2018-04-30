---
title: "When Do I Need to Call AtlAxWinInit? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
f1_keywords: ["AtlAxWinInit"]
dev_langs: ["C++"]
helpviewer_keywords: ["AtlAxWinInit method"]
ms.assetid: 080b9cfe-d85a-4439-a9e9-ab3966ebaa8e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# When Do I Need to Call AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registers the **"AtlAxWin80"** window class (plus a couple of custom window messages) so this function must be called before you try to create a host window. However, you don't always need to call this function explicitly, since the hosting APIs (and the classes that use them) often call this function for you. There is no harm in calling this function more than once. .  
  
## See Also  
 When Do I Need to Call AtlAxWinTerm     
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)
