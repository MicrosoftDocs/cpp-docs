---
title: "WM_ Messages: S"
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
caps.latest.revision: 10
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
|ON_WM_SETCURSOR( )|afx_msg BOOL [OnSetCursor](../Topic/CWnd::OnSetCursor.md)( CWnd*, UINT, UINT );|  
|ON_WM_SETFOCUS( )|afx_msg void [OnSetFocus](../Topic/CWnd::OnSetFocus.md)( CWnd* );|  
|ON_WM_SETTINGCHANGE( )|afx_msg void [OnSettingChange](../Topic/CWnd::OnSettingChange.md)( UINT uFlags, LPCTSTR lpszSection );|  
|ON_WM_SHOWWINDOW( )|afx_msg void [OnShowWindow](../Topic/CWnd::OnShowWindow.md)( BOOL, UINT );|  
|ON_WM_SIZE( )|afx_msg void [OnSize](../Topic/CWnd::OnSize.md)( UINT, int, int );|  
|ON_WM_SIZECLIPBOARD( )|afx_msg void [OnSizeClipboard](../Topic/CWnd::OnSizeClipboard.md)( CWnd*, HANDLE );|  
|ON_WM_SIZING( )|afx_msg void [OnSizing](../Topic/CWnd::OnSizing.md)( UINT, LPRECT );|  
|ON_WM_SPOOLERSTATUS( )|afx_msg void [OnSpoolerStatus](../Topic/CWnd::OnSpoolerStatus.md)( UINT, UINT );|  
|ON_WM_STYLECHANGED( )|afx_msg void [OnStyleChanged](../Topic/CWnd::OnStyleChanged.md)( int, LPSTYLESTRUCT );|  
|ON_WM_STYLECHANGING( )|afx_msg void [OnStyleChanging](../Topic/CWnd::OnStyleChanging.md)( int, LPSTYLESTRUCT );|  
|ON_WM_SYSCHAR( )|afx_msg void [OnSysChar](../Topic/CWnd::OnSysChar.md)( UINT, UINT, UINT );|  
|ON_WM_SYSCOLORCHANGE( )|afx_msg void [OnSysColorChange](../Topic/CWnd::OnSysColorChange.md)( );|  
|ON_WM_SYSCOMMAND( )|afx_msg void [OnSysCommand](../Topic/CWnd::OnSysCommand.md)( UINT, LONG );|  
|ON_WM_SYSDEADCHAR( )|afx_msg void [OnSysDeadChar](../Topic/CWnd::OnSysDeadChar.md)( UINT, UINT, UINT );|  
|ON_WM_SYSKEYDOWN( )|afx_msg void [OnSysKeyDown](../Topic/CWnd::OnSysKeyDown.md)( UINT, UINT, UINT );|  
|ON_WM_SYSKEYUP( )|afx_msg void [OnSysKeyUp](../Topic/CWnd::OnSysKeyUp.md)( UINT, UINT, UINT );|  
  
## See Also  
 [Message Maps](../mfcref/message-maps--mfc-.md)   
 [Handlers for WM_ Messages](../mfcref/handlers-for-wm_-messages.md)