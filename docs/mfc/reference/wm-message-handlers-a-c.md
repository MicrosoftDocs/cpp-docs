---
title: "WM_ Message Handlers: A - C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_CREATE"
  - "ON_WM_COMPACTING"
  - "ON_WM_CHARTOITEM"
  - "ON_WM_ASKCBFORMATNAME"
  - "ON_WM_CTLCOLOR"
  - "ON_WM_COMPAREITEM"
  - "ON_WM_CHILDACTIVATE"
  - "ON_WM_CONTEXTMENU"
  - "ON_WM_ACTIVATE"
  - "ON_WM_CANCELMODE"
  - "ON_WM_CLOSE"
  - "ON_WM_CAPTURECHANGED"
  - "ON_WM_ACTIVATEAPP"
  - "ON_WM_CHAR"
  - "ON_WM_CHANGECBCHAIN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_COMPACTING"
  - "ON_WM_COMPAREITEM"
  - "ON_WM_CLOSE"
  - "ON_WM_CTLCOLOR"
  - "ON_WM_CHAR"
  - "ON_WM_CAPTURECHANGED"
  - "ON_WM_CHARTOITEM"
  - "ON_WM_CREATE"
  - "ON_WM_ACTIVATE"
  - "ON_WM_CONTEXTMENU"
  - "ON_WM_CANCELMODE"
  - "ON_WM_ASKCBFORMATNAME"
  - "ON_WM_CHILDACTIVATE"
  - "WM_ messages"
  - "ON_WM_ACTIVATEAPP"
  - "ON_WM_CHANGECBCHAIN"
ms.assetid: 4e315896-d646-4b87-b0ab-41a4a753b045
caps.latest.revision: 16
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
# WM_ Message Handlers: A - C
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_ACTIVATE()|afx_msg void [OnActivate](../../mfc/reference/cwnd-class.md#cwnd__OnActivate)(UINT, CWnd*, BOOL);|  
|ON_WM_ACTIVATEAPP()|afx_msg void [OnActivateApp](../../mfc/reference/cwnd-class.md#cwnd__OnActivateApp)(BOOL, DWORD);|  
|ON_WM_APPCOMMAND()|afx_msg void [OnAppCommand](../../mfc/reference/cwnd-class.md#cwnd__OnAppCommand)(CWnd*, UINT, UINT, UINT);|  
|ON_WM_ASKCBFORMATNAME()|afx_msg void [OnAskCbFormatName](../../mfc/reference/cwnd-class.md#cwnd__OnAskCbFormatName)(UINT, LPSTR);|  
|ON_WM_CANCELMODE()|afx_msg void [OnCancelMode](../../mfc/reference/cwnd-class.md#cwnd__OnCancelMode)();|  
|ON_WM_CAPTURECHANGED()|afx_msg void [OnCaptureChanged](../../mfc/reference/cwnd-class.md#cwnd__OnCaptureChanged)(CWnd*);|  
|ON_WM_CHANGECBCHAIN()|afx_msg void [OnChangeCbChain](../../mfc/reference/cwnd-class.md#cwnd__OnChangeCbChain)(HWND, HWND);|  
|ON_WM_CHAR()|afx_msg void [OnChar](../../mfc/reference/cwnd-class.md#cwnd__OnChar)(UINT, UINT, UINT);|  
|ON_WM_CHARTOITEM()|afx_msg int [OnCharToItem](../../mfc/reference/cwnd-class.md#cwnd__OnCharToItem)(UINT, CWnd*, UINT);|  
|ON_WM_CHILDACTIVATE()|afx_msg void [OnChildActivate](../../mfc/reference/cwnd-class.md#cwnd__OnChildActivate)();|  
|ON_WM_CLIPBOARDUPDATE()|afx_msg void [OnClipboardUpdate](../../mfc/reference/cwnd-class.md#cwnd__OnClipboardUpdate)();|  
|ON_WM_CLOSE()|afx_msg void [OnClose](../../mfc/reference/cwnd-class.md#cwnd__OnClose)();|  
|ON_WM_COMPACTING()|afx_msg void [OnCompacting](../../mfc/reference/cwnd-class.md#cwnd__OnCompacting)(UINT);|  
|ON_WM_COMPAREITEM()|afx_msg int [OnCompareItem](../../mfc/reference/cwnd-class.md#cwnd__OnCompareItem)(LPCOMPAREITEMSTRUCT);|  
|ON_WM_CONTEXTMENU()|afx_msg void [OnContextMenu](../../mfc/reference/cwnd-class.md#cwnd__OnContextMenu)(CWnd*, CPoint);|  
|ON_WM_COPYDATA()|afx_msg BOOL [OnCopyData](../../mfc/reference/cwnd-class.md#cwnd__OnCopyData)(CWnd* pWnd, COPYDATASTRUCT\* pCopyDataStruct);|  
|ON_WM_CREATE()|afx_msg int [OnCreate](../../mfc/reference/cwnd-class.md#cwnd__OnCreate)(LPCREATESTRUCT);|  
|ON_WM_CTLCOLOR()|afx_msg HBRUSH [OnCtlColor](../../mfc/reference/cwnd-class.md#cwnd__OnCtlColor)(CDC*, CWnd\*, UINT);|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

