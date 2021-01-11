---
description: "Learn more about: Manipulating Image Lists"
title: "Manipulating Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["image lists [MFC], manipulating", "lists [MFC], image", "CImageList class [MFC], manipulating"]
ms.assetid: 043418f8-077e-4dce-b8bb-2b7b0d7b5156
---
# Manipulating Image Lists

The [Replace](reference/cimagelist-class.md#replace) member function replaces an image in an image list ([CImageList](reference/cimagelist-class.md)) with a new image. This function is also useful if you need to dynamically increase the number of images in an image list object. The [SetImageCount](reference/cimagelist-class.md#setimagecount) function dynamically changes the number of images stored in the image list. If you increase the size of the image list, call `Replace` to add images to the new image slots. If you decrease the size of the image list, the images beyond the new size are freed.

The [Remove](reference/cimagelist-class.md#remove) member function removes an image from an image list. The [Copy](reference/cimagelist-class.md#copy) member function can copy or swap images within an image list. This function allows you to indicate whether the source image should be copied to the destination index or the source and destination images should be swapped.

To create a new image list by merging two image lists, use the appropriate overload of the [Create](reference/cimagelist-class.md#create) member function. This overload of `Create` merges the first image of the existing image lists, storing the resultant image in a new image list object. The new image is created by drawing the second image transparently over the first. The mask for the new image is the result of performing a logical-OR operation on the bits of the masks for the two existing images.

This is repeated until all images are merged and added to the new image list object.

You can write the image information to an archive by calling the [Write](reference/cimagelist-class.md#write) member function, and read it back by calling the [Read](reference/cimagelist-class.md#read) member function.

The [GetSafeHandle](reference/cimagelist-class.md#getsafehandle), [Attach](reference/cimagelist-class.md#attach), and [Detach](reference/cimagelist-class.md#detach) member functions allow you to manipulate the handle of the image list attached to the `CImageList` object, while the [DeleteImageList](reference/cimagelist-class.md#deleteimagelist) member function deletes the image list without destroying the `CImageList` object.

## See also

[Using CImageList](using-cimagelist.md)<br/>
[Controls](controls-mfc.md)
