---
title: "Frame Window Classes (Windows)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.frame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "frame window classes, reference"
ms.assetid: 6342ec5f-f922-4da8-a78e-2f5f994c7142
caps.latest.revision: 7
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
  
 [CFrameWnd](../mfcref/cframewnd-class.md)  
 The base class for an SDI application's main frame window. Also the base class for all other frame window classes.  
  
 [CMDIFrameWnd](../mfcref/cmdiframewnd-class.md)  
 The base class for an MDI application's main frame window.  
  
 [CMDIChildWnd](../mfcref/cmdichildwnd-class.md)  
 The base class for an MDI application's document frame windows.  
  
 [CMiniFrameWnd](../mfcref/cminiframewnd-class.md)  
 A half-height frame window typically seen around floating toolbars.  
  
 [COleIPFrameWnd](../mfcref/coleipframewnd-class.md)  
 Provides the frame window for a view when a server document is being edited in place.  
  
## Related Class  
 Class `CMenu` provides an interface through which to access your application's menus. It is useful for manipulating menus dynamically at run time; for example, when adding or deleting menu items according to context. Although menus are most often used with frame windows, they can also be used with dialog boxes and other nonchild windows.  
  
 [CMenu](../mfcref/cmenu-class.md)  
 Encapsulates an `HMENU` handle to the application's menu bar and pop-up menus.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)