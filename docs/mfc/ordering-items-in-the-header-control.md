---
title: "Ordering Items in the Header Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DS_DRAGDROP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sequence"
  - "sequence, header control items"
  - "OrderToIndex method"
  - "DS_DRAGDROP notification"
  - "GetOrderArray method"
  - "SetOrderArray method"
  - "header controls, ordering items"
ms.assetid: 5aaef872-75b5-49c5-8fed-6f9a81fca812
caps.latest.revision: 9
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
# Ordering Items in the Header Control
Once you've [added items to a header control](../mfc/adding-items-to-the-header-control.md), you can manipulate or get information about their order with the following functions:  
  
-   [CHeaderCtrl::GetOrderArray](../mfc/reference/cheaderctrl-class.md#cheaderctrl__getorderarray) and [CHeaderCtrl::SetOrderArray](../mfc/reference/cheaderctrl-class.md#cheaderctrl__setorderarray)  
  
     Retrieves and sets the left-to-right order of header items.  
  
-   [CHeaderCtrl::OrderToIndex](../mfc/reference/cheaderctrl-class.md#cheaderctrl__ordertoindex).  
  
     Retrieves the index value for a specific header item.  
  
 In addition to the previous member functions, the `HDS_DRAGDROP` style allows the user to drag and drop header items within the header control. For more information, see [Providing Drag-and-Drop Support for Header Items](../mfc/providing-drag-and-drop-support-for-header-items.md).  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)

