---
description: "Learn more about: Tree Control Image Lists"
title: "Tree Control Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["images [MFC], lists in tree controls", "tree controls [MFC], image lists", "CTreeCtrl class [MFC], image lists"]
ms.assetid: f560c4f2-20d2-4d28-ac33-4017e65fb0a6
---
# Tree Control Image Lists

Each item in a tree control ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) can have a pair of bitmapped images associated with it. The images appear on the left side of an item's label. One image is displayed when the item is selected, and the other is displayed when the item is not selected. For example, an item might display an open folder when it is selected and a closed folder when it is not selected.

To use item images, you must create an image list by constructing a [CImageList](../mfc/reference/cimagelist-class.md) object and using the [CImageList::Create](../mfc/reference/cimagelist-class.md#create) function to create the associated image list. Then add the desired bitmaps to the list, and associate the list with the tree control by using the [SetImageList](../mfc/reference/ctreectrl-class.md#setimagelist) member function. By default, all items display the first image in the image list for both the selected and nonselected states. You can change the default behavior for a particular item by specifying the indexes of the selected and nonselected images when adding the item to the tree control using the [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) member function. You can change the indexes after adding an item by using the [SetItemImage](../mfc/reference/ctreectrl-class.md#setitemimage) member function.

A tree control's image lists can also contain overlay images, which are designed to be superimposed on item images. A nonzero value in bits 8 through 11 of a tree control item's state specifies the one-based index of an overlay image (0 indicates no overlay image). Because a 4-bit, one-based index is used, overlay images must be among the first 15 images in the image lists. For more information about tree control item states, see [Tree Control Item States Overview](../mfc/tree-control-item-states-overview.md) earlier in this topic.

If a state image list is specified, a tree control reserves space to the left of each item's icon for a state image. An application can use state images, such as checked and cleared check boxes, to indicate application-defined item states. A nonzero value in bits 12 through 15 specifies the one-based index of a state image (0 indicates no state image).

By specifying the **I_IMAGECALLBACK** value instead of the index of an image, you can delay specifying the selected or nonselected image until the item is about to be redrawn. **I_IMAGECALLBACK** directs the tree control to query the application for the index by sending the [TVN_GETDISPINFO](/windows/win32/Controls/tvn-getdispinfo) notification message.

The [GetImageList](../mfc/reference/ctreectrl-class.md#getimagelist) member function retrieves the handle of a tree control's image list. This function is useful if you need to add more images to the list. For more information about image lists, see [Using CImageList](../mfc/using-cimagelist.md), [CImageList](../mfc/reference/cimagelist-class.md) in the *MFC Reference*, and [Image Lists](/windows/win32/controls/image-lists) in the Windows SDK.

## See also

[Using CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
