---
title: "Creating the Image Lists | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListCtrl class, creating image lists for"
  - "image lists [C++], creating for CListCtrl"
  - "lists [C++], image"
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating the Image Lists
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating the Image Lists](https://docs.microsoft.com/cpp/mfc/creating-the-image-lists).  
  
  
Creating image lists is the same whether you use [CListView](../mfc/reference/clistview-class.md) or [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
> [!NOTE]
>  You only need image lists if your list control includes the `LVS_ICON` style.  
  
 Use class `CImageList` to create one or more image lists (for full-size icons, small icons, and states). See [CImageList](../mfc/reference/cimagelist-class.md), and see [List View Image Lists](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the [!INCLUDE[winSDK](../includes/winsdk-md.md)].  
  
 Call [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#clistctrl__setimagelist) for each image list; pass a pointer to the appropriate `CImageList` object.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)





