---
title: "Creating the Tab Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Creating the Tab Control
How the tab control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CTabCtrl directly in a dialog box  
  
1.  In the dialog editor, add a Tab Control to your dialog template resource. Specify its control ID.  
  
2.  Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CTabCtrl](../mfc/reference/ctabctrl-class.md) with the Control property. You can use this member to call `CTabCtrl` member functions.  
  
3.  Map handler functions in the dialog class for any tab control notification messages you need to handle. For more information, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).  
  
4.  In [OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog), set the styles for the `CTabCtrl`.  
  
### To use CTabCtrl in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../mfc/reference/ctabctrl-class.md#ctabctrl__create) member function, possibly in [OnInitialUpdate](../mfc/reference/cview-class.md#cview__oninitialupdate), possibly as early as the parent window's [OnCreate](../mfc/reference/cwnd-class.md#cwnd__oncreate) handler function (if you're subclassing the control). Set the styles for the control.  
  
 After the `CTabCtrl` object has been created, you can set or clear the following extended styles:  
  
-   **TCS_EX_FLATSEPARATORS** The tab control will draw separators between the tab items. This extended style only affects tab controls that have the **TCS_BUTTONS** and **TCS_FLATBUTTONS** styles. By default, creating the tab control with the **TCS_FLATBUTTONS** style sets this extended style.  
  
-   **TCS_EX_REGISTERDROP** The tab control generates **TCN_GETOBJECT** notification messages to request a drop target object when an object is dragged over the tab items in the control.  
  
    > [!NOTE]
    >  To receive the **TCN_GETOBJECT** notification, you must initialize the OLE libraries with a call to [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).  
  
 These styles can be retrieved and set, after the control has been created, with respective calls to the [GetExtendedStyle](../mfc/reference/ctabctrl-class.md#ctabctrl__getextendedstyle) and [SetExtendedStyle](../mfc/reference/ctabctrl-class.md#ctabctrl__setextendedstyle) member functions.  
  
 For instance, set the **TCS_EX_FLATSEPARATORS** style with the following lines of code:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#33](../mfc/codesnippet/cpp/creating-the-tab-control_1.cpp)]  
  
 Clear the **TCS_EX_FLATSEPARATORS** style from a `CTabCtrl` object with the following lines of code:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#34](../mfc/codesnippet/cpp/creating-the-tab-control_2.cpp)]  
  
 This will remove the separators that appear between the buttons of your `CTabCtrl` object.  
  
## See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)

