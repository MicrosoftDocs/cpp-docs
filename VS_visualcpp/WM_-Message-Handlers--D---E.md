---
title: "WM_ Message Handlers: D - E"
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
ms.assetid: 56fb89c8-68a8-4adf-883e-a9f63bf677e9
caps.latest.revision: 13
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
# WM_ Message Handlers: D - E
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_DEADCHAR()|afx_msg void [OnDeadChar](../Topic/CWnd::OnDeadChar.md)(UINT, UINT, UINT);|  
|ON_WM_DELETEITEM()|afx_msg void [OnDeleteItem](../Topic/CWnd::OnDeleteItem.md)(LPDELETEITEMSTRUCT);|  
|ON_WM_DESTROY()|afx_msg void [OnDestroy](../Topic/CWnd::OnDestroy.md)();|  
|ON_WM_DESTROYCLIPBOARD()|afx_msg void [OnDestroyClipboard](../Topic/CWnd::OnDestroyClipboard.md)();|  
|ON_WM_DEVICECHANGE()|afx_msg void [OnDeviceChange](../Topic/CWnd::OnDeviceChange.md)(UINT, DWORD);|  
|ON_WM_DEVMODECHANGE()|afx_msg void [OnDevModeChange](../Topic/CWnd::OnDevModeChange.md)(LPSTR);|  
|ON_WM_DRAWCLIPBOARD()|afx_msg void [OnDrawClipboard](../Topic/CWnd::OnDrawClipboard.md)();|  
|ON_WM_DRAWITEM()|afx_msg void [OnDrawItem](../Topic/CWnd::OnDrawItem.md)(LPDRAWITEMSTRUCT);|  
|ON_WM_DROPFILES()|afx_msg void [OnDropFiles](../Topic/CWnd::OnDropFiles.md)(HDROP);|  
|ON_WM_DWMCOLORIZATIONCOLORCHANGED()|afx_msg void [OnColorizationColorChanged](../Topic/CWnd::OnColorizationColorChanged.md)(DWORD, BOOL);|  
|ON_WM_DWMCOMPOSITIONCHANGED()|afx_msg void [OnCompositionChanged](../Topic/CWnd::OnCompositionChanged.md)();|  
|ON_WM_DWMNCRENDERINGCHANGED()|afx_msg void [OnNcRenderingChanged](../Topic/CWnd::OnNcRenderingChanged.md)(BOOL);|  
|ON_WM_DWMWINDOWMAXIMIZEDCHANGE()|afx_msg void [OnWindowMaximizedChanged](../Topic/CWnd::OnWindowMaximizedChanged.md)(BOOL);|  
|ON_WM_ENABLE()|afx_msg void [OnEnable](../Topic/CWnd::OnEnable.md)(BOOL);|  
|ON_WM_ENDSESSION()|afx_msg void [OnEndSession](../Topic/CWnd::OnEndSession.md)(BOOL);|  
|ON_WM_ENTERIDLE()|afx_msg void [OnEnterIdle](../Topic/CWnd::OnEnterIdle.md)(UINT, CWnd*);|  
|ON_WM_ENTERSIZEMOVE()|afx_msg void [OnEnterSizeMove](../Topic/CWnd::OnEnterSizeMove.md)();|  
|ON_WM_ERASEBKGND()|afx_msg BOOL [OnEraseBkgnd](../Topic/CWnd::OnEraseBkgnd.md)(CDC*);|  
|ON_WM_EXITSIZEMOVE()|afx_msg void [OnExitSizeMove](../Topic/CWnd::OnExitSizeMove.md)();|  
  
## See Also  
 [Message Maps](../VS_visualcpp/Message-Maps--MFC-.md)   
 [Handlers for WM_ Messages](../VS_visualcpp/Handlers-for-WM_-Messages.md)