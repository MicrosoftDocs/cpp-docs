---
title: "DELETEITEMSTRUCT Structure"
ms.date: "11/04/2016"
f1_keywords: ["DELETEITEMSTRUCT"]
helpviewer_keywords: ["DELETEITEMSTRUCT structure [MFC]"]
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
---
# DELETEITEMSTRUCT Structure

The `DELETEITEMSTRUCT` structure describes a deleted owner-drawn list-box or combo-box item.

## Syntax

```
typedef struct tagDELETEITEMSTRUCT { /* ditms */
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    HWND hwndItem;
    UINT itemData;
} DELETEITEMSTRUCT;
```

#### Parameters

*CtlType*<br/>
Specifies ODT_LISTBOX (an owner-drawn list box) or ODT_COMBOBOX (an owner-drawn combo box).

*CtlID*<br/>
Specifies the identifier of the list box or combo box.

*itemID*<br/>
Specifies index of the item in the list box or combo box being removed.

*hwndItem*<br/>
Identifies the control.

*itemData*<br/>
Specifies application-defined data for the item. This value is passed to the control in the *lParam* parameter of the message that adds the item to the list box or combo box.

## Remarks

When an item is removed from the list box or combo box or when the list box or combo box is destroyed, Windows sends the WM_DELETEITEM message to the owner for each deleted item. The *lParam* parameter of the message contains a pointer to this structure.

## Requirements

**Header:** atldbcli.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)

