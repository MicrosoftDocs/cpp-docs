---
title: "Methods of Creating a Status Bar | Microsoft Docs"
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
  - "CStatusBar class, vs. CStatusBarCtrl"
  - "methods [MFC], creating status bars"
  - "CStatusBarCtrl class, vs. CStatusBar"
  - "CStatusBarCtrl class, creating"
  - "methods [MFC]"
  - "status bars, creating"
ms.assetid: 9aeaf290-7099-4762-a5ba-9c26705333c9
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
# Methods of Creating a Status Bar
MFC provides two classes to create status bars: [CStatusBar](../mfc/reference/cstatusbar-class.md) and [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) (which wraps the Windows common control API). `CStatusBar` provides all of the functionality of the status bar common control, it automatically interacts with menus and toolbars, and it handles many of the required common control settings and structures for you; however, your resulting executable usually will be larger than that created by using `CStatusBarCtrl`.  
  
 `CStatusBarCtrl` usually results in a smaller executable, and you may prefer to use `CStatusBarCtrl` if you do not intend to integrate the status bar into the MFC architecture. If you plan to use `CStatusBarCtrl` and integrate the status bar into the MFC architecture, you must take additional care to communicate status bar control manipulations to MFC. This communication is not difficult; however, it is additional work that is unneeded when you use `CStatusBar`.  
  
 Visual C++ provides two ways to take advantage of the status bar common control.  
  
-   Create the status bar using `CStatusBar`, and then call [CStatusBar::GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#cstatusbar__getstatusbarctrl) to get access to the `CStatusBarCtrl` member functions.  
  
-   Create the status bar using [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)'s constructor.  
  
 Either method will give you access to the member functions of the status bar control. When you call `CStatusBar::GetStatusBarCtrl`, it returns a reference to a `CStatusBarCtrl` object so you can use either set of member functions. See [CStatusBar](../mfc/reference/cstatusbar-class.md) for information on constructing and creating a status bar using `CStatusBar`.  
  
## See Also  
 [Using CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

