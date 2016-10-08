---
title: "CTreeCtrl vs. CTreeView"
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
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
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
# CTreeCtrl vs. CTreeView
MFC provides two classes that encapsulate tree controls: [CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md) and [CTreeView](../VS_visualcpp/CTreeView-Class.md). Each class is useful in different situations.  
  
 Use `CTreeCtrl` when you need a plain child window control; for instance, in a dialog box. You'd especially want to use `CTreeCtrl` if there will be other child controls in the window, as in a typical dialog box.  
  
 Use `CTreeView` when you want the tree control to act like a view window in document/view architecture as well as a tree control. A `CTreeView` will occupy the entire client area of a frame window or splitter window. It will be automatically resized when its parent window is resized, and it can process command messages from menus, accelerator keys, and toolbars. Since a tree control contains the data necessary to display the tree, the corresponding document object does not have to be complicated — you could even use [CDocument](../VS_visualcpp/CDocument-Class.md) as the document type in your document template.  
  
## See Also  
 [Using CTreeCtrl](../VS_visualcpp/Using-CTreeCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)