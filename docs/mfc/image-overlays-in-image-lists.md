---
title: "Image Overlays in Image Lists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["overlays [MFC]", "image lists [MFC], image overlays in", "CImageList class [MFC], image overlays in"]
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Image Overlays in Image Lists
Every image list ([CImageList](../mfc/reference/cimagelist-class.md)) includes a list of images to use as overlay masks. An "overlay mask" is an image drawn transparently over another image. Any image can be used as an overlay mask. You can specify up to four overlay masks per image list.  
  
 You add the index of an image to the list of overlay masks by using the [SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) member function, the index of an image, and the index of an overlay mask. Note that the indices for the overlay masks are one-based rather than zero-based.  
  
 You draw an overlay mask over an image using a single call to `Draw`. The parameters include the index of the image to draw and the index of an overlay mask. You must use the [INDEXTOOVERLAYMASK](http://msdn.microsoft.com/library/windows/desktop/bb761408) macro to specify the index of the overlay mask. You can also specify an overlay image when calling the [DrawIndirect](../mfc/reference/cimagelist-class.md#drawindirect) member function.  
  
## See Also  
 [Using CImageList](../mfc/using-cimagelist.md)   
 [Controls](../mfc/controls-mfc.md)

