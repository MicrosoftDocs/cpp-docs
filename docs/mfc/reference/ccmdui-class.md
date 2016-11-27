---
title: "CCmdUI Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCmdUI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "user interfaces, updating"
  - "states, updating user interface object"
  - "updating user interfaces for commands"
  - "commands [C++], updating UI"
  - "CCmdUI class"
  - "toolbars [C++], updating"
  - "command user interface"
  - "menus [C++], updating as context changes"
  - "buttons [C++], updating as context changes"
ms.assetid: 04eaaaf5-f510-48ab-b425-94665ba24766
caps.latest.revision: 21
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
# CCmdUI Class
Is used only within an `ON_UPDATE_COMMAND_UI` handler in a `CCmdTarget`-derived class.  
  
## Syntax  
  
```  
class CCmdUI  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCmdUI::ContinueRouting](#ccmdui__continuerouting)|Tells the command-routing mechanism to continue routing the current message down the chain of handlers.|  
|[CCmdUI::Enable](#ccmdui__enable)|Enables or disables the user-interface item for this command.|  
|[CCmdUI::SetCheck](#ccmdui__setcheck)|Sets the check state of the user-interface item for this command.|  
|[CCmdUI::SetRadio](#ccmdui__setradio)|Like the `SetCheck` member function, but operates on radio groups.|  
|[CCmdUI::SetText](#ccmdui__settext)|Sets the text for the user-interface item for this command.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCmdUI::m_nID](#ccmdui__m_nid)|The ID of the user-interface object.|  
|[CCmdUI::m_nIndex](#ccmdui__m_nindex)|The index of the user-interface object.|  
|[CCmdUI::m_pMenu](#ccmdui__m_pmenu)|Points to the menu represented by the `CCmdUI` object.|  
|[CCmdUI::m_pOther](#ccmdui__m_pother)|Points to the window object that sent the notification.|  
|[CCmdUI::m_pSubMenu](#ccmdui__m_psubmenu)|Points to the contained sub-menu represented by the `CCmdUI` object.|  
  
## Remarks  
 `CCmdUI` does not have a base class.  
  
 When a user of your application pulls down a menu, each menu item needs to know whether it should be displayed as enabled or disabled. The target of a menu command provides this information by implementing an `ON_UPDATE_COMMAND_UI` handler. For each of the command user-interface objects in your application, use the Properties window to create a message-map entry and function prototype for each handler.  
  
 When the menu is pulled down, the framework searches for and calls each `ON_UPDATE_COMMAND_UI` handler, each handler calls `CCmdUI` member functions such as **Enable** and **Check**, and the framework then appropriately displays each menu item.  
  
 A menu item can be replaced with a control-bar button or other command user-interface object without changing the code within the `ON_UPDATE_COMMAND_UI` handler.  
  
 The following table summarizes the effect `CCmdUI`'s member functions have on various command user-interface items.  
  
|User-Interface Item|Enable|SetCheck|SetRadio|SetText|  
|--------------------------|------------|--------------|--------------|-------------|  
|Menu item|Enables or disables|Checks (×) or unchecks|Checks using dot (•)|Sets item text|  
|Toolbar button|Enables or disables|Selects, unselects, or indeterminate|Same as `SetCheck`|(Not applicable)|  
|Status-bar pane|Makes text visible or invisible|Sets pop-out or normal border|Same as `SetCheck`|Sets pane text|  
|Normal button in `CDialogBar`|Enables or disables|Checks or unchecks check box|Same as `SetCheck`|Sets button text|  
|Normal control in `CDialogBar`|Enables or disables|(Not applicable)|(Not applicable)|Sets window text|  
  
 For more on the use of this class, see [How to Update User-Interface Objects](../../mfc/how-to-update-user-interface-objects.md).  
  
## Inheritance Hierarchy  
 `CCmdUI`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="ccmdui__continuerouting"></a>  CCmdUI::ContinueRouting  
 Call this member function to tell the command-routing mechanism to continue routing the current message down the chain of handlers.  
  
```  
void ContinueRouting();
```  
  
### Remarks  
 This is an advanced member function that should be used in conjunction with an `ON_COMMAND_EX` handler that returns **FALSE**. For more information, see [Technical Note 6](../../mfc/tn006-message-maps.md).  
  
##  <a name="ccmdui__enable"></a>  CCmdUI::Enable  
 Call this member function to enable or disable the user-interface item for this command.  
  
```  
virtual void Enable(BOOL bOn = TRUE);
```  
  
### Parameters  
 `bOn`  
 **TRUE** to enable the item, **FALSE** to disable it.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#46](../../mfc/codesnippet/cpp/ccmdui-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#47](../../mfc/codesnippet/cpp/ccmdui-class_2.cpp)]  
  
##  <a name="ccmdui__m_nid"></a>  CCmdUI::m_nID  
 The ID of the menu item, toolbar button, or other user-interface object represented by the `CCmdUI` object.  
  
```  
UINT m_nID;  
```  
  
##  <a name="ccmdui__m_nindex"></a>  CCmdUI::m_nIndex  
 The index of the menu item, toolbar button, or other user-interface object represented by the `CCmdUI` object.  
  
```  
UINT m_nIndex;  
```  
  
##  <a name="ccmdui__m_pmenu"></a>  CCmdUI::m_pMenu  
 Pointer (of `CMenu` type) to the menu represented by the `CCmdUI` object.  
  
```  
CMenu* m_pMenu;  
```  
  
### Remarks  
 **NULL** if the item is not a menu.  
  
##  <a name="ccmdui__m_psubmenu"></a>  CCmdUI::m_pSubMenu  
 Pointer (of `CMenu` type) to the contained sub-menu represented by the `CCmdUI` object.  
  
```  
CMenu* m_pSubMenu;  
```  
  
### Remarks  
 **NULL** if the item is not a menu. If the sub menu is a pop-up, `m_nID` contains the ID of the first item in the pop-up menu. For more information, see [Technical Note 21](../../mfc/tn021-command-and-message-routing.md).  
  
##  <a name="ccmdui__m_pother"></a>  CCmdUI::m_pOther  
 Pointer (of type `CWnd`) to the window object, such as a tool or status bar, that sent the notification.  
  
```  
CWnd* m_pOther;  
```  
  
### Remarks  
 **NULL** if the item is a menu or a non- `CWnd` object.  
  
##  <a name="ccmdui__setcheck"></a>  CCmdUI::SetCheck  
 Call this member function to set the user-interface item for this command to the appropriate check state.  
  
```  
virtual void SetCheck(int nCheck = 1);
```  
  
### Parameters  
 `nCheck`  
 Specifies the check state to set. If 0, unchecks; if 1, checks; and if 2, sets indeterminate.  
  
### Remarks  
 This member function works for menu items and toolbar buttons. The indeterminate state applies only to toolbar buttons.  
  
##  <a name="ccmdui__setradio"></a>  CCmdUI::SetRadio  
 Call this member function to set the user-interface item for this command to the appropriate check state.  
  
```  
virtual void SetRadio(BOOL bOn = TRUE);
```  
  
### Parameters  
 `bOn`  
 **TRUE** to enable the item; otherwise **FALSE**.  
  
### Remarks  
 This member function operates like `SetCheck`, except that it operates on user-interface items acting as part of a radio group. Unchecking the other items in the group is not automatic unless the items themselves maintain the radio-group behavior.  
  
##  <a name="ccmdui__settext"></a>  CCmdUI::SetText  
 Call this member function to set the text of the user-interface item for this command.  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### Parameters  
 `lpszText`  
 A pointer to a text string.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#48](../../mfc/codesnippet/cpp/ccmdui-class_3.cpp)]  
  
## See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)
