---
title: "Using Image Lists in an Extended Combo Box Control"
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
ms.assetid: dfff25fe-af70-47a2-8032-3901d1e6842d
caps.latest.revision: 9
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
# Using Image Lists in an Extended Combo Box Control
The main feature of extended combo box controls is the ability to associate images from an image list with individual items in a combo box control. Each item is able to display three different images: one for its selected state, one for its nonselected state, and a third for an overlay image.  
  
 The following procedure associates an image list with an extended combo box control:  
  
### To associate an image list with an extended combo box control  
  
1.  Construct a new image list (or use an existing image list object), using the [CImageList](../VS_visualcpp/CImageList-Class.md) constructor and storing the resultant pointer.  
  
2.  Initialize the new image list object by calling [CImageList::Create](../Topic/CImageList::Create.md). The following code is one example of this call.  
  
     [!CODE [NVC_MFCControlLadenDialog#10](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#10)]  
  
3.  Add optional images for each possible state: selected or nonselected, and an overlay. The following code adds three predefined images.  
  
     [!CODE [NVC_MFCControlLadenDialog#11](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#11)]  
  
4.  Associate the image list with the control with a call to [CComboBoxEx::SetImageList](../Topic/CComboBoxEx::SetImageList.md).  
  
 Once the image list has been associated with the control, you can individually specify the images each item will use for the three possible states. For more information, see [Setting the Images for an Individual Item](../VS_visualcpp/Setting-the-Images-for-an-Individual-Item.md).  
  
## See Also  
 [Using CComboBoxEx](../VS_visualcpp/Using-CComboBoxEx.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)