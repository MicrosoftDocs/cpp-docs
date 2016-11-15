---
title: "Methods of Creating a Toolbar | Microsoft Docs"
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
  - "CToolBarCtrl class, and CToolBar class"
  - "CToolBar class, creating toolbars"
  - "MFC toolbars"
  - "toolbar controls [MFC]"
  - "toolbar controls [MFC], creating"
  - "CToolBarCtrl class, creating toolbars"
ms.assetid: f19d8d65-d49f-445c-abe8-d47d3e4101c8
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
# Methods of Creating a Toolbar
MFC provides two classes to create toolbars: [CToolBar](../mfc/reference/ctoolbar-class.md) and [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) (which wraps the Windows common control API). `CToolBar` provides all of the functionality of the toolbar common control, and it handles many of the required common control settings and structures for you; however, your resulting executable usually will be larger than that created by using `CToolBarCtrl`.  
  
 `CToolBarCtrl` usually results in a smaller executable, and you may prefer to use `CToolBarCtrl` if you do not intend to integrate the toolbar into the MFC architecture. If you plan to use `CToolBarCtrl` and integrate the toolbar into the MFC architecture, you must take additional care to communicate toolbar control manipulations to MFC. This communication is not difficult; however, it is additional work that is unneeded when you use `CToolBar`.  
  
 Visual C++ provides two ways to take advantage of the toolbar common control.  
  
-   Create the toolbar using `CToolBar`, and then call [CToolBar::GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#ctoolbar__gettoolbarctrl) to get access to the `CToolBarCtrl` member functions.  
  
-   Create the toolbar using [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)'s constructor.  
  
 Either method will give you access to the member functions of the toolbar control. When you call `CToolBar::GetToolBarCtrl`, it returns a reference to a `CToolBarCtrl` object so you can use either set of member functions. See [CToolBar](../mfc/reference/ctoolbar-class.md) for information on constructing and creating a toolbar using `CToolBar`.  
  
## See Also  
 [Using CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

