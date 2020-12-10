---
description: "Learn more about: Using CImageList"
title: "Using CImageList"
ms.date: "11/04/2016"
helpviewer_keywords: ["image list control", "CImageList class [MFC], using"]
ms.assetid: 3d2a909e-d641-46b7-aada-81cab1a29b41
---
# Using CImageList

An image list, represented by class [CImageList](../mfc/reference/cimagelist-class.md), is a collection of same-sized images, each of which can be referred to by its index. Image lists are used to efficiently manage large sets of icons or bitmaps. Image lists are not themselves controls since they are not windows; however, they are used with several different types of controls, including list controls ([CListCtrl](../mfc/reference/clistctrl-class.md)), tree controls ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)), and tab controls ([CTabCtrl](../mfc/reference/ctabctrl-class.md)).

All images in an image list are contained in a single, wide bitmap in screen-device format. An image list may also include a monochrome bitmap that contains masks used to draw images transparently (icon style). `CImageList` provides member functions that enable you to draw images, create and destroy image lists, add and remove images, replace images, merge images, and drag images.

## What do you want to know more about

- [Types of Image Lists](../mfc/types-of-image-lists.md)

- [Using an Image List](../mfc/using-an-image-list.md)

- [Manipulating Image Lists](../mfc/manipulating-image-lists.md)

- [Drawing Images from an Image List](../mfc/drawing-images-from-an-image-list.md)

- [Image Overlays in Image Lists](../mfc/image-overlays-in-image-lists.md)

- [Dragging Images from an Image List](../mfc/dragging-images-from-an-image-list.md)

- [Image Information in Image Lists](../mfc/image-information-in-image-lists.md)

## See also

[Controls](../mfc/controls-mfc.md)
