---
title: "Using Tree Controls"
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
ms.assetid: 4e92941a-e477-4fb1-b1ce-4abeafbef1c1
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
# Using Tree Controls
Typical usage of a tree control ([CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)) follows the pattern below:  
  
-   The control is created. If the control is specified in a dialog box template or if you're using `CTreeView`, creation is automatic when the dialog box or view is created. If you want to create the tree control as a child window of some other window, use the [Create](../Topic/CTreeCtrl::Create.md) member function.  
  
-   If you want your tree control to use images, set an image list by calling [SetImageList](../Topic/CTreeCtrl::SetImageList.md). You can also change the indentation by calling [SetIndent](../Topic/CTreeCtrl::SetIndent.md). A good time to do this is in [OnInitDialog](../Topic/CDialog::OnInitDialog.md) (for controls in dialog boxes) or [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) (for views).  
  
-   Put data into the control by calling the `CTreeCtrl`'s [InsertItem](../Topic/CTreeCtrl::InsertItem.md) function once for each data item. `InsertItem` returns a handle to the item you can use to refer to it later, such as when adding child items. A good time to initialize the data is in `OnInitDialog` (for controls in dialog boxes) or `OnInitialUpdate` (for views).  
  
-   As the user interacts with the control, it will send various notification messages. You can specify a function to handle each of the messages you want to handle by adding an **ON_NOTIFY_REFLECT** macro in your control window's message map or by adding an `ON_NOTIFY` macro to your parent window's message map. See [Tree Control Notification Messages](../VS_visualcpp/Tree-Control-Notification-Messages.md) later in this topic for a list of possible notifications.  
  
-   Call the various Set member functions to set values for the control. Changes that you can make include setting the indentation and changing the text, image, or data associated with an item.  
  
-   Use the various Get functions to examine the contents of the control. You can also traverse the contents of the tree control with functions that allow you to retrieve handles to parents, children, and siblings of a specified item. You can even sort the children of a particular node.  
  
-   When you're done with the control, make sure it's properly destroyed. If the tree control is in a dialog box or if it's a view, it and the `CTreeCtrl` object will be destroyed automatically. If not, you need to ensure that both the control and the `CTreeCtrl` object are properly destroyed.  
  
## See Also  
 [Using CTreeCtrl](../VS_visualcpp/Using-CTreeCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)