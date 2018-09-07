---
title: "Creating the Header Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["CHeaderCtrl class [MFC], creating", "header controls [MFC], creating"]
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating the Header Control
The header control is not directly available in the dialog editor (although you can add a list control, which includes a header control).  
  
### To put a header control in a dialog box  
  
1.  Manually embed a member variable of type [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) in your dialog class.  
  
2.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), create and set the styles for the `CHeaderCtrl`, position it, and display it.  
  
3.  Add items to the header control.  
  
4.  Use the Properties window to map handler functions in the dialog class for any header-control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
### To put a header control in a view (not a CListView)  
  
1.  Embed a [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) object in your view class.  
  
2.  Style, position, and display the header control window in the view's [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) member function.  
  
3.  Add items to the header control.  
  
4.  Use the Properties window to map handler functions in the view class for any header-control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
 In either case, the embedded control object is created when the view or dialog object is created. Then you must call [CHeaderCtrl::Create](../mfc/reference/cheaderctrl-class.md#create) to create the control window. To position the control, call [CHeaderCtrl::Layout](../mfc/reference/cheaderctrl-class.md#layout) to determine the control's initial size and position and [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos) to set the position you want. Then add items as described in [Adding Items to the Header Control](../mfc/adding-items-to-the-header-control.md).  
  
 For more information, see [Creating a Header Control](/windows/desktop/Controls/header-controls) in the Windows SDK.  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controls](../mfc/controls-mfc.md)

