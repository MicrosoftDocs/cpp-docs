---
title: "Types of Image Lists"
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
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
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
# Types of Image Lists
There are two types of image lists ([CImageList](../VS_visualcpp/CImageList-Class.md)): nonmasked and masked. A "nonmasked image list" consists of a color bitmap that contains one or more images. A "masked image list" consists of two bitmaps of equal size. The first is a color bitmap that contains the images, and the second is a monochrome bitmap that contains a series of masks — one for each image in the first bitmap.  
  
 One of the overloads of the **Create** member function takes a flag to indicate whether or not the image list is masked. (The other overloads create masked image lists.)  
  
 When a nonmasked image is drawn, it is simply copied into the target device context; that is, it is drawn over the existing background color of the device context. When a masked image is drawn, the bits of the image are combined with the bits of the mask, typically producing transparent areas in the bitmap where the background color of the target device context shows through. You can specify several drawing styles when drawing a masked image. For example, you can specify that the image be dithered to indicate a selected object.  
  
## See Also  
 [Using CImageList](../VS_visualcpp/Using-CImageList.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)