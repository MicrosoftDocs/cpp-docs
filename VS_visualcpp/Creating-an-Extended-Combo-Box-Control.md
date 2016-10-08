---
title: "Creating an Extended Combo Box Control"
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
ms.assetid: a964267e-97b6-4e77-9f89-55bb5c68913f
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
# Creating an Extended Combo Box Control
How the extended combo box control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.  
  
### To use CComboBoxEx directly in a dialog box  
  
1.  In the dialog editor, add an Extended Combo Box control to your dialog template resource. Specify its control ID.  
  
2.  Specify any styles required, using the Properties dialog box of the extended combo box control.  
  
3.  Use the [Add Member Variable Wizard](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md) to add a member variable of type [CComboBoxEx](../VS_visualcpp/CComboBoxEx-Class.md) with the Control property. You can use this member to call `CComboBoxEx` member functions.  
  
4.  Use the Properties window to map handler functions in the dialog class for any extended combo box control notification messages you need to handle (see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)).  
  
5.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), set any additional styles for the `CComboBoxEx` object.  
  
### To use CComboBoxEx in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../Topic/CTabCtrl::Create.md) member function, possibly in [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), possibly as early as the parent window's [OnCreate](../Topic/CWnd::OnCreate.md) handler function. Set the styles for the control.  
  
## See Also  
 [Using CComboBoxEx](../VS_visualcpp/Using-CComboBoxEx.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)