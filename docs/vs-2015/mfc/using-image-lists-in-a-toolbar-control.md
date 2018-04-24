---
title: "Using Image Lists in a Toolbar Control | Microsoft Docs"
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
  - "toolbar controls [MFC], image"
  - "image lists [C++], toolbar controls"
  - "CToolBarCtrl class, image lists"
ms.assetid: ccbe8df4-4ed9-4b54-bb93-9a1dcb3b97eb
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using Image Lists in a Toolbar Control
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using Image Lists in a Toolbar Control](https://docs.microsoft.com/cpp/mfc/using-image-lists-in-a-toolbar-control).  
  
  
By default, the images used by the buttons in a toolbar control are stored as a single bitmap. However, you can also store button images in a set of image lists. The toolbar control object can use up to three separate image lists:  
  
-   Enabled image list   Contains images for toolbar buttons that are currently enabled.  
  
-   Disabled image list   Contains images for toolbar buttons that are currently disabled.  
  
-   Highlighted image list   Contains images for toolbar buttons that are currently highlighted. This image list is used only when the toolbar uses the **TBSTYLE_FLAT** style.  
  
 These image lists are used by the toolbar control when you associate them with the `CToolBarCtrl` object. This association is accomplished by making calls to [CToolBarCtrl::SetImageList](../mfc/reference/ctoolbarctrl-class.md#ctoolbarctrl__setimagelist), [SetDisabledImageList](../mfc/reference/ctoolbarctrl-class.md#setdisabledimagelist), and [SetHotImageList](../mfc/reference/ctoolbarctrl-class.md#sethotimagelist).  
  
 By default, MFC uses the `CToolBar` class to implement MFC application toolbars. However, the `GetToolBarCtrl` member function can be used to retrieve the embedded `CToolBarCtrl` object. You can then make calls to `CToolBarCtrl` member functions using the returned object.  
  
 The following example demonstrates this technique by assigning an enabled (`m_ToolBarImages`) and disabled (`m_ToolBarDisabledImages`) image list to a `CToolBarCtrl` object (`m_ToolBarCtrl`).  
  
 [!code-cpp[NVC_MFCControlLadenDialog#35](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#35)]  
  
> [!NOTE]
>  The image lists used by the toolbar object must be permanent objects. For this reason, they are commonly data members of an MFC class; in this example, the main frame window class.  
  
 Once the image lists are associated with the `CToolBarCtrl` object, the framework automatically displays the proper button image.  
  
## See Also  
 [Using CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)





