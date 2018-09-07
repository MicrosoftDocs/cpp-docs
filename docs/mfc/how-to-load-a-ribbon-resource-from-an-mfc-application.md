---
title: "How to: Load a Ribbon Resource from an MFC Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["ribbon resource [MFC], loading"]
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# How to: Load a Ribbon Resource from an MFC Application
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

