---
title: "Frame Window Classes (Architecture)"
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
  - "frame window classes, document/view architecture"
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
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
# Frame Window Classes (Architecture)
In document/view architecture, frame windows are windows that contain a view window. They also support having control bars attached to them.  
  
 In multiple document interface (MDI) applications, the main window is derived from `CMDIFrameWnd`. It indirectly contains the documents' frames, which are `CMDIChildWnd` objects. The `CMDIChildWnd` objects, in turn, contain the documents' views.  
  
 In single document interface (SDI) applications, the main window, derived from `CFrameWnd`, contains the view of the current document.  
  
 [CFrameWnd](../mfcref/cframewnd-class.md)  
 The base class for an SDI application's main frame window. Also the base class for all other frame window classes.  
  
 [CMDIFrameWnd](../mfcref/cmdiframewnd-class.md)  
 The base class for an MDI application's main frame window.  
  
 [CMDIChildWnd](../mfcref/cmdichildwnd-class.md)  
 The base class for an MDI application's document frame windows.  
  
 [COleIPFrameWnd](../mfcref/coleipframewnd-class.md)  
 Provides the frame window for a view when a server document is being edited in place.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)