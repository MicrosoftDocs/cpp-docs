---
title: "Providing Windowless Activation"
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
ms.assetid: 094903b5-c344-42fa-96ff-ce01e16891c5
caps.latest.revision: 8
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
# Providing Windowless Activation
Window creation code (that is, everything that happens when you call **CreateWindow**) is costly to execute. A control that maintains an on-screen window has to manage messages for the window. Windowless controls are therefore faster than controls with windows.  
  
 A further advantage of windowless controls is that, unlike windowed controls, windowless controls support transparent painting and nonrectangular screen regions. A common example of a transparent control is a text control with a transparent background. The controls paints the text but not the background, so whatever is under the text shows through. Newer forms often make use of nonrectangular controls, such as arrows and round buttons.  
  
 Often, a control does not need a window of its own and, instead, can use the window services of its container, provided that the container has been written to support windowless objects. Windowless controls are backward compatible with older containers. In older containers not written to support windowless controls, the windowless controls create a window when active.  
  
 Because windowless controls do not have their own windows, the container (which does have a window) is responsible for providing services that would otherwise have been provided by the control's own window. For example, if your control needs to query the keyboard focus, capture the mouse, or obtain a device context, these operations are managed by the container. The container routes user input messages sent to its window to the appropriate windowless control, using the `IOleInPlaceObjectWindowless` interface. (See the *ActiveX SDK* for a description of this interface.) `COleControl` member functions invoke these services from the container.  
  
 To make your control use windowless activation, include the **windowlessActivate** flag in the set of flags returned by [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md). For example:  
  
 [!CODE [NVC_MFC_AxOpt#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#5)]  
[!CODE [NVC_MFC_AxOpt#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#6)]  
[!CODE [NVC_MFC_AxOpt#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#7)]  
  
 The code to include this flag is automatically generated if you select the **Windowless activation** option on the [Control Settings](../VS_visualcpp/Control-Settings--MFC-ActiveX-Control-Wizard.md) page of the MFC ActiveX Control Wizard.  
  
 When windowless activation is enabled, the container will delegate input messages to the control's `IOleInPlaceObjectWindowless` interface. `COleControl`'s implementation of this interface dispatches the messages through your control's message map, after adjusting the mouse coordinates appropriately. You can process the messages like ordinary window messages, by adding the corresponding entries to the message map. In your handlers for these messages, avoid using the `m_hWnd` member variable (or any member function that uses it) without first checking that its value is not **NULL**.  
  
 `COleControl` provides member functions that invoke mouse capture, keyboard focus, scrolling, and other window services from the container as appropriate, including:  
  
-   [GetFocus](../Topic/COleControl::GetFocus.md), [SetFocus](../Topic/COleControl::SetFocus.md)  
  
-   [GetCapture](../Topic/COleControl::GetCapture.md), [SetCapture](../Topic/COleControl::SetCapture.md), [ReleaseCapture](../Topic/COleControl::ReleaseCapture.md)  
  
-   [GetDC](../Topic/COleControl::GetDC.md), [ReleaseDC](../Topic/COleControl::ReleaseDC.md)  
  
-   [InvalidateRgn](../Topic/COleControl::InvalidateRgn.md)  
  
-   [ScrollWindow](../Topic/COleControl::ScrollWindow.md)  
  
-   [GetClientRect](../Topic/COleControl::GetClientRect.md)  
  
 In windowless controls, you should always use the `COleControl` member functions instead of the corresponding `CWnd` member functions or their related Win32 API functions.  
  
 You may want a windowless control to be the target of an OLE drag-and-drop operation. Normally, this would require that the control's window be registered as a drop target. Since the control has no window of its own, the container uses its own window as a drop target. The control provides an implementation of the `IDropTarget` interface to which the container can delegate calls at the appropriate time. To expose this interface to the container, override [COleControl::GetWindowlessDropTarget](../Topic/COleControl::GetWindowlessDropTarget.md). For example:  
  
 [!CODE [NVC_MFC_AxOpt#8](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#8)]  
  
## See Also  
 [MFC ActiveX Controls: Optimization](../VS_visualcpp/MFC-ActiveX-Controls--Optimization.md)