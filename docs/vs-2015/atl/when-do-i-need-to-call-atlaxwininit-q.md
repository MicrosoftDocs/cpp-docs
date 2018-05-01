---
title: "When Do I Need to Call AtlAxWinInit? | Microsoft Docs"
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
  - "AtlAxWinInit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AtlAxWinInit method"
ms.assetid: 080b9cfe-d85a-4439-a9e9-ab3966ebaa8e
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# When Do I Need to Call AtlAxWinInit?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [When Do I Need to Call AtlAxWinInit?](https://docs.microsoft.com/cpp/atl/when-do-i-need-to-call-atlaxwininit-q).  
  
  
AtlAxWinInit](../Topic/AtlAxWinInit.md) registers the **"AtlAxWin80"** window class (plus a couple of custom window messages) so this function must be called before you try to create a host window. However, you don't always need to call this function explicitly, since the hosting APIs (and the classes that use them) often call this function for you. There is no harm in calling this function more than once. .  
  
## See Also  
 When Do I Need to Call AtlAxWinTerm     
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)




