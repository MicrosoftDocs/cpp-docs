---
title: "WM_ Messages: P - R | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 15
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
# WM_ Messages: P - R
The following map entries correspond to the function prototypes:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_PAINT()|afx_msg void [OnPaint](../../mfc/reference/cwnd-class.md#cwnd__onpaint)();|  
|ON_WM_PAINTCLIPBOARD()|afx_msg void [OnPaintClipboard](../../mfc/reference/cwnd-class.md#cwnd__onpaintclipboard)( CWnd*, HANDLE );|  
|ON_WM_PALETTECHANGED()|afx_msg void [OnPaletteChanged](../../mfc/reference/cwnd-class.md#cwnd__onpalettechanged)( CWnd* );|  
|ON_WM_PALETTEISCHANGING()|afx_msg void [OnPaletteIsChanging](../../mfc/reference/cwnd-class.md#cwnd__onpaletteischanging)( CWnd* );|  
|ON_WM_PARENTNOTIFY()|afx_msg void [OnParentNotify](../../mfc/reference/cwnd-class.md#cwnd__onparentnotify)( UINT, LONG );|  
|ON_WM_POWERBROADCAST()|afx_msg UINT [OnPowerBroadcast](../../mfc/reference/cwnd-class.md#cwnd__onpowerbroadcast)( UINT, UINT );|  
|ON_WM_QUERYDRAGICON()|afx_msg HCURSOR [OnQueryDragIcon](../../mfc/reference/cwnd-class.md#cwnd__onquerydragicon)()();|  
|ON_WM_QUERYENDSESSION()|afx_msg BOOL [OnQueryEndSession](../../mfc/reference/cwnd-class.md#cwnd__onqueryendsession)()();|  
|ON_WM_QUERYNEWPALETTE()|afx_msg BOOL [OnQueryNewPalette](../../mfc/reference/cwnd-class.md#cwnd__onquerynewpalette)()();|  
|ON_WM_QUERYOPEN()|afx_msg BOOL [OnQueryOpen](../../mfc/reference/cwnd-class.md#cwnd__onqueryopen)()();|  
|ON_WM_RBUTTONDBLCLK()|afx_msg void [OnRButtonDblClk](../../mfc/reference/cwnd-class.md#cwnd__onrbuttondblclk)( UINT, CPoint );|  
|ON_WM_RBUTTONDOWN()|afx_msg void [OnRButtonDown](../../mfc/reference/cwnd-class.md#cwnd__onrbuttondown)( UINT, CPoint );|  
|ON_WM_RBUTTONUP()|afx_msg void [OnRButtonUp](../../mfc/reference/cwnd-class.md#cwnd__onrbuttonup)( UINT, CPoint );|  
|ON_WM_RENDERALLFORMATS()|afx_msg void [OnRenderAllFormats](../../mfc/reference/cwnd-class.md#cwnd__onrenderallformats)();|  
|ON_WM_RENDERFORMAT()|afx_msg void [OnRenderFormat](../../mfc/reference/cwnd-class.md#cwnd__onrenderformat)( UINT );|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

