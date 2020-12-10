---
description: "Learn more about: Setting the Images for an Individual Item"
title: "Setting the Images for an Individual Item"
ms.date: "11/04/2016"
helpviewer_keywords: ["extended combo boxes [MFC], images", "images [MFC], combo box items"]
ms.assetid: bde83db8-23a7-4e35-837a-c86447d2c0af
---
# Setting the Images for an Individual Item

The different types of images used by the extended combo box item are determined by the values in the *iImage*, *iSelectedImage*, and *iOverlay* members of the [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) structure. Each value is the index of an image in the associated image list of the control. By default, these members are set to 0, causing the control to display no image for the item. If you want to use images for a specific item, you can modify the structure accordingly, either when inserting the combo box item or by modifying an existing combo box item.

## Setting the Image for a New Item

If you are inserting a new item, initialize the *iImage*, *iSelectedImage*, and *iOverlay* structure members with the proper values and then insert the item with a call to [CComboBoxEx::InsertItem](../mfc/reference/ccomboboxex-class.md#insertitem).

The following example inserts a new extended combo box item (`cbi`) into the extended combo box control (`m_comboEx`), supplying indices for all three image states:

[!code-cpp[NVC_MFCControlLadenDialog#12](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_1.cpp)]

## Setting the Image for an Existing Item

If you are modifying an existing item, you need to work with the *mask* member of a **COMBOBOXEXITEM** structure.

#### To modify an existing item to use images

1. Declare a **COMBOBOXEXITEM** structure and set the *mask* data member to the values you are interested in modifying.

1. Using this structure, make a call to [CComboBoxEx::GetItem](../mfc/reference/ccomboboxex-class.md#getitem).

1. Modify the *mask*, *iImage*, and *iSelectedImage* members of the newly returned structure, using the appropriate values.

1. Make a call to [CComboBoxEx::SetItem](../mfc/reference/ccomboboxex-class.md#setitem), passing in the modified structure.

The following example demonstrates this procedure by swapping the selected and unselected images of the third extended combo box item:

[!code-cpp[NVC_MFCControlLadenDialog#13](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_2.cpp)]

## See also

[Using CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controls](../mfc/controls-mfc.md)
