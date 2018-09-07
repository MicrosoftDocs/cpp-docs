---
title: "Creating the Date and Time Picker Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["DateTimePicker control [MFC], creating", "CDateTimeCtrl class [MFC], creating"]
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating the Date and Time Picker Control
How the date and time picker control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CDateTimeCtrl directly in a dialog box  
  
1.  In the dialog editor, add a Date and Time Picker Control to your dialog template resource. Specify its control ID.  
  
2.  Specify any styles required, using the Properties dialog box of the date and time picker control.  
  
3.  Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md) with the Control property. You can use this member to call `CDateTimeCtrl` member functions.  
  
4.  Use the Properties window to map handler functions in the dialog class for any date time picker control [notification](../mfc/processing-notification-messages-in-date-and-time-picker-controls.md) messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
5.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), set any additional styles for the `CDateTimeCtrl` object.  
  
### To use CDateTimeCtrl in a nondialog window  
  
1.  Declare the control in the view or window class.  
  
2.  Call the control's [Create](../mfc/reference/ctabctrl-class.md#create) member function, possibly in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibly as early as the parent window's [OnCreate](../mfc/reference/cwnd-class.md#oncreate) handler function (if you're subclassing the control). Set the styles for the control.  
  
## See Also  
 [Using CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controls](../mfc/controls-mfc.md)

