---
title: "Adding Items to the Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListCtrl class, adding items"
ms.assetid: 715994bd-340d-4ad2-9882-411654137830
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Adding Items to the Control
To add items to the list control ([CListCtrl](../mfc/reference/clistctrl-class.md)), call one of several versions of the [InsertItem](../mfc/reference/clistctrl-class.md#clistctrl__insertitem) member function, depending on what information you have. One version takes a [LV_ITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) structure that you prepare. Because the `LV_ITEM` structure contains numerous members, you have greater control over the attributes of the list control item.  
  
 Two important members (in regard to the report view) of the `LV_ITEM` structure are the `iItem` and `iSubItem` members. The `iItem` member is the zero-based index of the item the structure is referencing and the `iSubItem` member is the one-based index of a subitem, or zero if the structure contains information about an item. With these two members you determine, per item, the type and value of subitem information that is displayed when the list control is in report view. For more information, see [CListCtrl::SetItem](../mfc/reference/clistctrl-class.md#clistctrl__setitem).  
  
 Additional members specify the item's text, icon, state, and item data. "Item data" is an application-defined value associated with a list view item. For more information about the `LV_ITEM` structure, see [CListCtrl::GetItem](../mfc/reference/clistctrl-class.md#clistctrl__getitem).  
  
 Other versions of `InsertItem` take one or more separate values, corresponding to members in the `LV_ITEM` structure, allowing you to initialize only those members you want to support. Generally, the list control manages storage for list items, but you can store some of the information in your application instead, using "callback items." For more information, see [Callback Items and the Callback Mask](../mfc/callback-items-and-the-callback-mask.md) in this topic and [Callback Items and the Callback Mask](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 For more information, see [Adding List-View Items and Subitems](http://msdn.microsoft.com/library/windows/desktop/bb774736).  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)

