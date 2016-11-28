---
title: "DRAWITEMSTRUCT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DRAWITEMSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DRAWITEMSTRUCT structure"
ms.assetid: ba9ef1d4-aebb-45e9-b956-4b81a02e50f7
caps.latest.revision: 11
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
# DRAWITEMSTRUCT Structure
The `DRAWITEMSTRUCT` structure provides information the owner window must have to determine how to paint an owner-drawn control or menu item.  
  
## Syntax  
  
```  
typedef struct tagDRAWITEMSTRUCT {  
    UINT CtlType;  
    UINT CtlID;  
    UINT itemID;  
    UINT itemAction;  
    UINT itemState;  
    HWND hwndItem;  
    HDC hDC;  
    RECT rcItem;  
    DWORD itemData;  
} DRAWITEMSTRUCT;  
```  
  
#### Parameters  
 `CtlType`  
 The control type. The values for control types are as follows:  
  
- **ODT_BUTTON** Owner-drawn button  
  
- **ODT_COMBOBOX** Owner-drawn combo box  
  
- **ODT_LISTBOX** Owner-drawn list box  
  
- **ODT_MENU** Owner-drawn menu  
  
- **ODT_LISTVIEW** List view control  
  
- **ODT_STATIC** Owner-drawn static control  
  
- **ODT_TAB** Tab control  
  
 `CtlID`  
 The control ID for a combo box, list box, or button. This member is not used for a menu.  
  
 `itemID`  
 The menu-item ID for a menu or the index of the item in a list box or combo box. For an empty list box or combo box, this member is a negative value, which allows the application to draw only the focus rectangle at the coordinates specified by the **rcItem** member even though there are no items in the control. The user can thus be shown whether the list box or combo box has the input focus. The setting of the bits in the **itemAction** member determines whether the rectangle is to be drawn as though the list box or combo box has input focus.  
  
 `itemAction`  
 Defines the drawing action required. This will be one or more of the following bits:  
  
- **ODA_DRAWENTIRE** This bit is set when the entire control needs to be drawn.  
  
- **ODA_FOCUS** This bit is set when the control gains or loses input focus. The **itemState** member should be checked to determine whether the control has focus.  
  
- **ODA_SELECT** This bit is set when only the selection status has changed. The **itemState** member should be checked to determine the new selection state.  
  
 *itemState*  
 Specifies the visual state of the item after the current drawing action takes place. That is, if a menu item is to be dimmed, the state flag **ODS_GRAYED** will be set. The state flags are as follows:  
  
- **ODS_CHECKED** This bit is set if the menu item is to be checked. This bit is used only in a menu.  
  
- **ODS_DISABLED** This bit is set if the item is to be drawn as disabled.  
  
- **ODS_FOCUS** This bit is set if the item has input focus.  
  
- **ODS_GRAYED** This bit is set if the item is to be dimmed. This bit is used only in a menu.  
  
- **ODS_SELECTED** This bit is set if the item's status is selected.  
  
- **ODS_COMBOBOXEDIT** The drawing takes place in the selection field (edit control) of an ownerdrawn combo box.  
  
- **ODS_DEFAULT** The item is the default item.  
  
 `hwndItem`  
 Specifies the window handle of the control for combo boxes, list boxes, and buttons. Specifies the handle of the menu (`HMENU`) that contains the item for menus.  
  
 `hDC`  
 Identifies a device context. This device context must be used when performing drawing operations on the control.  
  
 *rcItem*  
 A rectangle in the device context specified by the `hDC` member that defines the boundaries of the control to be drawn. Windows automatically clips anything the owner draws in the device context for combo boxes, list boxes, and buttons, but it does not clip menu items. When drawing menu items, the owner must not draw outside the boundaries of the rectangle defined by the **rcItem** member.  
  
 `itemData`  
 For a combo box or list box, this member contains the value that was passed to the list box by one of the following:  
  
- [CComboBox::AddString](../../mfc/reference/ccombobox-class.md#ccombobox__addstring)  
  
- [CComboBox::InsertString](../../mfc/reference/ccombobox-class.md#ccombobox__insertstring)  
  
- [CListBox::AddString](../../mfc/reference/clistbox-class.md#clistbox__addstring)  
  
- [CListBox::InsertString](../../mfc/reference/clistbox-class.md#clistbox__insertstring)  
  
 For a menu, this member contains the value that was passed to the menu by one of the following:  
  
- [CMenu::AppendMenu](../../mfc/reference/cmenu-class.md#cmenu__appendmenu)  
  
- [CMenu::InsertMenu](../../mfc/reference/cmenu-class.md#cmenu__insertmenu)  
  
- [CMenu::ModifyMenu](../../mfc/reference/cmenu-class.md#cmenu__modifymenu)  
  
## Remarks  
 The owner window of the owner-drawn control or menu item receives a pointer to this structure as the `lParam` parameter of the `WM_DRAWITEM` message.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#cwnd__ondrawitem)

