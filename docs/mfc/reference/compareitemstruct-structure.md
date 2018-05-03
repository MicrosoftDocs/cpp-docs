---
title: "COMPAREITEMSTRUCT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["COMPAREITEMSTRUCT"]
dev_langs: ["C++"]
helpviewer_keywords: ["COMPAREITEMSTRUCT structure [MFC]"]
ms.assetid: 4b7131a5-5c7d-4e98-aac7-e85650262b52
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# COMPAREITEMSTRUCT Structure
The `COMPAREITEMSTRUCT` structure supplies the identifiers and application-supplied data for two items in a sorted, owner-drawn list box or combo box.  
  
## Syntax  
  
```  
typedef struct tagCOMPAREITEMSTRUCT {  
    UINT CtlType;  
    UINT CtlID;  
    HWND hwndItem;  
    UINT itemID1;  
    DWORD itemData1;  
    UINT itemID2;  
    DWORD itemData2;  
} COMPAREITEMSTRUCT;  
```  
  
#### Parameters  
 `CtlType`  
 **ODT_LISTBOX** (which specifies an owner-draw list box) or **ODT_COMBOBOX** (which specifies an owner-draw combo box).  
  
 `CtlID`  
 The control ID for the list box or combo box.  
  
 `hwndItem`  
 The window handle of the control.  
  
 *itemID1*  
 The index of the first item in the list box or combo box being compared.  
  
 *itemData1*  
 Application-supplied data for the first item being compared. This value was passed in the call that added the item to the combo or list box.  
  
 *itemID2*  
 Index of the second item in the list box or combo box being compared.  
  
 *itemData2*  
 Application-supplied data for the second item being compared. This value was passed in the call that added the item to the combo or list box.  
  
## Remarks  
 Whenever an application adds a new item to an owner-drawn list box or combo box created with the **CBS_SORT** or **LBS_SORT** style, Windows sends the owner a `WM_COMPAREITEM` message. The `lParam` parameter of the message contains a long pointer to a `COMPAREITEMSTRUCT` structure. Upon receiving the message, the owner compares the two items and returns a value indicating which item sorts before the other.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem)

