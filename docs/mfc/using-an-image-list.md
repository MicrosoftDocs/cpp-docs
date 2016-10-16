---
title: "Using an Image List"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lists [C++], image"
  - "CImageList class, using"
  - "image lists [C++]"
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
caps.latest.revision: 8
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
# Using an Image List
Typical usage of an image list follows the pattern below:  
  
-   Construct a [CImageList](../mfcref/cimagelist-class.md) object and call one of the overloads of its [Create](../Topic/CImageList::Create.md) function to create an image list and attach it to the `CImageList` object.  
  
-   If you didn't add images when you created the image list, add images to the image list by calling the [Add](../Topic/CImageList::Add.md) or [Read](../Topic/CImageList::Read.md) member function.  
  
-   Associate the image list with a control by calling the appropriate member function of that control, or draw images from the image list yourself using the image list's [Draw](../Topic/CImageList::Draw.md) member function.  
  
-   Perhaps allow the user to drag an image, using the image list's built-in support for dragging.  
  
> [!NOTE]
>  If the image list was created with the **new** operator, you must destroy the `CImageList` object when you are done with it.  
  
## See Also  
 [Using CImageList](../mfc/using-cimagelist.md)   
 [Controls](../mfc/controls--mfc-.md)