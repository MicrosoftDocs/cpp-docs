---
title: "Ordering Items in the Header Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["DS_DRAGDROP"]
dev_langs: ["C++"]
helpviewer_keywords: ["sequence [MFC]", "sequence [MFC], header control items", "OrderToIndex method [MFC]", "DS_DRAGDROP notification [MFC]", "GetOrderArray method [MFC]", "SetOrderArray method [MFC]", "header controls [MFC], ordering items"]
ms.assetid: 5aaef872-75b5-49c5-8fed-6f9a81fca812
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Ordering Items in the Header Control
Once you've [added items to a header control](../mfc/adding-items-to-the-header-control.md), you can manipulate or get information about their order with the following functions:  
  
-   [CHeaderCtrl::GetOrderArray](../mfc/reference/cheaderctrl-class.md#getorderarray) and [CHeaderCtrl::SetOrderArray](../mfc/reference/cheaderctrl-class.md#setorderarray)  
  
     Retrieves and sets the left-to-right order of header items.  
  
-   [CHeaderCtrl::OrderToIndex](../mfc/reference/cheaderctrl-class.md#ordertoindex).  
  
     Retrieves the index value for a specific header item.  
  
 In addition to the previous member functions, the HDS_DRAGDROP style allows the user to drag and drop header items within the header control. For more information, see [Providing Drag-and-Drop Support for Header Items](../mfc/providing-drag-and-drop-support-for-header-items.md).  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)

