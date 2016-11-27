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
|ON_WM_ACTIVATE()|afx_msg void [OnActivate](../../mfc/reference/cwnd-class.md#cwnd__onactivate)(UINT, CWnd*, BOOL);|  
|ON_WM_ACTIVATEAPP()|afx_msg void [OnActivateApp](../../mfc/reference/cwnd-class.md#cwnd__onactivateapp)(BOOL, DWORD);|  
|ON_WM_APPCOMMAND()|afx_msg void [OnAppCommand](../../mfc/reference/cwnd-class.md#cwnd__onappcommand)(CWnd*, UINT, UINT, UINT);|  
|ON_WM_ASKCBFORMATNAME()|afx_msg void [OnAskCbFormatName](../../mfc/reference/cwnd-class.md#cwnd__onaskcbformatname)(UINT, LPSTR);|  
|ON_WM_CANCELMODE()|afx_msg void [OnCancelMode](../../mfc/reference/cwnd-class.md#cwnd__oncancelmode)();|  
|ON_WM_CAPTURECHANGED()|afx_msg void [OnCaptureChanged](../../mfc/reference/cwnd-class.md#cwnd__oncapturechanged)(CWnd*);|  
|ON_WM_CHANGECBCHAIN()|afx_msg void [OnChangeCbChain](../../mfc/reference/cwnd-class.md#cwnd__onchangecbchain)(HWND, HWND);|  
|ON_WM_CHAR()|afx_msg void [OnChar](../../mfc/reference/cwnd-class.md#cwnd__onchar)(UINT, UINT, UINT);|  
|ON_WM_CHARTOITEM()|afx_msg int [OnCharToItem](../../mfc/reference/cwnd-class.md#cwnd__onchartoitem)(UINT, CWnd*, UINT);|  
|ON_WM_CHILDACTIVATE()|afx_msg void [OnChildActivate](../../mfc/reference/cwnd-class.md#cwnd__onchildactivate)();|  
|ON_WM_CLIPBOARDUPDATE()|afx_msg void [OnClipboardUpdate](../../mfc/reference/cwnd-class.md#cwnd__onclipboardupdate)();|  
|ON_WM_CLOSE()|afx_msg void [OnClose](../../mfc/reference/cwnd-class.md#cwnd__onclose)();|  
|ON_WM_COMPACTING()|afx_msg void [OnCompacting](../../mfc/reference/cwnd-class.md#cwnd__oncompacting)(UINT);|  
|ON_WM_COMPAREITEM()|afx_msg int [OnCompareItem](../../mfc/reference/cwnd-class.md#cwnd__oncompareitem)(LPCOMPAREITEMSTRUCT);|  
|ON_WM_CONTEXTMENU()|afx_msg void [OnContextMenu](../../mfc/reference/cwnd-class.md#cwnd__oncontextmenu)(CWnd*, CPoint);|  
|ON_WM_COPYDATA()|afx_msg BOOL [OnCopyData](../../mfc/reference/cwnd-class.md#cwnd__oncopydata)(CWnd* pWnd, COPYDATASTRUCT\* pCopyDataStruct);|  
|ON_WM_CREATE()|afx_msg int [OnCreate](../../mfc/reference/cwnd-class.md#cwnd__oncreate)(LPCREATESTRUCT);|  
|ON_WM_CTLCOLOR()|afx_msg HBRUSH [OnCtlColor](../../mfc/reference/cwnd-class.md#cwnd__onctlcolor)(CDC*, CWnd\*, UINT);|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

