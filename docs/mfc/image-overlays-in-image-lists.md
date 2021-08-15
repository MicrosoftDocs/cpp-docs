---
description: "Learn more about: Image Overlays in Image Lists"
title: "Image Overlays in Image Lists"
ms.date: "11/04/2016"
helpviewer_keywords: ["overlays [MFC]", "image lists [MFC], image overlays in", "CImageList class [MFC], image overlays in"]
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
---
# Image Overlays in Image Lists

Every image list ([CImageList](reference/cimagelist-class.md)) includes a list of images to use as overlay masks. An "overlay mask" is an image drawn transparently over another image. Any image can be used as an overlay mask. You can specify up to four overlay masks per image list.

You add the index of an image to the list of overlay masks by using the [SetOverlayImage](reference/cimagelist-class.md#setoverlayimage) member function, the index of an image, and the index of an overlay mask. Note that the indices for the overlay masks are one-based rather than zero-based.

You draw an overlay mask over an image using a single call to `Draw`. The parameters include the index of the image to draw and the index of an overlay mask. You must use the [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) macro to specify the index of the overlay mask. You can also specify an overlay image when calling the [DrawIndirect](reference/cimagelist-class.md#drawindirect) member function.

## See also

[Using CImageList](using-cimagelist.md)<br/>
[Controls](controls-mfc.md)
