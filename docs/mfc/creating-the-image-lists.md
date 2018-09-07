---
title: "Creating the Image Lists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["CListCtrl class [MFC], creating image lists for", "image lists [MFC], creating for CListCtrl", "lists [MFC], image"]
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Creating the Image Lists
Creating image lists is the same whether you use [CListView](../mfc/reference/clistview-class.md) or [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
> [!NOTE]
>  You only need image lists if your list control includes the `LVS_ICON` style.  
  
 Use class `CImageList` to create one or more image lists (for full-size icons, small icons, and states). See [CImageList](../mfc/reference/cimagelist-class.md), and see [List View Image Lists](/windows/desktop/Controls/using-list-view-controls) in the Windows SDK.  
  
 Call [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#setimagelist) for each image list; pass a pointer to the appropriate `CImageList` object.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)

