---
title: "Creating the List Control"
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
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
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
# Creating the List Control
How the list control ([CListCtrl](../VS_visualcpp/CListCtrl-Class.md)) is created depends on whether you're using the control directly or using class [CListView](../VS_visualcpp/CListView-Class.md) instead. If you use `CListView`, the framework constructs the view as part of its document/view creation sequence. Creating the list view creates the list control as well (the two are the same thing). The control is created in the view's [OnCreate](../Topic/CWnd::OnCreate.md) handler function. In this case, the control is ready for you to add items, via a call to [GetListCtrl](../Topic/CListView::GetListCtrl.md).  
  
### To use CListCtrl directly in a dialog box  
  
1.  In the dialog editor, add a List Control to your dialog template resource. Specify its control ID.  
  
2.  Use the [Add Member Variable Wizard](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md) to add a member variable of type `CListCtrl` with the Control property. You can use this member to call `CListCtrl` member functions.  
  
3.  Use the Properties window to map handler functions in the dialog class for any list control notification messages you need to handle (see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)).  
  
4.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), set the styles for the `CListCtrl`. See [Changing List Control Styles](../VS_visualcpp/Changing-List-Control-Styles.md). This determines the kind of "view" you get in the control, although you can change the view later.  
  
### To use CListCtrl in a nondialog window  
  
1.  Define the control in the view or window class.  
  
2.  Call the control's [Create](../Topic/CListCtrl::Create.md) member function, possibly in [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md), possibly as early as the parent window's [OnCreate](../Topic/CWnd::OnCreate.md) handler function (if you're subclassing the control). Set the styles for the control.  
  
## See Also  
 [Using CListCtrl](../VS_visualcpp/Using-CListCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)