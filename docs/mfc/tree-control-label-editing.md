---
title: "Tree Control Label Editing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["editing tree control labels", "CTreeCtrl class [MFC], editing labels", "label editing in CTreeCtrl class [MFC]", "tree controls [MFC], label editing"]
ms.assetid: 6cde2ac3-43ee-468f-bac2-cf1a228ad32d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Tree Control Label Editing
The user can directly edit the labels of items in a tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) that has the **TVS_EDITLABELS** style. The user begins editing by clicking the label of the item that has the focus. An application begins editing by using the [EditLabel](../mfc/reference/ctreectrl-class.md#editlabel) member function. The tree control sends the notification when editing begins and when it is canceled or completed. When editing is completed, you are responsible for updating the item's label, if appropriate.  
  
 When label editing begins, a tree control sends a [TVN_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506) notification message. By processing this notification, you can allow editing of some labels and prevent editing of others. Returning 0 allows editing, and returning nonzero prevents it.  
  
 When label editing is canceled or completed, a tree control sends a [TVN_ENDLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773515) notification message. The *lParam* parameter is the address of a [NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418) structure. The **item** member is a [TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) structure that identifies the item and includes the edited text. You are responsible for updating the item's label, if appropriate, perhaps after validating the edited string. The *pszText* member of `TV_ITEM` is 0 if editing is canceled.  
  
 During label editing, typically in response to the [TVN_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506) notification message, you can get a pointer to the edit control used for label editing by using the [GetEditControl](../mfc/reference/ctreectrl-class.md#geteditcontrol) member function. You can call the edit control's [SetLimitText](../mfc/reference/cedit-class.md#setlimittext) member function to limit the amount of text a user can enter or subclass the edit control to intercept and discard invalid characters. Note, however, that the edit control is displayed only *after* **TVN_BEGINLABELEDIT** is sent.  
  
## See Also  
 [Using CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controls](../mfc/controls-mfc.md)

