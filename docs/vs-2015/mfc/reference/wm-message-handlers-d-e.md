---
title: "WM_ Message Handlers: D - E | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_ERASEBKGND"
  - "ON_WM_DEVICECHANGE"
  - "ON_WM_ENTERIDLE"
  - "ON_WM_DESTROYCLIPBOARD"
  - "ON_WM_DESTROY"
  - "ON_WM_DEADCHAR"
  - "ON_WM_DELETEITEM"
  - "ON_WM_DROPFILES"
  - "ON_WM_DEVMODECHANGE"
  - "ON_WM_ENDSESSION"
  - "ON_WM_ENABLE"
  - "ON_WM_DRAWITEM"
  - "ON_WM_DRAWCLIPBOARD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_ENTERIDLE"
  - "ON_WM_DESTROYCLIPBOARD"
  - "ON_WM_DEADCHAR"
  - "ON_WM_DEVMODECHANGE"
  - "ON_WM_ERASEBKGND"
  - "ON_WM_DESTROY"
  - "ON_WM_DRAWCLIPBOARD"
  - "ON_WM_ENDSESSION"
  - "ON_WM_DRAWITEM"
  - "ON_WM_ENABLE"
  - "ON_WM_DROPFILES"
  - "ON_WM_DELETEITEM"
  - "ON_WM_DEVICECHANGE"
  - "WM_ messages"
ms.assetid: 56fb89c8-68a8-4adf-883e-a9f63bf677e9
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# WM_ Message Handlers: D - E
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [WM_ Message Handlers: D - E](https://docs.microsoft.com/cpp/mfc/reference/wm-message-handlers-d-e).  
  
  
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_DEADCHAR()|afx_msg void [OnDeadChar](../../mfc/reference/cwnd-class.md#OnDeadChar)(UINT, UINT, UINT);|  
|ON_WM_DELETEITEM()|afx_msg void [OnDeleteItem](../../mfc/reference/cwnd-class.md#OnDeleteItem)(LPDELETEITEMSTRUCT);|  
|ON_WM_DESTROY()|afx_msg void [OnDestroy](../../mfc/reference/cwnd-class.md#OnDestroy)();|  
|ON_WM_DESTROYCLIPBOARD()|afx_msg void [OnDestroyClipboard](../../mfc/reference/cwnd-class.md#OnDestroyClipboard)();|  
|ON_WM_DEVICECHANGE()|afx_msg void [OnDeviceChange](../../mfc/reference/cwnd-class.md#OnDeviceChange)(UINT, DWORD);|  
|ON_WM_DEVMODECHANGE()|afx_msg void [OnDevModeChange](../../mfc/reference/cwnd-class.md#OnDevModeChange)(LPSTR);|  
|ON_WM_DRAWCLIPBOARD()|afx_msg void [OnDrawClipboard](../../mfc/reference/cwnd-class.md#OnDrawClipboard)();|  
|ON_WM_DRAWITEM()|afx_msg void [OnDrawItem](../../mfc/reference/cwnd-class.md#OnDrawItem)(LPDRAWITEMSTRUCT);|  
|ON_WM_DROPFILES()|afx_msg void [OnDropFiles](../../mfc/reference/cwnd-class.md#OnDropFiles)(HDROP);|  
|ON_WM_DWMCOLORIZATIONCOLORCHANGED()|afx_msg void [OnColorizationColorChanged](../../mfc/reference/cwnd-class.md#OnColorizationColorChanged)(DWORD, BOOL);|  
|ON_WM_DWMCOMPOSITIONCHANGED()|afx_msg void [OnCompositionChanged](../../mfc/reference/cwnd-class.md#OnCompositionChanged)();|  
|ON_WM_DWMNCRENDERINGCHANGED()|afx_msg void [OnNcRenderingChanged](../../mfc/reference/cwnd-class.md#OnNcRenderingChanged)(BOOL);|  
|ON_WM_DWMWINDOWMAXIMIZEDCHANGE()|afx_msg void [OnWindowMaximizedChanged](../../mfc/reference/cwnd-class.md#OnWindowMaximizedChanged)(BOOL);|  
|ON_WM_ENABLE()|afx_msg void [OnEnable](../../mfc/reference/cwnd-class.md#OnEnable)(BOOL);|  
|ON_WM_ENDSESSION()|afx_msg void [OnEndSession](../../mfc/reference/cwnd-class.md#OnEndSession)(BOOL);|  
|ON_WM_ENTERIDLE()|afx_msg void [OnEnterIdle](../../mfc/reference/cwnd-class.md#OnEnterIdle)(UINT, CWnd*);|  
|ON_WM_ENTERSIZEMOVE()|afx_msg void [OnEnterSizeMove](../../mfc/reference/cwnd-class.md#OnEnterSizeMove)();|  
|ON_WM_ERASEBKGND()|afx_msg BOOL [OnEraseBkgnd](../../mfc/reference/cwnd-class.md#OnEraseBkgnd)(CDC*);|  
|ON_WM_EXITSIZEMOVE()|afx_msg void [OnExitSizeMove](../../mfc/reference/cwnd-class.md#OnExitSizeMove)();|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)







