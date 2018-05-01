---
title: "Creating the Tab Control | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TCS_EX_REGISTERDROP"
  - "TCS_EX_FLATSEPARATORS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TCS_EX_REGISTERDROP extended style"
  - "tab controls, creating"
  - "CTabCtrl class, creating"
  - "TCS_EX_FLATSEPARATORS extended style"
ms.assetid: 3a9c2d64-f5f4-41ea-84ab-fceb73c3dbdc
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating the Tab Control
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating the Tab Control](https://docs.microsoft.com/cpp/mfc/creating-the-tab-control).  
  
  
How the tab control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CTabCtrl directly in a dialog box  
  
1.  In the dialog editor, add a Tab Control to your dialog template resource. Specify its control ID.  
  
2.  Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CTabCtrl](../mfc/reference/ctabctrl-class.md) with the Control property. You can use this member to call `CTabCtrl` member functions.  
  
3.  Map handler functions in the dialog class for any tab control notification messages you need to handle. For more information, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).  
  
4.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), set the styles for the `CTabCtrl`.  
  
### To use CTabCtrl in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../mfc/reference/ctabctrl-class.md#create) member function, possibly in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibly as early as the parent window's [OnCreate](../mfc/reference/cwnd-class.md#oncreate) handler function (if you're subclassing the control). Set the styles for the control.  
  
 After the `CTabCtrl` object has been created, you can set or clear the following extended styles:  
  
-   **TCS_EX_FLATSEPARATORS** The tab control will draw separators between the tab items. This extended style only affects tab controls that have the **TCS_BUTTONS** and **TCS_FLATBUTTONS** styles. By default, creating the tab control with the **TCS_FLATBUTTONS** style sets this extended style.  
  
-   **TCS_EX_REGISTERDROP** The tab control generates **TCN_GETOBJECT** notification messages to request a drop target object when an object is dragged over the tab items in the control.  
  
    > [!NOTE]
    >  To receive the **TCN_GETOBJECT** notification, you must initialize the OLE libraries with a call to [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).  
  
 These styles can be retrieved and set, after the control has been created, with respective calls to the [GetExtendedStyle](../mfc/reference/ctabctrl-class.md#getextendedstyle) and [SetExtendedStyle](../mfc/reference/ctabctrl-class.md#setextendedstyle) member functions.  
  
 For instance, set the **TCS_EX_FLATSEPARATORS** style with the following lines of code:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#33](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#33)]  
  
 Clear the **TCS_EX_FLATSEPARATORS** style from a `CTabCtrl` object with the following lines of code:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#34](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#34)]  
  
 This will remove the separators that appear between the buttons of your `CTabCtrl` object.  
  
## See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)





