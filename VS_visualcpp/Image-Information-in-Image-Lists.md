---
title: "Image Information in Image Lists"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Image Information in Image Lists
[CImageList](../VS_visualcpp/CImageList-Class.md) includes a number of functions that retrieve information from an image list. The [GetImageInfo](../Topic/CImageList::GetImageInfo.md) member function fills an `IMAGEINFO` structure with information about a single image, including the handles of the image and mask bitmaps, the number of color planes and bits per pixel, and the bounding rectangle of the image within the image bitmap. You can use this information to directly manipulate the bitmaps for the image.  
  
 The [GetImageCount](../Topic/CImageList::GetImageCount.md) member function retrieves the number of images in an image list.  
  
 You can create an icon based on an image and mask in an image list by using the [ExtractIcon](../Topic/CImageList::ExtractIcon.md) member function. The function returns the handle of the new icon.  
  
## See Also  
 [Using CImageList](../VS_visualcpp/Using-CImageList.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)