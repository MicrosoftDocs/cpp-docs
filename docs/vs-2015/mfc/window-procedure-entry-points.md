---
title: "Window Procedure Entry Points | Microsoft Docs"
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
  - "state management, window procedures"
  - "MFC, managing state data"
  - "window procedure entry points"
  - "entry points, window procedures"
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Window Procedure Entry Points
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Window Procedure Entry Points](https://docs.microsoft.com/cpp/mfc/window-procedure-entry-points).  
  
  
To protect MFC window procedures, a module static links with a special window procedure implementation. The linkage occurs automatically when the module is linked with MFC. This window procedure uses the `AFX_MANAGE_STATE` macro to properly set the effective module state, then it calls **AfxWndProc**, which in turn delegates to the `WindowProc` member function of the appropriate `CWnd`-derived object.  
  
## See Also  
 [Managing the State Data of MFC Modules](../mfc/managing-the-state-data-of-mfc-modules.md)





