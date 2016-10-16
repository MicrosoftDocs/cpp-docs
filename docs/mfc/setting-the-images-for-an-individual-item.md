---
title: "Setting the Images for an Individual Item"
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
  - "extended combo boxes, images"
  - "images [C++], combo box items"
ms.assetid: bde83db8-23a7-4e35-837a-c86447d2c0af
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
# Setting the Images for an Individual Item
The different types of images used by the extended combo box item are determined by the values in the `iImage`, **iSelectedImage**, and **iOverlay** members of the [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746) structure. Each value is the index of an image in the associated image list of the control. By default, these members are set to 0, causing the control to display no image for the item. If you want to use images for a specific item, you can modify the structure accordingly, either when inserting the combo box item or by modifying an existing combo box item.  
  
## Setting the Image for a New Item  
 If you are inserting a new item, initialize the `iImage`, **iSelectedImage**, and **iOverlay** structure members with the proper values and then insert the item with a call to [CComboBoxEx::InsertItem](../Topic/CComboBoxEx::InsertItem.md).  
  
 The following example inserts a new extended combo box item (`cbi`) into the extended combo box control (`m_comboEx`), supplying indices for all three image states:  
  
 [!code[NVC_MFCControlLadenDialog#12](../mfc/codesnippet/CPP/setting-the-images-for-an-individual-item_1.cpp)]  
  
## Setting the Image for an Existing Item  
 If you are modifying an existing item, you need to work with the **mask** member of a **COMBOBOXEXITEM** structure.  
  
#### To modify an existing item to use images  
  
1.  Declare a **COMBOBOXEXITEM** structure and set the **mask** data member to the values you are interested in modifying.  
  
2.  Using this structure, make a call to [CComboBoxEx::GetItem](../Topic/CComboBoxEx::GetItem.md).  
  
3.  Modify the **mask**, `iImage`, and **iSelectedImage** members of the newly returned structure, using the appropriate values.  
  
4.  Make a call to [CComboBoxEx::SetItem](../Topic/CComboBoxEx::SetItem.md), passing in the modified structure.  
  
 The following example demonstrates this procedure by swapping the selected and unselected images of the third extended combo box item:  
  
 [!code[NVC_MFCControlLadenDialog#13](../mfc/codesnippet/CPP/setting-the-images-for-an-individual-item_2.cpp)]  
  
## See Also  
 [Using CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controls](../mfc/controls--mfc-.md)