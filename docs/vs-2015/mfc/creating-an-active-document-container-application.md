---
title: "Creating an Active Document Container Application | Microsoft Docs"
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
  - "active documents [C++], containers"
  - "containers [C++], active document"
  - "active document containers [C++], creating"
  - "MFC COM [C++], active document containment"
  - "applications [MFC], active document container"
ms.assetid: 14e2d022-a6c5-4249-8712-706b0f4433f7
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating an Active Document Container Application
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating an Active Document Container Application](https://docs.microsoft.com/cpp/mfc/creating-an-active-document-container-application).  
  
  
The simplest and most recommended way to create an active document container application is to create an MFC EXE container application using the MFC Application Wizard, then modify the application to support active document containment.  
  
#### To create an active document container application  
  
1.  From the **File** menu, click **Project**from the **New** submenu.  
  
2.  From the left pane, click **Visual C++** project type.  
  
3.  Select **MFC Application** from the right pane.  
  
4.  Name the project `MyProj`, click **OK**.  
  
5.  Select the **Compound Document Support** page.  
  
6.  Select the **Container** or **Container/Full-server** option.  
  
7.  Select the **Active document container** check box.  
  
8.  Click **Finish**.  
  
9. When the MFC Application Wizard finishes generating the application, open the following files using Solution Explorer:  
  
    -   MyProjview.cpp  
  
10. In MyProjview.cpp, make the following changes:  
  
    -   In `CMyProjView::OnPreparePrinting`, replace the function contents with the following code:  
  
         [!code-cpp[NVC_MFCDocView#56](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDocView/Cpp/MyView.cpp#56)]  
  
     `OnPreparePrinting` provides printing support. This code replaces `DoPreparePrinting`, which is the default print preparation.  
  
     Active document containment provides an improved printing scheme:  
  
    -   You can first call the active document through its `IPrint`interface and tell it to print itself. This is different from previous OLE containment, in which the container had to render an image of the contained item onto the printer `CDC`object.  
  
    -   If that fails, tell the contained item to print itself through its `IOleCommandTarget`interface  
  
    -   If that fails, make your own rendering of the item.  
  
     The static member functions `COleDocObjectItem::OnPrint` and `COleDocObjectItem::OnPreparePrinting`, as implemented in the previous code, handle this improved printing scheme.  
  
11. Add any implementation of your own and build the application.  
  
## See Also  
 [Active Document Containment](../mfc/active-document-containment.md)





