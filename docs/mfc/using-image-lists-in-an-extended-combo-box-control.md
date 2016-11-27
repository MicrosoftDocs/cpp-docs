---
title: "Using Image Lists in an Extended Combo Box Control | Microsoft Docs"
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
  - "image lists [C++], combo boxes"
  - "extended combo boxes, images"
  - "images [C++], combo box items"
ms.assetid: dfff25fe-af70-47a2-8032-3901d1e6842d
caps.latest.revision: 11
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
# Using Image Lists in an Extended Combo Box Control
The main feature of extended combo box controls is the ability to associate images from an image list with individual items in a combo box control. Each item is able to display three different images: one for its selected state, one for its nonselected state, and a third for an overlay image.  
  
 The following procedure associates an image list with an extended combo box control:  
  
### To associate an image list with an extended combo box control  
  
1.  Construct a new image list (or use an existing image list object), using the [CImageList](../mfc/reference/cimagelist-class.md) constructor and storing the resultant pointer.  
  
2.  Initialize the new image list object by calling [CImageList::Create](../mfc/reference/cimagelist-class.md#cimagelist__create). The following code is one example of this call.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#10](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_1.cpp)]  
  
3.  Add optional images for each possible state: selected or nonselected, and an overlay. The following code adds three predefined images.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#11](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_2.cpp)]  
  
4.  Associate the image list with the control with a call to [CComboBoxEx::SetImageList](../mfc/reference/ccomboboxex-class.md#ccomboboxex__setimagelist).  
  
 Once the image list has been associated with the control, you can individually specify the images each item will use for the three possible states. For more information, see [Setting the Images for an Individual Item](../mfc/setting-the-images-for-an-individual-item.md).  
  
## See Also  
 [Using CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controls](../mfc/controls-mfc.md)

