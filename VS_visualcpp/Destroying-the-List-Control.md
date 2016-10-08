---
title: "Destroying the List Control"
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
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
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
# Destroying the List Control
If you embed your [CListCtrl](../VS_visualcpp/CListCtrl-Class.md) object as a data member of a view or dialog class, it is destroyed when its owner is destroyed. If you use a [CListView](../VS_visualcpp/CListView-Class.md), the framework destroys the control when it destroys the view.  
  
 If you arrange for some of your list data to be stored in the application rather than the list control, you will need to arrange for its deallocation. For more information, see [Callback Items and the Callback Mask](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the Windows SDK.  
  
 In addition, you are responsible for deallocating any image lists you created and associated with the list control object.  
  
## See Also  
 [Using CListCtrl](../VS_visualcpp/Using-CListCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)