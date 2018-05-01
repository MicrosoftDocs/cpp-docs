---
title: "Image Information in Image Lists | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImageList class, image information in"
  - "image lists [C++], image information in"
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Image Information in Image Lists
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Image Information in Image Lists](https://docs.microsoft.com/cpp/mfc/image-information-in-image-lists).  
  
  
CImageList](../Topic/CImageList%20Class.md) includes a number of functions that retrieve information from an image list. The [GetImageInfo](../mfc/reference/cimagelist-class.md#getimageinfo) member function fills an `IMAGEINFO` structure with information about a single image, including the handles of the image and mask bitmaps, the number of color planes and bits per pixel, and the bounding rectangle of the image within the image bitmap. You can use this information to directly manipulate the bitmaps for the image.  
  
 The [GetImageCount](../mfc/reference/cimagelist-class.md#getimagecount) member function retrieves the number of images in an image list.  
  
 You can create an icon based on an image and mask in an image list by using the [ExtractIcon](../mfc/reference/cimagelist-class.md#extracticon) member function. The function returns the handle of the new icon.  
  
## See Also  
 [Using CImageList](../mfc/using-cimagelist.md)   
 [Controls](../mfc/controls-mfc.md)





