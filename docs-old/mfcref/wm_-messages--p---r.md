---
title: "WM_ Messages: P - R"
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
  - "ON_WM_RBUTTONUP"
  - "ON_WM_PALETTECHANGED"
  - "ON_WM_RBUTTONDBLCLK"
  - "ON_WM_QUERYENDSESSION"
  - "ON_WM_PARENTNOTIFY"
  - "ON_WM_PALETTEISCHANGING"
  - "ON_WM_QUERYOPEN"
  - "ON_WM_PAINT"
  - "ON_WM_QUERYNEWPALETTE"
  - "ON_WM_RBUTTONDOWN"
  - "ON_WM_RENDERALLFORMATS"
  - "ON_WM_PAINTCLIPBOARD"
  - "ON_WM_RENDERFORMAT"
  - "ON_WM_QUERYDRAGICON"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_RENDERFORMAT"
  - "ON_WM_QUERYOPEN"
  - "ON_WM_RBUTTONDOWN"
  - "ON_WM_PAINTCLIPBOARD"
  - "ON_WM_QUERYNEWPALETTE"
  - "ON_WM_RBUTTONUP"
  - "ON_WM_PARENTNOTIFY"
  - "ON_WM_RBUTTONDBLCLK"
  - "ON_WM_PALETTECHANGED"
  - "ON_WM_PALETTEISCHANGING"
  - "ON_WM_QUERYDRAGICON"
  - "ON_WM_PAINT"
  - "ON_WM_RENDERALLFORMATS"
  - "ON_WM_QUERYENDSESSION"
  - "WM_ messages"
ms.assetid: f46962e5-8329-4f1f-9b4d-fdad2a5ce1f8
caps.latest.revision: 12
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
# WM_ Messages: P - R
The following map entries correspond to the function prototypes:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_PAINT()|afx_msg void [OnPaint](../Topic/CWnd::OnPaint.md)();|  
|ON_WM_PAINTCLIPBOARD()|afx_msg void [OnPaintClipboard](../Topic/CWnd::OnPaintClipboard.md)( CWnd*, HANDLE );|  
|ON_WM_PALETTECHANGED()|afx_msg void [OnPaletteChanged](../Topic/CWnd::OnPaletteChanged.md)( CWnd* );|  
|ON_WM_PALETTEISCHANGING()|afx_msg void [OnPaletteIsChanging](../Topic/CWnd::OnPaletteIsChanging.md)( CWnd* );|  
|ON_WM_PARENTNOTIFY()|afx_msg void [OnParentNotify](../Topic/CWnd::OnParentNotify.md)( UINT, LONG );|  
|ON_WM_POWERBROADCAST()|afx_msg UINT [OnPowerBroadcast](../Topic/CWnd::OnPowerBroadcast.md)( UINT, UINT );|  
|ON_WM_QUERYDRAGICON()|afx_msg HCURSOR [OnQueryDragIcon](../Topic/CWnd::OnQueryDragIcon.md)()();|  
|ON_WM_QUERYENDSESSION()|afx_msg BOOL [OnQueryEndSession](../Topic/CWnd::OnQueryEndSession.md)()();|  
|ON_WM_QUERYNEWPALETTE()|afx_msg BOOL [OnQueryNewPalette](../Topic/CWnd::OnQueryNewPalette.md)()();|  
|ON_WM_QUERYOPEN()|afx_msg BOOL [OnQueryOpen](../Topic/CWnd::OnQueryOpen.md)()();|  
|ON_WM_RBUTTONDBLCLK()|afx_msg void [OnRButtonDblClk](../Topic/CWnd::OnRButtonDblClk.md)( UINT, CPoint );|  
|ON_WM_RBUTTONDOWN()|afx_msg void [OnRButtonDown](../Topic/CWnd::OnRButtonDown.md)( UINT, CPoint );|  
|ON_WM_RBUTTONUP()|afx_msg void [OnRButtonUp](../Topic/CWnd::OnRButtonUp.md)( UINT, CPoint );|  
|ON_WM_RENDERALLFORMATS()|afx_msg void [OnRenderAllFormats](../Topic/CWnd::OnRenderAllFormats.md)();|  
|ON_WM_RENDERFORMAT()|afx_msg void [OnRenderFormat](../Topic/CWnd::OnRenderFormat.md)( UINT );|  
  
## See Also  
 [Message Maps](../mfcref/message-maps--mfc-.md)   
 [Handlers for WM_ Messages](../mfcref/handlers-for-wm_-messages.md)