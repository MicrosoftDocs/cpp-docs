---
title: "DELETEITEMSTRUCT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["DELETEITEMSTRUCT"]
dev_langs: ["C++"]
helpviewer_keywords: ["DELETEITEMSTRUCT structure [MFC]"]
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
 *CtlType*  
 Specifies ODT_LISTBOX (an owner-drawn list box) or ODT_COMBOBOX (an owner-drawn combo box).  
  
 *CtlID*  
 Specifies the identifier of the list box or combo box.  
  
 *itemID*  
 Specifies index of the item in the list box or combo box being removed.  
  
 *hwndItem*  
 Identifies the control.  
  
 *itemData*  
 Specifies application-defined data for the item. This value is passed to the control in the *lParam* parameter of the message that adds the item to the list box or combo box.  
  
## Remarks  
 When an item is removed from the list box or combo box or when the list box or combo box is destroyed, Windows sends the WM_DELETEITEM message to the owner for each deleted item. The *lParam* parameter of the message contains a pointer to this structure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)


