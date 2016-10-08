---
title: "Handling TTN_NEEDTEXT Notification for Tool Tips"
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
ms.assetid: d0370a65-21ba-4676-bcc5-8cf851bbb15c
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
# Handling TTN_NEEDTEXT Notification for Tool Tips
As part of [enabling tool tips](../VS_visualcpp/Enabling-Tool-Tips.md), you handle the **TTN_NEEDTEXT** message by adding the following entry to your owner window's message map:  
  
 [!CODE [NVC_MFCControlLadenDialog#40](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#40)]  
  
 `memberFxn`  
 The member function to be called when text is needed for this button.  
  
 Note that the ID of a tool tip is always 0.  
  
 Declare your handler function in the class definition as follows:  
  
 [!CODE [NVC_MFCControlLadenDialog#53](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#53)]  
  
 where the italicized parameters are:  
  
 `id`  
 Identifier of the control that sent the notification. Not used. The control id is taken from the **NMHDR** structure.  
  
 `pNMHDR`  
 A pointer to the [NMTTDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760258) structure. This structure is also discussed further in [The TOOLTIPTEXT Structure](../VS_visualcpp/TOOLTIPTEXT-Structure.md).  
  
 `pResult`  
 A pointer to result code you can set before you return. **TTN_NEEDTEXT** handlers can ignore the `pResult` parameter.  
  
 As an example of a form-view notification handler:  
  
 [!CODE [NVC_MFCControlLadenDialog#54](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#54)]  
  
 Call `EnableToolTips` (this fragment taken from `OnInitDialog`):  
  
 [!CODE [NVC_MFCControlLadenDialog#55](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#55)]  
  
## See Also  
 [Tool Tips in Windows Not Derived from CFrameWnd](../VS_visualcpp/Tool-Tips-in-Windows-Not-Derived-from-CFrameWnd.md)