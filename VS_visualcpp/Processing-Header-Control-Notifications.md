---
title: "Processing Header-Control Notifications"
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
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
caps.latest.revision: 9
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
# Processing Header-Control Notifications
In your view or dialog class, use the Properties window to create an [OnChildNotify](../Topic/CWnd::OnChildNotify.md) handler function with a switch statement for any header-control ([CHeaderCtrl](../VS_visualcpp/CHeaderCtrl-Class.md)) notification messages you want to handle (see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)). Notifications are sent to the parent window when the user clicks or double-clicks a header item, drags a divider between items, and so on.  
  
 The notification messages associated with a header control are listed in [Header Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb775239) in the Windows SDK.  
  
## See Also  
 [Using CHeaderCtrl](../VS_visualcpp/Using-CHeaderCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)