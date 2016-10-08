---
title: "Frame Windows"
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
ms.assetid: 40677339-8135-4f5e-aba6-3fced3078077
caps.latest.revision: 9
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
# Frame Windows
When an application runs under Windows, the user interacts with documents displayed in frame windows. A document frame window has two major components: the frame and the contents that it frames. A document frame window can be a [single document interface](../VS_visualcpp/SDI-and-MDI.md) (SDI) frame window or a [multiple document interface](../VS_visualcpp/SDI-and-MDI.md) (MDI) child window. Windows manages most of the user's interaction with the frame window: moving and resizing the window, closing it, and minimizing and maximizing it. You manage the contents inside the frame.  
  
## Frame Windows and Views  
 The MFC framework uses frame windows to contain views. The two components — frame and contents — are represented and managed by two different classes in MFC. A frame-window class manages the frame, and a view class manages the contents. The view window is a child of the frame window. Drawing and other user interaction with the document take place in the view's client area, not the frame window's client area. The frame window provides a visible frame around a view, complete with a caption bar and standard window controls such as a control menu, buttons to minimize and maximize the window, and controls for resizing the window. The "contents" consist of the window's client area, which is fully occupied by a child window — the view. The following figure shows the relationship between a frame window and a view.  
  
 ![Frame window view](../VS_visualcpp/media/vc37FX1.gif "vc37FX1")  
Frame Window and View  
  
## Frame Windows and Splitter Windows  
 Another common arrangement is for the frame window to frame multiple views, usually using a [splitter window](../VS_visualcpp/Multiple-Document-Types--Views--and-Frame-Windows.md). In a splitter window, the frame window's client area is occupied by a splitter window, which in turn has multiple child windows, called panes, which are views.  
  
### What do you want to know more about?  
 **General Frame Window Topics**  
  
-   [Window objects](../VS_visualcpp/Window-Objects.md)  
  
-   [Frame window classes](../VS_visualcpp/Frame-Window-Classes.md)  
  
-   [The Frame-Window classes created by the Application Wizard](../VS_visualcpp/Frame-Window-Classes-Created-by-the-Application-Wizard.md)  
  
-   [Frame window styles](../VS_visualcpp/Frame-Window-Styles--C---.md)  
  
-   [What frame windows do](../VS_visualcpp/What-Frame-Windows-Do.md)  
  
 **Topics on Using Frame Windows**  
  
-   [Using frame windows](../VS_visualcpp/Using-Frame-Windows.md)  
  
-   [Creating document frame windows](../VS_visualcpp/Creating-Document-Frame-Windows.md)  
  
-   [Destroying frame windows](../VS_visualcpp/Destroying-Frame-Windows.md)  
  
-   [Managing MDI child windows](../VS_visualcpp/Managing-MDI-Child-Windows.md)  
  
-   [Managing the current view](../VS_visualcpp/Managing-the-Current-View.md) in a frame window that contains more than one view  
  
-   [Managing menus, control bars, and accelerators (other objects that share the frame window's space)](../VS_visualcpp/Managing-Menus--Control-Bars--and-Accelerators.md)  
  
 **Topics on Special Frame Window Capabilities**  
  
-   [Dragging and dropping files](../VS_visualcpp/Dragging-and-Dropping-Files-in-a-Frame-Window.md) from File Explorer or File Manager into a frame window  
  
-   [Responding to dynamic data exchange (DDE)](../VS_visualcpp/Responding-to-Dynamic-Data-Exchange--DDE-.md)  
  
-   [Semimodal states: Context-sensitive Windows Help (Orchestrating other window actions)](../VS_visualcpp/Orchestrating-Other-Window-Actions.md)  
  
-   [Semimodal states: printing and print preview (Orchestrating other window actions)](../VS_visualcpp/Orchestrating-Other-Window-Actions.md)  
  
 **Topics on Other Kinds of Windows**  
  
-   [Using Views](../VS_visualcpp/Using-Views.md)  
  
-   [Dialog boxes](../VS_visualcpp/Dialog-Boxes.md)  
  
-   [Controls](../VS_visualcpp/Controls--MFC-.md)  
  
## See Also  
 [Windows](../VS_visualcpp/Windows.md)