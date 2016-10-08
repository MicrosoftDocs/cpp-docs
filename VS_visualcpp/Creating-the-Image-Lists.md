---
title: "Creating the Image Lists"
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
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
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
# Creating the Image Lists
Creating image lists is the same whether you use [CListView](../VS_visualcpp/CListView-Class.md) or [CListCtrl](../VS_visualcpp/CListCtrl-Class.md).  
  
> [!NOTE]
>  You only need image lists if your list control includes the `LVS_ICON` style.  
  
 Use class `CImageList` to create one or more image lists (for full-size icons, small icons, and states). See [CImageList](../VS_visualcpp/CImageList-Class.md), and see [List View Image Lists](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the Windows SDK.  
  
 Call [CListCtrl::SetImageList](../Topic/CListCtrl::SetImageList.md) for each image list; pass a pointer to the appropriate `CImageList` object.  
  
## See Also  
 [Using CListCtrl](../VS_visualcpp/Using-CListCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)