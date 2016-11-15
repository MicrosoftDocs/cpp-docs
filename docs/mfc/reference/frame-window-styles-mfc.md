---
title: "Frame-Window Styles (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FWS_ADDTOTITLE"
  - "FWS_SNAPTOBARS"
  - "FWS_PREFIXTITLE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "frame windows, styles"
  - "FWS_SNAPTOBARS constant"
  - "FWS_PREFIXTITLE constant"
  - "FWS_ADDTOTITLE constant"
  - "styles, windows"
ms.assetid: d21f270e-a088-4962-a2ae-8c03334b5a06
caps.latest.revision: 10
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
# Frame-Window Styles (MFC)
-   **FWS_ADDTOTITLE** Specifies information to append to the end of a frame window title. For example, "Microsoft Draw - Drawing in Document1". You can specify the strings displayed in the Document Template Strings tab in the Application Wizard. If you need to turn this option off, override the `CWnd::PreCreateWindow` member function.  
  
-   **FWS_PREFIXTITLE** Shows the document name before the application name in a frame window title. For example, "Document - WordPad". You can specify the strings displayed in the Document Template Strings tab in the Application Wizard. If you need to turn this option off, override the `CWnd::PreCreateWindow` member function.  
  
-   **FWS_SNAPTOBARS** Controls sizing of the frame window that encloses a control bar when it is in a floating window rather than docked to a frame window. This style sizes the window to fit the control bar.  
  
## See Also  
 [Styles Used by MFC](../../mfc/reference/styles-used-by-mfc.md)

