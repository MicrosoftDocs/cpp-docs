---
title: "WM_ Message Handlers: N - O | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_NCHITTEST"
  - "ON_WM_NCLBUTTONDOWN"
  - "ON_WM_NCCALCSIZE"
  - "ON_WM_NCLBUTTONUP"
  - "ON_WM_NCPAINT"
  - "ON_WM_NCMBUTTONUP"
  - "ON_WM_NCCREATE"
  - "ON_WM_NCACTIVATE"
  - "ON_WM_NCMOUSEMOVE"
  - "ON_WM_NCRBUTTONDBLCLK"
  - "ON_WM_NCLBUTTONDBLCLK"
  - "ON_WM_NCDESTROY"
  - "ON_WM_NCMBUTTONDBLCLK"
  - "ON_WM_NCRBUTTONDOWN"
  - "ON_WM_NCRBUTTONUP"
  - "ON_WM_NCMBUTTONDOWN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_NCCALCSIZE"
  - "ON_WM_NCMBUTTONDOWN"
  - "ON_WM_NCRBUTTONDBLCLK"
  - "ON_WM_NCMBUTTONDBLCLK"
  - "ON_WM_NCLBUTTONDBLCLK"
  - "ON_WM_NCDESTROY"
  - "ON_WM_NCRBUTTONDOWN"
  - "ON_WM_NCLBUTTONDOWN"
  - "ON_WM_NCCREATE"
  - "ON_WM_NCRBUTTONUP"
  - "ON_WM_NCLBUTTONUP"
  - "ON_WM_NCPAINT"
  - "ON_WM_NCACTIVATE"
  - "ON_WM_NCHITTEST"
  - "ON_WM_NCMOUSEMOVE"
  - "ON_WM_NCMBUTTONUP"
  - "WM_ messages"
ms.assetid: 4efd1cda-b642-4e8b-89e8-73255fa70d77
caps.latest.revision: 17
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
# WM_ Message Handlers: N - O
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_NCACTIVATE()|afx_msg BOOL [OnNcActivate](../../mfc/reference/cwnd-class.md#OnNcActivate)(BOOL);|  
|ON_WM_NCCALCSIZE()|afx_msg void [OnNcCalcSize](../../mfc/reference/cwnd-class.md#OnNcCalcSize)(BOOL, NCCALCSIZE_PARAMS FAR*);|  
|ON_WM_NCCREATE()|afx_msg BOOL [OnNcCreate](../../mfc/reference/cwnd-class.md#OnNcCreate)(LPCREATESTRUCT);|  
|ON_WM_NCDESTROY()|afx_msg void [OnNcDestroy](../../mfc/reference/cwnd-class.md#OnNcDestroy)();|  
|ON_WM_NCHITTEST()|afx_msg LRESULT [OnNcHitTest](../../mfc/reference/cwnd-class.md#OnNcHitTest)(CPoint);|  
|ON_WM_NCLBUTTONDBLCLK()|afx_msg void [OnNcLButtonDblClk](../../mfc/reference/cwnd-class.md#OnNcLButtonDblClk)(UINT, CPoint);|  
|ON_WM_NCLBUTTONDOWN()|afx_msg void [OnNcLButtonDown](../../mfc/reference/cwnd-class.md#OnNcLButtonDown)(UINT, CPoint);|  
|ON_WM_NCLBUTTONUP()|afx_msg void [OnNcLButtonUp](../../mfc/reference/cwnd-class.md#OnNcLButtonUp)(UINT, CPoint);|  
|ON_WM_NCMBUTTONDBLCLK()|afx_msg void [OnNcMButtonDblClk](../../mfc/reference/cwnd-class.md#OnNcMButtonDblClk)(UINT, CPoint);|  
|ON_WM_NCMBUTTONDOWN()|afx_msg void [OnNcMButtonDown](../../mfc/reference/cwnd-class.md#OnNcMButtonDown)(UINT, CPoint);|  
|ON_WM_NCMBUTTONUP()|afx_msg void [OnNcMButtonUp](../../mfc/reference/cwnd-class.md#OnNcMButtonUp)(UINT, CPoint);|  
|ON_WM_NCMOUSEHOVER()|afx_msg void [OnNcMouseHover](../../mfc/reference/cwnd-class.md#OnNcMouseHover)(UINT, CPoint);|  
|ON_WM_NCMOUSELEAVE()|afx_msg void [OnNcMouseLeave](../../mfc/reference/cwnd-class.md#OnNcMouseLeave)();|  
|ON_WM_NCMOUSEMOVE()|afx_msg void [OnNcMouseMove](../../mfc/reference/cwnd-class.md#OnNcMouseMove)(UINT, CPoint);|  
|ON_WM_NCPAINT()|afx_msg void [OnNcPaint](../../mfc/reference/cwnd-class.md#OnNcPaint)();|  
|ON_WM_NCRBUTTONDBLCLK()|afx_msg void [OnNcRButtonDblClk](../../mfc/reference/cwnd-class.md#OnNcRButtonDblClk)(UINT, CPoint);|  
|ON_WM_NCRBUTTONDOWN()|afx_msg void [OnNcRButtonDown](../../mfc/reference/cwnd-class.md#OnNcRButtonDown)(UINT, CPoint);|  
|ON_WM_NCRBUTTONUP()|afx_msg void [OnNcRButtonUp](../../mfc/reference/cwnd-class.md#OnNcRButtonUp)(UINT, CPoint);|  
|ON_WM_NCXBUTTONDBLCLK()|void [OnNcXButtonDblClk](../../mfc/reference/cwnd-class.md#OnNcXButtonDblClk)(short, UINT, CPoint);|  
|ON_WM_NCXBUTTONDOWN()|afx_msg void [OnNcXButtonDown](../../mfc/reference/cwnd-class.md#OnNcXButtonDown)(short, UINT, CPoint);|  
|ON_WM_NCXBUTTONUP()|afx_msg void [OnNcXButtonUp](../../mfc/reference/cwnd-class.md#OnNcXButtonUp)(short, UINT, CPoint);|  
|ON_WM_NEXTMENU()|afx_msg void [OnNextMenu](../../mfc/reference/cwnd-class.md#OnNextMenu)(UINT, LPMDINEXTMENU);|  
|ON_WM_NOTIFYFORMAT()|afx_msg UINT [OnNotifyFormat](../../mfc/reference/cwnd-class.md#OnNotifyFormat)(CWnd*, UINT);|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

