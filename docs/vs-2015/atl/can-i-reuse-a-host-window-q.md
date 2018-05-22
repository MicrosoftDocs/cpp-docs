---
title: "Can I Reuse a Host Window? | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "host windows"
ms.assetid: bcd08ab1-cfcf-49e3-b4e8-ac134d141005
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Can I Reuse a Host Window?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Can I Reuse a Host Window?](https://docs.microsoft.com/cpp/atl/can-i-reuse-a-host-window-q).  
  
  
It is not recommended that you reuse host windows. To ensure the robustness of your code, you should tie the lifetime of your host window to the lifetime of a single control.  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)





