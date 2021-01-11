---
description: "Learn more about: CCmdUI Class"
title: "CCmdUI Class"
ms.date: "09/06/2019"
f1_keywords: ["CCmdUI", "AFXWIN/CCmdUI", "AFXWIN/CCmdUI::ContinueRouting", "AFXWIN/CCmdUI::Enable", "AFXWIN/CCmdUI::SetCheck", "AFXWIN/CCmdUI::SetRadio", "AFXWIN/CCmdUI::SetText", "AFXWIN/CCmdUI::m_nID", "AFXWIN/CCmdUI::m_nIndex", "AFXWIN/CCmdUI::m_pMenu", "AFXWIN/CCmdUI::m_pOther", "AFXWIN/CCmdUI::m_pSubMenu"]
helpviewer_keywords: ["CCmdUI [MFC], ContinueRouting", "CCmdUI [MFC], Enable", "CCmdUI [MFC], SetCheck", "CCmdUI [MFC], SetRadio", "CCmdUI [MFC], SetText", "CCmdUI [MFC], m_nID", "CCmdUI [MFC], m_nIndex", "CCmdUI [MFC], m_pMenu", "CCmdUI [MFC], m_pOther", "CCmdUI [MFC], m_pSubMenu"]
ms.assetid: 04eaaaf5-f510-48ab-b425-94665ba24766
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
|[CCmdUI::ContinueRouting](#continuerouting)|Tells the command-routing mechanism to continue routing the current message down the chain of handlers.|
|[CCmdUI::Enable](#enable)|Enables or disables the user-interface item for this command.|
|[CCmdUI::SetCheck](#setcheck)|Sets the check state of the user-interface item for this command.|
|[CCmdUI::SetRadio](#setradio)|Like the `SetCheck` member function, but operates on radio groups.|
|[CCmdUI::SetText](#settext)|Sets the text for the user-interface item for this command.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CCmdUI::m_nID](#m_nid)|The ID of the user-interface object.|
|[CCmdUI::m_nIndex](#m_nindex)|The index of the user-interface object.|
|[CCmdUI::m_pMenu](#m_pmenu)|Points to the menu represented by the `CCmdUI` object.|
|[CCmdUI::m_pOther](#m_pother)|Points to the window object that sent the notification.|
|[CCmdUI::m_pSubMenu](#m_psubmenu)|Points to the contained sub-menu represented by the `CCmdUI` object.|

## Remarks

`CCmdUI` does not have a base class.

When a user of your application pulls down a menu, each menu item needs to know whether it should be displayed as enabled or disabled. The target of a menu command provides this information by implementing an ON_UPDATE_COMMAND_UI handler. For each of the command user-interface objects in your application, use the [Class Wizard](mfc-class-wizard.md) or **Properties** window (in **Class View**) to create a message-map entry and function prototype for each handler.

When the menu is pulled down, the framework searches for and calls each ON_UPDATE_COMMAND_UI handler, each handler calls `CCmdUI` member functions such as `Enable` and `Check`, and the framework then appropriately displays each menu item.

A menu item can be replaced with a control-bar button or other command user-interface object without changing the code within the `ON_UPDATE_COMMAND_UI` handler.

The following table summarizes the effect `CCmdUI`'s member functions have on various command user-interface items.

|User-Interface Item|Enable|SetCheck|SetRadio|SetText|
|--------------------------|------------|--------------|--------------|-------------|
|Menu item|Enables or disables|Checks or unchecks|Checks using a dot|Sets item text|
|Toolbar button|Enables or disables|Selects, unselects, or indeterminate|Same as `SetCheck`|(Not applicable)|
|Status-bar pane|Makes text visible or invisible|Sets pop-out or normal border|Same as `SetCheck`|Sets pane text|
|Normal button in `CDialogBar`|Enables or disables|Checks or unchecks check box|Same as `SetCheck`|Sets button text|
|Normal control in `CDialogBar`|Enables or disables|(Not applicable)|(Not applicable)|Sets window text|

For more on the use of this class, see [How to Update User-Interface Objects](../../mfc/how-to-update-user-interface-objects.md).

## Inheritance Hierarchy

`CCmdUI`

## Requirements

**Header:** afxwin.h

## <a name="continuerouting"></a> CCmdUI::ContinueRouting

Call this member function to tell the command-routing mechanism to continue routing the current message down the chain of handlers.

```cpp
void ContinueRouting();
```

### Remarks

This is an advanced member function that should be used in conjunction with an ON_COMMAND_EX handler that returns FALSE. For more information, see [Technical Note 6](../../mfc/tn006-message-maps.md).

## <a name="enable"></a> CCmdUI::Enable

Call this member function to enable or disable the user-interface item for this command.

```
virtual void Enable(BOOL bOn = TRUE);
```

### Parameters

*bOn*<br/>
TRUE to enable the item, FALSE to disable it.

### Example

[!code-cpp[NVC_MFCDocView#46](../../mfc/codesnippet/cpp/ccmdui-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#47](../../mfc/codesnippet/cpp/ccmdui-class_2.cpp)]

## <a name="m_nid"></a> CCmdUI::m_nID

The ID of the menu item, toolbar button, or other user-interface object represented by the `CCmdUI` object.

```
UINT m_nID;
```

## <a name="m_nindex"></a> CCmdUI::m_nIndex

The index of the menu item, toolbar button, or other user-interface object represented by the `CCmdUI` object.

```
UINT m_nIndex;
```

## <a name="m_pmenu"></a> CCmdUI::m_pMenu

Pointer (of `CMenu` type) to the menu represented by the `CCmdUI` object.

```
CMenu* m_pMenu;
```

### Remarks

NULL if the item is not a menu.

## <a name="m_psubmenu"></a> CCmdUI::m_pSubMenu

Pointer (of `CMenu` type) to the contained sub-menu represented by the `CCmdUI` object.

```
CMenu* m_pSubMenu;
```

### Remarks

NULL if the item is not a menu. If the sub menu is a pop-up, *m_nID* contains the ID of the first item in the pop-up menu. For more information, see [Technical Note 21](../../mfc/tn021-command-and-message-routing.md).

## <a name="m_pother"></a> CCmdUI::m_pOther

Pointer (of type `CWnd`) to the window object, such as a tool or status bar, that sent the notification.

```
CWnd* m_pOther;
```

### Remarks

NULL if the item is a menu or a non- `CWnd` object.

## <a name="setcheck"></a> CCmdUI::SetCheck

Call this member function to set the user-interface item for this command to the appropriate check state.

```
virtual void SetCheck(int nCheck = 1);
```

### Parameters

*nCheck*<br/>
Specifies the check state to set. If 0, unchecks; if 1, checks; and if 2, sets indeterminate.

### Remarks

This member function works for menu items and toolbar buttons. The indeterminate state applies only to toolbar buttons.

## <a name="setradio"></a> CCmdUI::SetRadio

Call this member function to set the user-interface item for this command to the appropriate check state.

```
virtual void SetRadio(BOOL bOn = TRUE);
```

### Parameters

*bOn*<br/>
TRUE to enable the item; otherwise FALSE.

### Remarks

This member function operates like `SetCheck`, except that it operates on user-interface items acting as part of a radio group. Unchecking the other items in the group is not automatic unless the items themselves maintain the radio-group behavior.

## <a name="settext"></a> CCmdUI::SetText

Call this member function to set the text of the user-interface item for this command.

```
virtual void SetText(LPCTSTR lpszText);
```

### Parameters

*lpszText*<br/>
A pointer to a text string.

### Example

[!code-cpp[NVC_MFCDocView#48](../../mfc/codesnippet/cpp/ccmdui-class_3.cpp)]

## See also

[MFC Sample MDI](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)
