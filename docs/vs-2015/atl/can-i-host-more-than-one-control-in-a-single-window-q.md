---
title: "Can I Host More Than One Control in a Single Window? | Microsoft Docs"
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
  - "controls [ATL], hosting multiple"
  - "windows [C++], hosting multiple controls"
ms.assetid: 3a967a1a-7e7e-42e3-8eed-f7bde912363f
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Can I Host More Than One Control in a Single Window?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Can I Host More Than One Control in a Single Window?](https://docs.microsoft.com/cpp/atl/can-i-host-more-than-one-control-in-a-single-window-q).  
  
  
It is not possible to host more than one control in a single ATL host window. Each host window is designed to hold exactly one control at a time (this allows for a simple mechanism for handling message reflection and per-control ambient properties). However, if you need the user to see multiple controls in a single window, it's a simple matter to create multiple host windows as children of that window.  
  
## See Also  
 [Control Containment FAQ](../atl/atl-control-containment-faq.md)





