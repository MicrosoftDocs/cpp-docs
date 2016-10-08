---
title: "WM_ Message Handlers: F - K"
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
ms.assetid: 0e7de191-1499-499f-859c-62742797808e
caps.latest.revision: 12
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
# WM_ Message Handlers: F - K
The following map entries on the left correspond to the function prototypes on the right:  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_WM_FONTCHANGE()|afx_msg void [OnFontChange](../Topic/CWnd::OnFontChange.md)();|  
|ON_WM_GETDLGCODE()|afx_msg UINT [OnGetDlgCode](../Topic/CWnd::OnGetDlgCode.md)();|  
|ON_WM_GETMINMAXINFO()|afx_msg void [OnGetMinMaxInfo](../Topic/CWnd::OnGetMinMaxInfo.md)(LPPOINT);|  
|ON_WM_HELPINFO()|afx_msg BOOL [OnHelpInfo](../Topic/CWnd::OnHelpInfo.md)(HELPINFO*);|  
|ON_WM_HOTKEY()|afx_msg void [OnHotKey](../Topic/CWnd::OnHotKey.md)(UINT, UINT, UINT);|  
|ON_WM_HSCROLL()|afx_msg void [OnHScroll](../Topic/CWnd::OnHScroll.md)(UINT, UINT, CWnd*);|  
|ON_WM_HSCROLLCLIPBOARD()|afx_msg void [OnHScrollClipboard](../Topic/CWnd::OnHScrollClipboard.md)(CWnd*, UINT, UINT);|  
|ON_WM_ICONERASEBKGND()|afx_msg void [OnIconEraseBkgnd](../Topic/CWnd::OnIconEraseBkgnd.md)(CDC*);|  
|ON_WM_INITMENU()|afx_msg void [OnInitMenu](../Topic/CWnd::OnInitMenu.md)(CMenu*);|  
|ON_WM_INITMENUPOPUP()|afx_msg void [OnInitMenuPopup](../Topic/CWnd::OnInitMenuPopup.md)(CMenu*, UINT, BOOL);|  
|ON_WM_INPUT()|afx_msg void [OnRawInput](../Topic/CWnd::OnRawInput.md)(UINT, HRAWINPUT);|  
|ON_WM_INPUT_DEVICE_CHANGE()|afx_msg void [OnInputDeviceChange](../Topic/CWnd::OnInputDeviceChange.md)(unsigned short);|  
|ON_WM_INPUTLANGCHANGE()|afx_msg void [OnInputLangChange](../Topic/CWnd::OnInputLangChange.md)(BYTE, UINT);|  
|ON_WM_INPUTLANGCHANGEREQUEST()|afx_msg void [OnInputLangChangeRequest](../Topic/CWnd::OnInputLangChangeRequest.md)(UINT, HKL);|  
|ON_WM_KEYDOWN()|afx_msg void [OnKeyDown](../Topic/CWnd::OnKeyDown.md)(UINT, UINT, UINT);|  
|ON_WM_KEYUP()|afx_msg void [OnKeyUp](../Topic/CWnd::OnKeyUp.md)(UINT, UINT, UINT);|  
|ON_WM_KILLFOCUS()|afx_msg void [OnKillFocus](../Topic/CWnd::OnKillFocus.md)(CWnd*);|  
  
## See Also  
 [Message Maps](../VS_visualcpp/Message-Maps--MFC-.md)   
 [Handlers for WM_ Messages](../VS_visualcpp/Handlers-for-WM_-Messages.md)