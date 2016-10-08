---
title: "WM_ Message Handlers: A - C"
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
ms.assetid: 4e315896-d646-4b87-b0ab-41a4a753b045
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
# WM_ Message Handlers: A - C
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_ACTIVATE()|afx_msg void [OnActivate](../Topic/CWnd::OnActivate.md)(UINT, CWnd*, BOOL);|  
|ON_WM_ACTIVATEAPP()|afx_msg void [OnActivateApp](../Topic/CWnd::OnActivateApp.md)(BOOL, DWORD);|  
|ON_WM_APPCOMMAND()|afx_msg void [OnAppCommand](../Topic/CWnd::OnAppCommand.md)(CWnd*, UINT, UINT, UINT);|  
|ON_WM_ASKCBFORMATNAME()|afx_msg void [OnAskCbFormatName](../Topic/CWnd::OnAskCbFormatName.md)(UINT, LPSTR);|  
|ON_WM_CANCELMODE()|afx_msg void [OnCancelMode](../Topic/CWnd::OnCancelMode.md)();|  
|ON_WM_CAPTURECHANGED()|afx_msg void [OnCaptureChanged](../Topic/CWnd::OnCaptureChanged.md)(CWnd*);|  
|ON_WM_CHANGECBCHAIN()|afx_msg void [OnChangeCbChain](../Topic/CWnd::OnChangeCbChain.md)(HWND, HWND);|  
|ON_WM_CHAR()|afx_msg void [OnChar](../Topic/CWnd::OnChar.md)(UINT, UINT, UINT);|  
|ON_WM_CHARTOITEM()|afx_msg int [OnCharToItem](../Topic/CWnd::OnCharToItem.md)(UINT, CWnd*, UINT);|  
|ON_WM_CHILDACTIVATE()|afx_msg void [OnChildActivate](../Topic/CWnd::OnChildActivate.md)();|  
|ON_WM_CLIPBOARDUPDATE()|afx_msg void [OnClipboardUpdate](../Topic/CWnd::OnClipboardUpdate.md)();|  
|ON_WM_CLOSE()|afx_msg void [OnClose](../Topic/CWnd::OnClose.md)();|  
|ON_WM_COMPACTING()|afx_msg void [OnCompacting](../Topic/CWnd::OnCompacting.md)(UINT);|  
|ON_WM_COMPAREITEM()|afx_msg int [OnCompareItem](../Topic/CWnd::OnCompareItem.md)(LPCOMPAREITEMSTRUCT);|  
|ON_WM_CONTEXTMENU()|afx_msg void [OnContextMenu](../Topic/CWnd::OnContextMenu.md)(CWnd*, CPoint);|  
|ON_WM_COPYDATA()|afx_msg BOOL [OnCopyData](../Topic/CWnd::OnCopyData.md)(CWnd* pWnd, COPYDATASTRUCT\* pCopyDataStruct);|  
|ON_WM_CREATE()|afx_msg int [OnCreate](../Topic/CWnd::OnCreate.md)(LPCREATESTRUCT);|  
|ON_WM_CTLCOLOR()|afx_msg HBRUSH [OnCtlColor](../Topic/CWnd::OnCtlColor.md)(CDC*, CWnd\*, UINT);|  
  
## See Also  
 [Message Maps](../VS_visualcpp/Message-Maps--MFC-.md)   
 [Handlers for WM_ Messages](../VS_visualcpp/Handlers-for-WM_-Messages.md)