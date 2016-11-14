---
title: "Frame Window Classes (Windows) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.frame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "frame window classes, reference"
ms.assetid: 6342ec5f-f922-4da8-a78e-2f5f994c7142
caps.latest.revision: 9
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
# Frame Window Classes (Windows)
Frame windows are windows that frame an application or a part of an application. Frame windows usually contain other windows, such as views, tool bars, and status bars. In the case of `CMDIFrameWnd`, they may contain `CMDIChildWnd` objects indirectly.  
  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 The base class for an SDI application's main frame window. Also the base class for all other frame window classes.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 The base class for an MDI application's main frame window.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 The base class for an MDI application's document frame windows.  
  
 [CMiniFrameWnd](../mfc/reference/cminiframewnd-class.md)  
 A half-height frame window typically seen around floating toolbars.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Provides the frame window for a view when a server document is being edited in place.  
  
## Related Class  
 Class `CMenu` provides an interface through which to access your application's menus. It is useful for manipulating menus dynamically at run time; for example, when adding or deleting menu items according to context. Although menus are most often used with frame windows, they can also be used with dialog boxes and other nonchild windows.  
  
 [CMenu](../mfc/reference/cmenu-class.md)  
 Encapsulates an `HMENU` handle to the application's menu bar and pop-up menus.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

