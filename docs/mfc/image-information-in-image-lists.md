---
description: "Learn more about: Image Information in Image Lists"
title: "Image Information in Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["CImageList class [MFC], image information in", "image lists [MFC], image information in"]
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
---
# Image Information in Image Lists

[CImageList](reference/cimagelist-class.md) includes a number of functions that retrieve information from an image list. The [GetImageInfo](reference/cimagelist-class.md#getimageinfo) member function fills an `IMAGEINFO` structure with information about a single image, including the handles of the image and mask bitmaps, the number of color planes and bits per pixel, and the bounding rectangle of the image within the image bitmap. You can use this information to directly manipulate the bitmaps for the image.

The [GetImageCount](reference/cimagelist-class.md#getimagecount) member function retrieves the number of images in an image list.

You can create an icon based on an image and mask in an image list by using the [ExtractIcon](reference/cimagelist-class.md#extracticon) member function. The function returns the handle of the new icon.

## See also

[Using CImageList](using-cimagelist.md)<br/>
[Controls](controls-mfc.md)
