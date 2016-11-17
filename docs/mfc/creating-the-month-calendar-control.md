---
title: "Creating the Month Calendar Control | Microsoft Docs"
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
  - "CMonthCalCtrl class, creating"
  - "month calendar controls, creating"
  - "month calendar controls"
ms.assetid: 185cc642-85e9-4365-8a4c-d90b75b010f7
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
# Creating the Month Calendar Control
How the month calendar control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CMonthCalCtrl directly in a dialog box  
  
1.  In the dialog editor, add a Month Calendar Control to your dialog template resource. Specify its control ID.  
  
2.  Specify any styles required, using the Properties dialog box of the month calendar control.  
  
3.  Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md) with the Control property. You can use this member to call `CMonthCalCtrl` member functions.  
  
4.  Use the Properties window to map handler functions in the dialog class for any month calendar control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
5.  In [OnInitDialog](../mfc/reference/cdialog-class.md#cdialog__oninitdialog), set any additional styles for the `CMonthCalCtrl` object.  
  
### To use CMonthCalCtrl in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../mfc/reference/cmonthcalctrl-class.md#cmonthcalctrl__create) member function, possibly in [OnInitialUpdate](../mfc/reference/cview-class.md#cview__oninitialupdate), possibly as early as the parent window's [OnCreate](../mfc/reference/cwnd-class.md#cwnd__oncreate) handler function (if you're subclassing the control). Set the styles for the control.  
  
## See Also  
 [Using CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controls](../mfc/controls-mfc.md)

