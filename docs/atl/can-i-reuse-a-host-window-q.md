---
title: "Can I Reuse a Host Window? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Can I Reuse a Host Window?
It is not recommended that you reuse host windows. To ensure the robustness of your code, you should tie the lifetime of your host window to the lifetime of a single control.  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)

