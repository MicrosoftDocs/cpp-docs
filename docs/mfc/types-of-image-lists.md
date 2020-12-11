---
description: "Learn more about: Types of Image Lists"
title: "Types of Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["lists [MFC], image", "image lists [MFC], types of", "CImageList class [MFC], types"]
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
---
# Types of Image Lists

There are two types of image lists ([CImageList](../mfc/reference/cimagelist-class.md)): nonmasked and masked. A "nonmasked image list" consists of a color bitmap that contains one or more images. A "masked image list" consists of two bitmaps of equal size. The first is a color bitmap that contains the images, and the second is a monochrome bitmap that contains a series of masks — one for each image in the first bitmap.

One of the overloads of the `Create` member function takes a flag to indicate whether or not the image list is masked. (The other overloads create masked image lists.)

When a nonmasked image is drawn, it is simply copied into the target device context; that is, it is drawn over the existing background color of the device context. When a masked image is drawn, the bits of the image are combined with the bits of the mask, typically producing transparent areas in the bitmap where the background color of the target device context shows through. You can specify several drawing styles when drawing a masked image. For example, you can specify that the image be dithered to indicate a selected object.

## See also

[Using CImageList](../mfc/using-cimagelist.md)<br/>
[Controls](../mfc/controls-mfc.md)
