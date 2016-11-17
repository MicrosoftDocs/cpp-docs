---
title: "WM_ Messages: S | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_WM_SYSDEADCHAR"
  - "ON_WM_SYSKEYDOWN"
  - "ON_WM_STYLECHANGING"
  - "ON_WM_STYLECHANGED"
  - "ON_WM_SPOOLERSTATUS"
  - "ON_WM_SYSCHAR"
  - "ON_WM_SETFOCUS"
  - "ON_WM_SIZE"
  - "ON_WM_SIZING"
  - "ON_WM_SETCURSOR"
  - "ON_WM_SYSCOMMAND"
  - "ON_WM_SETTINGCHANGE"
  - "ON_WM_SHOWWINDOW"
  - "ON_WM_SYSKEYUP"
  - "ON_WM_SIZECLIPBOARD"
  - "ON_WM_SYSCOLORCHANGE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_WM_SIZE"
  - "ON_WM_SETFOCUS"
  - "ON_WM_SIZING"
  - "ON_WM_SYSCHAR"
  - "ON_WM_SETTINGCHANGE"
  - "ON_WM_SYSDEADCHAR"
  - "ON_WM_SHOWWINDOW"
  - "ON_WM_STYLECHANGING"
  - "ON_WM_SYSCOMMAND"
  - "ON_WM_STYLECHANGED"
  - "ON_WM_SPOOLERSTATUS"
  - "ON_WM_SYSCOLORCHANGE"
  - "ON_WM_SETCURSOR"
  - "ON_WM_SIZECLIPBOARD"
  - "ON_WM_SYSKEYUP"
  - "ON_WM_SYSKEYDOWN"
  - "WM_ messages"
ms.assetid: 4b9aec79-a98f-4aa0-a3d9-110941b6dcbc
caps.latest.revision: 14
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
# WM_ Messages: S
The following map entries correspond to the function prototypes.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_SETCURSOR( )|afx_msg BOOL [OnSetCursor](../../mfc/reference/cwnd-class.md#cwnd__onsetcursor)( CWnd*, UINT, UINT );|  
|ON_WM_SETFOCUS( )|afx_msg void [OnSetFocus](../../mfc/reference/cwnd-class.md#cwnd__onsetfocus)( CWnd* );|  
|ON_WM_SETTINGCHANGE( )|afx_msg void [OnSettingChange](../../mfc/reference/cwnd-class.md#cwnd__onsettingchange)( UINT uFlags, LPCTSTR lpszSection );|  
|ON_WM_SHOWWINDOW( )|afx_msg void [OnShowWindow](../../mfc/reference/cwnd-class.md#cwnd__onshowwindow)( BOOL, UINT );|  
|ON_WM_SIZE( )|afx_msg void [OnSize](../../mfc/reference/cwnd-class.md#cwnd__onsize)( UINT, int, int );|  
|ON_WM_SIZECLIPBOARD( )|afx_msg void [OnSizeClipboard](../../mfc/reference/cwnd-class.md#cwnd__onsizeclipboard)( CWnd*, HANDLE );|  
|ON_WM_SIZING( )|afx_msg void [OnSizing](../../mfc/reference/cwnd-class.md#cwnd__onsizing)( UINT, LPRECT );|  
|ON_WM_SPOOLERSTATUS( )|afx_msg void [OnSpoolerStatus](../../mfc/reference/cwnd-class.md#cwnd__onspoolerstatus)( UINT, UINT );|  
|ON_WM_STYLECHANGED( )|afx_msg void [OnStyleChanged](../../mfc/reference/cwnd-class.md#cwnd__onstylechanged)( int, LPSTYLESTRUCT );|  
|ON_WM_STYLECHANGING( )|afx_msg void [OnStyleChanging](../../mfc/reference/cwnd-class.md#cwnd__onstylechanging)( int, LPSTYLESTRUCT );|  
|ON_WM_SYSCHAR( )|afx_msg void [OnSysChar](../../mfc/reference/cwnd-class.md#cwnd__onsyschar)( UINT, UINT, UINT );|  
|ON_WM_SYSCOLORCHANGE( )|afx_msg void [OnSysColorChange](../../mfc/reference/cwnd-class.md#cwnd__onsyscolorchange)( );|  
|ON_WM_SYSCOMMAND( )|afx_msg void [OnSysCommand](../../mfc/reference/cwnd-class.md#cwnd__onsyscommand)( UINT, LONG );|  
|ON_WM_SYSDEADCHAR( )|afx_msg void [OnSysDeadChar](../../mfc/reference/cwnd-class.md#cwnd__onsysdeadchar)( UINT, UINT, UINT );|  
|ON_WM_SYSKEYDOWN( )|afx_msg void [OnSysKeyDown](../../mfc/reference/cwnd-class.md#cwnd__onsyskeydown)( UINT, UINT, UINT );|  
|ON_WM_SYSKEYUP( )|afx_msg void [OnSysKeyUp](../../mfc/reference/cwnd-class.md#cwnd__onsyskeyup)( UINT, UINT, UINT );|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

