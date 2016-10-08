---
title: "WM_ Message Handlers: N - O"
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
ms.assetid: 4efd1cda-b642-4e8b-89e8-73255fa70d77
caps.latest.revision: 14
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
# WM_ Message Handlers: N - O
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_NCACTIVATE()|afx_msg BOOL [OnNcActivate](../Topic/CWnd::OnNcActivate.md)(BOOL);|  
|ON_WM_NCCALCSIZE()|afx_msg void [OnNcCalcSize](../Topic/CWnd::OnNcCalcSize.md)(BOOL, NCCALCSIZE_PARAMS FAR*);|  
|ON_WM_NCCREATE()|afx_msg BOOL [OnNcCreate](../Topic/CWnd::OnNcCreate.md)(LPCREATESTRUCT);|  
|ON_WM_NCDESTROY()|afx_msg void [OnNcDestroy](../Topic/CWnd::OnNcDestroy.md)();|  
|ON_WM_NCHITTEST()|afx_msg LRESULT [OnNcHitTest](../Topic/CWnd::OnNcHitTest.md)(CPoint);|  
|ON_WM_NCLBUTTONDBLCLK()|afx_msg void [OnNcLButtonDblClk](../Topic/CWnd::OnNcLButtonDblClk.md)(UINT, CPoint);|  
|ON_WM_NCLBUTTONDOWN()|afx_msg void [OnNcLButtonDown](../Topic/CWnd::OnNcLButtonDown.md)(UINT, CPoint);|  
|ON_WM_NCLBUTTONUP()|afx_msg void [OnNcLButtonUp](../Topic/CWnd::OnNcLButtonUp.md)(UINT, CPoint);|  
|ON_WM_NCMBUTTONDBLCLK()|afx_msg void [OnNcMButtonDblClk](../Topic/CWnd::OnNcMButtonDblClk.md)(UINT, CPoint);|  
|ON_WM_NCMBUTTONDOWN()|afx_msg void [OnNcMButtonDown](../Topic/CWnd::OnNcMButtonDown.md)(UINT, CPoint);|  
|ON_WM_NCMBUTTONUP()|afx_msg void [OnNcMButtonUp](../Topic/CWnd::OnNcMButtonUp.md)(UINT, CPoint);|  
|ON_WM_NCMOUSEHOVER()|afx_msg void [OnNcMouseHover](../Topic/CWnd::OnNcMouseHover.md)(UINT, CPoint);|  
|ON_WM_NCMOUSELEAVE()|afx_msg void [OnNcMouseLeave](../Topic/CWnd::OnNcMouseLeave.md)();|  
|ON_WM_NCMOUSEMOVE()|afx_msg void [OnNcMouseMove](../Topic/CWnd::OnNcMouseMove.md)(UINT, CPoint);|  
|ON_WM_NCPAINT()|afx_msg void [OnNcPaint](../Topic/CWnd::OnNcPaint.md)();|  
|ON_WM_NCRBUTTONDBLCLK()|afx_msg void [OnNcRButtonDblClk](../Topic/CWnd::OnNcRButtonDblClk.md)(UINT, CPoint);|  
|ON_WM_NCRBUTTONDOWN()|afx_msg void [OnNcRButtonDown](../Topic/CWnd::OnNcRButtonDown.md)(UINT, CPoint);|  
|ON_WM_NCRBUTTONUP()|afx_msg void [OnNcRButtonUp](../Topic/CWnd::OnNcRButtonUp.md)(UINT, CPoint);|  
|ON_WM_NCXBUTTONDBLCLK()|void [OnNcXButtonDblClk](../Topic/CWnd::OnNcXButtonDblClk.md)(short, UINT, CPoint);|  
|ON_WM_NCXBUTTONDOWN()|afx_msg void [OnNcXButtonDown](../Topic/CWnd::OnNcXButtonDown.md)(short, UINT, CPoint);|  
|ON_WM_NCXBUTTONUP()|afx_msg void [OnNcXButtonUp](../Topic/CWnd::OnNcXButtonUp.md)(short, UINT, CPoint);|  
|ON_WM_NEXTMENU()|afx_msg void [OnNextMenu](../Topic/CWnd::OnNextMenu.md)(UINT, LPMDINEXTMENU);|  
|ON_WM_NOTIFYFORMAT()|afx_msg UINT [OnNotifyFormat](../Topic/CWnd::OnNotifyFormat.md)(CWnd*, UINT);|  
  
## See Also  
 [Message Maps](../VS_visualcpp/Message-Maps--MFC-.md)   
 [Handlers for WM_ Messages](../VS_visualcpp/Handlers-for-WM_-Messages.md)