---
title: "Using Image Lists with Header Controls"
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
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
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
# Using Image Lists with Header Controls
Header items have the ability to display an image within a header item. This image, stored in an associated image list, is 16 x 16 pixels and has the same characteristics as the icon images used in a list view control. In order to implement this behavior successfully, you must first create and initialize the image list, associate the list with the header control, and then modify the attributes of the header item that will display the image.  
  
 The following procedure illustrates the details, using a pointer to a header control (`m_pHdrCtrl`) and a pointer to an image list (`m_pHdrImages`).  
  
### To display an image in a header item  
  
1.  Construct a new image list (or use an existing image list object) using the [CImageList](../VS_visualcpp/CImageList-Class.md) constructor, storing the resultant pointer.  
  
2.  Initialize the new image list object by calling [CImageList::Create](../Topic/CImageList::Create.md). The following code is one example of this call.  
  
     [!CODE [NVC_MFCControlLadenDialog#15](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#15)]  
  
3.  Add the images for each header item. The following code adds two predefined images.  
  
     [!CODE [NVC_MFCControlLadenDialog#16](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#16)]  
  
4.  Associate the image list with the header control with a call to [CHeaderCtrl::SetImageList](../Topic/CHeaderCtrl::SetImageList.md).  
  
5.  Modify the header item to display an image from the associated image list. The following example assigns the first image, from `m_phdrImages`, to the first header item, `m_pHdrCtrl`.  
  
     [!CODE [NVC_MFCControlLadenDialog#17](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#17)]  
  
 For detailed information on the parameter values used, consult the pertinent [CHeaderCtrl](../VS_visualcpp/CHeaderCtrl-Class.md).  
  
> [!NOTE]
>  It is possible to have multiple controls using the same image list. For instance, in a standard list view control, there could be an image list (of 16 x 16 pixel images) used by both the small icon view of a list view control and the header items of the list view control.  
  
## See Also  
 [Using CHeaderCtrl](../VS_visualcpp/Using-CHeaderCtrl.md)