---
title: "Creating a CToolBarCtrl Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CToolBarCtrl"]
dev_langs: ["C++"]
helpviewer_keywords: ["toolbar controls [MFC], creating", "CToolBarCtrl class [MFC], creating toolbars"]
ms.assetid: a4f6bf0c-0195-4dbf-a09e-aee503e19dc3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating a CToolBarCtrl Object
[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) objects contain several internal data structures — a list of button image bitmaps, a list of button label strings, and a list of `TBBUTTON` structures — that associate an image and/or string with the position, style, state, and command ID of the button. Each of the elements of these data structures is referred to by a zero-based index. Before you can use a `CToolBarCtrl` object, you must set up these data structures. For a list of the data structures, see [Toolbar Controls](controls-mfc.md) in the Windows SDK. The list of strings can only be used for button labels; you cannot retrieve strings from the toolbar.  
  
 To use a `CToolBarCtrl` object, you will typically follow these steps:  
  
### To use a CToolBarCtrl object  
  
1.  Construct the [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) object.  
  
2.  Call [Create](../mfc/reference/ctoolbarctrl-class.md#create) to create the Windows toolbar common control and attach it to the `CToolBarCtrl` object. If you want bitmap images for buttons, add the button bitmaps to the toolbar by calling [AddBitmap](../mfc/reference/ctoolbarctrl-class.md#addbitmap). If you want string labels for buttons, add the strings to the toolbar by calling [AddString](../mfc/reference/ctoolbarctrl-class.md#addstring) and/or [AddStrings](../mfc/reference/ctoolbarctrl-class.md#addstrings). After calling `AddString` and/or `AddStrings`, you should call [AutoSize](../mfc/reference/ctoolbarctrl-class.md#autosize) in order to get the string or strings to appear.  
  
3.  Add button structures to the toolbar by calling [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons).  
  
4.  If you want tool tips, handle **TTN_NEEDTEXT** messages in the toolbar's owner window as described in [Handling Tool Tip Notifications](../mfc/handling-tool-tip-notifications.md).  
  
5.  If you want your user to be able to customize the toolbar, handle customization notification messages in the owner window as described in [Handling Customization Notifications](../mfc/handling-customization-notifications.md).  
  
## See Also  
 [Using CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

