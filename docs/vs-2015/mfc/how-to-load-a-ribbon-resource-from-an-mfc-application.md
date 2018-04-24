---
title: "How to: Load a Ribbon Resource from an MFC Application | Microsoft Docs"
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
  - "ribbon resource, loading"
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Load a Ribbon Resource from an MFC Application
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Load a Ribbon Resource from an MFC Application](https://docs.microsoft.com/cpp/mfc/how-to-load-a-ribbon-resource-from-an-mfc-application).  
  
  
To use the ribbon resource in your application, modify the application to load the ribbon resource.  
  
### To load a ribbon resource  
  
1.  Declare the `Ribbon Control` object in the `CMainFrame` class.  
  
 ```  
    CMFCRibbonBar m_wndRibbonBar;   
 ```  
  
2.  In `CMainFrame::OnCreate`, create and initialize the Ribbon Control.  
  
 ```  
    if (!m_wndRibbonBar.Create (this))  
 {  
    return -1;  
 }  
 
    if (!m_wndRibbonBar.LoadFromResource(IDR_RIBBON))  
 {  
    return -1;  
 }  
 ```  
  
## See Also  
 [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md)





