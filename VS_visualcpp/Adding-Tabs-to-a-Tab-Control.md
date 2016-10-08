---
title: "Adding Tabs to a Tab Control"
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
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
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
# Adding Tabs to a Tab Control
After creating the tab control ([CTabCtrl](../VS_visualcpp/CTabCtrl-Class.md)), add as many tabs as you need.  
  
### To add a tab item  
  
1.  Prepare a [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) structure.  
  
2.  Call [CTabCtrl::InsertItem](../Topic/CTabCtrl::InsertItem.md), passing the structure.  
  
3.  Repeat steps 1 and 2 for additional tab items.  
  
 For more information, see [Creating a Tab Control](http://msdn.microsoft.com/library/windows/desktop/bb760550) in the Windows SDK.  
  
## See Also  
 [Using CTabCtrl](../VS_visualcpp/Using-CTabCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)