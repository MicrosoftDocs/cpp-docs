---
title: "Creating the Image Lists"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListCtrl class, creating image lists for"
  - "image lists [C++], creating for CListCtrl"
  - "lists [C++], image"
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
caps.latest.revision: 9
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
# Creating the Image Lists
Creating image lists is the same whether you use [CListView](../mfcref/clistview-class.md) or [CListCtrl](../mfcref/clistctrl-class.md).  
  
> [!NOTE]
>  You only need image lists if your list control includes the `LVS_ICON` style.  
  
 Use class `CImageList` to create one or more image lists (for full-size icons, small icons, and states). See [CImageList](../mfcref/cimagelist-class.md), and see [List View Image Lists](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Call [CListCtrl::SetImageList](../Topic/CListCtrl::SetImageList.md) for each image list; pass a pointer to the appropriate `CImageList` object.  
  
## See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls--mfc-.md)