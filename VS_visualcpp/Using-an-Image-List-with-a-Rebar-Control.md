---
title: "Using an Image List with a Rebar Control"
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
ms.assetid: 1a5836ac-019a-46aa-8741-b35c3376b839
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
# Using an Image List with a Rebar Control
Each rebar band can contain, among other things, an image from an associated image list. The following procedure details the necessary steps for displaying an image in a rebar band.  
  
### To display images in a rebar band  
  
1.  Attach an image list to your rebar control object by making a call to [SetImageList](../Topic/CReBarCtrl::SetImageList.md), passing a pointer to an existing image list.  
  
2.  Modify the **REBARBANDINFO** structure to assign an image to a rebar band:  
  
    -   Set the **fMask** member to **RBBIM_IMAGE**, using the bitwise OR operator to include additional flags as necessary.  
  
    -   Set the `iImage` member to the image list index of the image to be displayed.  
  
3.  Initialize any remaining data members, such as the size, text, and handle of the contained child window, with the necessary information.  
  
4.  Insert the new band (with the image) with a call to [CReBarCtrl::InsertBand](../Topic/CReBarCtrl::InsertBand.md), passing the **REBARBANDINFO** structure.  
  
 The following example assumes that an existing image list object with two images was attached to the rebar control object (`m_wndReBar`). A new rebar band (defined by `rbi`), containing the first image, is added with a call to `InsertBand`:  
  
 [!CODE [NVC_MFCControlLadenDialog#28](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#28)]  
  
## See Also  
 [Using CReBarCtrl](../VS_visualcpp/Using-CReBarCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)