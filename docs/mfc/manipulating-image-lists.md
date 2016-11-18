---
title: "Manipulating Image Lists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "image lists [C++], manipulating"
  - "lists [C++], image"
  - "CImageList class, manipulating"
ms.assetid: 043418f8-077e-4dce-b8bb-2b7b0d7b5156
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Manipulating Image Lists
The [Replace](../mfc/reference/cimagelist-class.md#cimagelist__replace) member function replaces an image in an image list ([CImageList](../mfc/reference/cimagelist-class.md)) with a new image. This function is also useful if you need to dynamically increase the number of images in an image list object. The [SetImageCount](../mfc/reference/cimagelist-class.md#cimagelist__setimagecount) function dynamically changes the number of images stored in the image list. If you increase the size of the image list, call **Replace** to add images to the new image slots. If you decrease the size of the image list, the images beyond the new size are freed.  
  
 The [Remove](../mfc/reference/cimagelist-class.md#cimagelist__remove) member function removes an image from an image list. The [Copy](../mfc/reference/cimagelist-class.md#cimagelist__copy) member function can copy or swap images within an image list. This function allows you to indicate whether the source image should be copied to the destination index or the source and destination images should be swapped.  
  
 To create a new image list by merging two image lists, use the appropriate overload of the [Create](../mfc/reference/cimagelist-class.md#cimagelist__create) member function. This overload of **Create** merges the first image of the existing image lists, storing the resultant image in a new image list object. The new image is created by drawing the second image transparently over the first. The mask for the new image is the result of performing a logical-OR operation on the bits of the masks for the two existing images.  
  
 This is repeated until all images are merged and added to the new image list object.  
  
 You can write the image information to an archive by calling the [Write](../mfc/reference/cimagelist-class.md#cimagelist__write) member function, and read it back by calling the [Read](../mfc/reference/cimagelist-class.md#cimagelist__read) member function.  
  
 The [GetSafeHandle](../mfc/reference/cimagelist-class.md#cimagelist__getsafehandle), [Attach](../mfc/reference/cimagelist-class.md#cimagelist__attach), and [Detach](../mfc/reference/cimagelist-class.md#cimagelist__detach) member functions allow you to manipulate the handle of the image list attached to the `CImageList` object, while the [DeleteImageList](../mfc/reference/cimagelist-class.md#cimagelist__deleteimagelist) member function deletes the image list without destroying the `CImageList` object.  
  
## See Also  
 [Using CImageList](../mfc/using-cimagelist.md)   
 [Controls](../mfc/controls-mfc.md)

