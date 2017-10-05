---
title: "Can I Reuse a Host Window? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["host windows"]
ms.assetid: bcd08ab1-cfcf-49e3-b4e8-ac134d141005
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Can I Reuse a Host Window?
It is not recommended that you reuse host windows. To ensure the robustness of your code, you should tie the lifetime of your host window to the lifetime of a single control.  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)

