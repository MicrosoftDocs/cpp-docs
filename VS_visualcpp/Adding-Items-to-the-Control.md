---
title: "Adding Items to the Control"
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
ms.assetid: 715994bd-340d-4ad2-9882-411654137830
caps.latest.revision: 11
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
# Adding Items to the Control
To add items to the list control ([CListCtrl](../VS_visualcpp/CListCtrl-Class.md)), call one of several versions of the [InsertItem](../Topic/CListCtrl::InsertItem.md) member function, depending on what information you have. One version takes a [LV_ITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure that you prepare. Because the `LV_ITEM` structure contains numerous members, you have greater control over the attributes of the list control item.  
  
 Two important members (in regard to the report view) of the `LV_ITEM` structure are the `iItem` and `iSubItem` members. The `iItem` member is the zero-based index of the item the structure is referencing and the `iSubItem` member is the one-based index of a subitem, or zero if the structure contains information about an item. With these two members you determine, per item, the type and value of subitem information that is displayed when the list control is in report view. For more information, see [CListCtrl::SetItem](../Topic/CListCtrl::SetItem.md).  
  
 Additional members specify the item's text, icon, state, and item data. "Item data" is an application-defined value associated with a list view item. For more information about the `LV_ITEM` structure, see [CListCtrl::GetItem](../Topic/CListCtrl::GetItem.md).  
  
 Other versions of `InsertItem` take one or more separate values, corresponding to members in the `LV_ITEM` structure, allowing you to initialize only those members you want to support. Generally, the list control manages storage for list items, but you can store some of the information in your application instead, using "callback items." For more information, see [Callback Items and the Callback Mask](../VS_visualcpp/Callback-Items-and-the-Callback-Mask.md) in this topic and [Callback Items and the Callback Mask](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the Windows SDK.  
  
 For more information, see [Adding List-View Items and Subitems](http://msdn.microsoft.com/library/windows/desktop/bb774736).  
  
## See Also  
 [Using CListCtrl](../VS_visualcpp/Using-CListCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)