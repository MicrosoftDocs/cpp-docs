---
title: "Creating the Date and Time Picker Control"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Creating the Date and Time Picker Control
How the date and time picker control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CDateTimeCtrl directly in a dialog box  
  
1.  In the dialog editor, add a Date and Time Picker Control to your dialog template resource. Specify its control ID.  
  
2.  Specify any styles required, using the Properties dialog box of the date and time picker control.  
  
3.  Use the [Add Member Variable Wizard](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md) to add a member variable of type [CDateTimeCtrl](../VS_visualcpp/CDateTimeCtrl-Class.md) with the Control property. You can use this member to call `CDateTimeCtrl` member functions.  
  
4.  Use the Properties window to map handler functions in the dialog class for any date time picker control [notification](../VS_visualcpp/Processing-Notification-Messages-in-Date-and-Time-Picker-Controls.md) messages you need to handle (see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)).  
  
5.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), set any additional styles for the `CDateTimeCtrl` object.  
  
### To use CDateTimeCtrl in a nondialog window  
  
1.  Declare the control in the view or window class.  
  
2.  Call the control's [Create](../Topic/CTabCtrl::Create.md) member function, possibly in [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), possibly as early as the parent window's [OnCreate](../Topic/CWnd::OnCreate.md) handler function (if you're subclassing the control). Set the styles for the control.  
  
## See Also  
 [Using CDateTimeCtrl](../VS_visualcpp/Using-CDateTimeCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)