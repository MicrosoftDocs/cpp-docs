---
title: "Frame Window Classes (Architecture)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5da01fb4-f531-46cc-914f-e422e4f07f5d
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Frame Window Classes (Architecture)
In document/view architecture, frame windows are windows that contain a view window. They also support having control bars attached to them.  
  
 In multiple document interface (MDI) applications, the main window is derived from `CMDIFrameWnd`. It indirectly contains the documents' frames, which are `CMDIChildWnd` objects. The `CMDIChildWnd` objects, in turn, contain the documents' views.  
  
 In single document interface (SDI) applications, the main window, derived from `CFrameWnd`, contains the view of the current document.  
  
 [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md)  
 The base class for an SDI application's main frame window. Also the base class for all other frame window classes.  
  
 [CMDIFrameWnd](../VS_visualcpp/CMDIFrameWnd-Class.md)  
 The base class for an MDI application's main frame window.  
  
 [CMDIChildWnd](../VS_visualcpp/CMDIChildWnd-Class.md)  
 The base class for an MDI application's document frame windows.  
  
 [COleIPFrameWnd](../VS_visualcpp/COleIPFrameWnd-Class.md)  
 Provides the frame window for a view when a server document is being edited in place.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)