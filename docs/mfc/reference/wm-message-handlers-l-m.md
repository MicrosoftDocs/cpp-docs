---
title: "WM_ Message Handlers: L - M | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_MENUSELECT"
  - "ON_WM_MBUTTONDBLCLK"
  - "ON_WM_MOUSEACTIVATE"
  - "ON_WM_MOUSEMOVE"
  - "ON_WM_MOVING"
  - "ON_WM_LBUTTONUP"
  - "ON_WM_LBUTTONDBLCLK"
  - "ON_WM_MEASUREITEM"
  - "ON_WM_MDIACTIVATE"
  - "ON_WM_MOVE"
  - "ON_WM_LBUTTONDOWN"
  - "ON_WM_MBUTTONDOWN"
  - "ON_WM_MENUCHAR"
  - "ON_WM_MBUTTONUP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_MENUSELECT"
  - "ON_WM_MBUTTONDBLCLK"
  - "ON_WM_MOVE"
  - "ON_WM_MOUSEACTIVATE"
  - "ON_WM_MBUTTONUP"
  - "ON_WM_MOUSEMOVE"
  - "ON_WM_MENUCHAR"
  - "ON_WM_MBUTTONDOWN"
  - "ON_WM_MEASUREITEM"
  - "ON_WM_MOVING"
  - "ON_WM_LBUTTONDOWN"
  - "ON_WM_MDIACTIVATE"
  - "ON_WM_LBUTTONDBLCLK"
  - "ON_WM_LBUTTONUP"
  - "WM_ messages"
ms.assetid: 96ecaaf1-6d13-4e12-a454-535635967489
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
# WM_ Message Handlers: L - M
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_LBUTTONDBLCLK()|afx_msg void [OnLButtonDblClk](../../mfc/reference/cwnd-class.md#cwnd__onlbuttondblclk)(UINT, CPoint);|  
|ON_WM_LBUTTONDOWN()|afx_msg void [OnLButtonDown](../../mfc/reference/cwnd-class.md#cwnd__onlbuttondown)(UINT, CPoint);|  
|ON_WM_LBUTTONUP()|afx_msg void [OnLButtonUp](../../mfc/reference/cwnd-class.md#cwnd__onlbuttonup)(UINT, CPoint);|  
|ON_WM_MBUTTONDBLCLK()|afx_msg void [OnMButtonDblClk](../../mfc/reference/cwnd-class.md#cwnd__onmbuttondblclk)(UINT, CPoint);|  
|ON_WM_MBUTTONDOWN()|afx_msg void [OnMButtonDown](../../mfc/reference/cwnd-class.md#cwnd__onmbuttondown)(UINT, CPoint);|  
|ON_WM_MBUTTONUP()|afx_msg void [OnMButtonUp](../../mfc/reference/cwnd-class.md#cwnd__onmbuttonup)(UINT, CPoint);|  
|ON_WM_MDIACTIVATE()|afx_msg void [OnMDIActivate](../../mfc/reference/cwnd-class.md#cwnd__onmdiactivate)(BOOL, CWnd*, CWnd\*);|  
|ON_WM_MEASUREITEM()|afx_msg void [OnMeasureItem](../../mfc/reference/cwnd-class.md#cwnd__onmeasureitem)(LPMEASUREITEMSTRUCT);|  
|ON_WM_MENUCHAR()|afx_msg LONG [OnMenuChar](../../mfc/reference/cwnd-class.md#cwnd__onmenuchar)(UINT, UINT, CMenu*);|  
|ON_WM_MENUDRAG()|afx_msg UINT [OnMenuDrag](../../mfc/reference/cwnd-class.md#cwnd__onmenudrag)(UINT, CMenu*);|  
|ON_WM_MENUGETOBJECT()|afx_msg UINT [OnMenuGetObject](../../mfc/reference/cwnd-class.md#cwnd__onmenugetobject)(MENUGETOBJECTINFO*);|  
|ON_WM_MENURBUTTONUP()|afx_msg void [OnMenuRButtonUp](../../mfc/reference/cwnd-class.md#cwnd__onmenurbuttonup)(UINT, CMenu*);|  
|ON_WM_MENUSELECT()|afx_msg void [OnMenuSelect](../../mfc/reference/cwnd-class.md#cwnd__onmenuselect)(UINT, UINT, HMENU);|  
|ON_WM_MOUSEACTIVATE()|afx_msg int [OnMouseActivate](../../mfc/reference/cwnd-class.md#cwnd__onmouseactivate)( CWnd*, UINT, UINT );|  
|ON_WM_MOUSEHOVER()|afx_msg void [OnMouseHover](../../mfc/reference/cwnd-class.md#cwnd__onmousehover)(UINT, CPoint);|  
|ON_WM_MOUSEHWHEEL()|afx_msg void [OnMouseHWheel](../../mfc/reference/cwnd-class.md#cwnd__onmousehwheel)(UINT, short, CPoint);|  
|ON_WM_MOUSELEAVE()|afx_msg void [OnMouseLeave](../../mfc/reference/cwnd-class.md#cwnd__onmouseleave)();|  
|ON_WM_MOUSEMOVE()|afx_msg void [OnMouseMove](../../mfc/reference/cwnd-class.md#cwnd__onmousemove)( UINT, CPoint);|  
|ON_WM_MOUSEWHEEL()|afx_msg BOOL [OnMouseWheel](../../mfc/reference/cwnd-class.md#cwnd__onmousewheel)(UINT, short, CPoint);|  
|ON_WM_MOVE()|afx_msg void [OnMove](../../mfc/reference/cwnd-class.md#cwnd__onmove)(int, int);|  
|ON_WM_MOVING()|afx_msg void [OnMoving](../../mfc/reference/cwnd-class.md#cwnd__onmoving)(UINT, LPRECT);|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

