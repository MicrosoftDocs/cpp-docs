---
title: "Creating an Extended Combo Box Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extended combo boxes"
  - "CComboBoxEx class, creating extended combo box controls"
  - "extended combo boxes, creating"
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
caps.latest.revision: 10
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
# Creating an Extended Combo Box Control
How the extended combo box control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CComboBoxEx directly in a dialog box  
  
1.  In the dialog editor, add an Extended Combo Box control to your dialog template resource. Specify its control ID.  
  
2.  Specify any styles required, using the Properties dialog box of the extended combo box control.  
  
3.  Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CComboBoxEx](../mfc/reference/ccomboboxex-class.md) with the Control property. You can use this member to call `CComboBoxEx` member functions.  
  
4.  Use the Properties window to map handler functions in the dialog class for any extended combo box control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
5.  In [OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog), set any additional styles for the `CComboBoxEx` object.  
  
### To use CComboBoxEx in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../mfc/reference/ctabctrl-class.md#ctabctrl__create) member function, possibly in [OnInitialUpdate](../mfc/reference/cview-class.md#cview__oninitialupdate), possibly as early as the parent window's [OnCreate](../mfc/reference/cwnd-class.md#cwnd__oncreate) handler function. Set the styles for the control.  
  
## See Also  
 [Using CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controls](../mfc/controls-mfc.md)

