---
title: "Using CImageList"
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
ms.assetid: 3d2a909e-d641-46b7-aada-81cab1a29b41
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
# Using CImageList
An image list, represented by class [CImageList](../VS_visualcpp/CImageList-Class.md), is a collection of same-sized images, each of which can be referred to by its index. Image lists are used to efficiently manage large sets of icons or bitmaps. Image lists are not themselves controls since they are not windows; however, they are used with several different types of controls, including list controls ([CListCtrl](../VS_visualcpp/CListCtrl-Class.md)), tree controls ([CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)), and tab controls ([CTabCtrl](../VS_visualcpp/CTabCtrl-Class.md)).  
  
 All images in an image list are contained in a single, wide bitmap in screen-device format. An image list may also include a monochrome bitmap that contains masks used to draw images transparently (icon style). `CImageList` provides member functions that enable you to draw images, create and destroy image lists, add and remove images, replace images, merge images, and drag images.  
  
## What do you want to know more about?  
  
-   [Types of Image Lists](../VS_visualcpp/Types-of-Image-Lists.md)  
  
-   [Using an Image List](../VS_visualcpp/Using-an-Image-List.md)  
  
-   [Manipulating Image Lists](../VS_visualcpp/Manipulating-Image-Lists.md)  
  
-   [Drawing Images from an Image List](../VS_visualcpp/Drawing-Images-from-an-Image-List.md)  
  
-   [Image Overlays in Image Lists](../VS_visualcpp/Image-Overlays-in-Image-Lists.md)  
  
-   [Dragging Images from an Image List](../VS_visualcpp/Dragging-Images-from-an-Image-List.md)  
  
-   [Image Information in Image Lists](../VS_visualcpp/Image-Information-in-Image-Lists.md)  
  
## See Also  
 [Controls](../VS_visualcpp/Controls--MFC-.md)