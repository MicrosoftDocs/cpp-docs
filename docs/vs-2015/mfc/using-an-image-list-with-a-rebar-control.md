---
title: "Using an Image List with a Rebar Control | Microsoft Docs"
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
  - "image lists [C++], rebar controls"
  - "rebar controls, image lists"
ms.assetid: 1a5836ac-019a-46aa-8741-b35c3376b839
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using an Image List with a Rebar Control
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using an Image List with a Rebar Control](https://docs.microsoft.com/cpp/mfc/using-an-image-list-with-a-rebar-control).  
  
  
Each rebar band can contain, among other things, an image from an associated image list. The following procedure details the necessary steps for displaying an image in a rebar band.  
  
### To display images in a rebar band  
  
1.  Attach an image list to your rebar control object by making a call to [SetImageList](../mfc/reference/crebarctrl-class.md#setimagelist), passing a pointer to an existing image list.  
  
2.  Modify the **REBARBANDINFO** structure to assign an image to a rebar band:  
  
    -   Set the **fMask** member to **RBBIM_IMAGE**, using the bitwise OR operator to include additional flags as necessary.  
  
    -   Set the `iImage` member to the image list index of the image to be displayed.  
  
3.  Initialize any remaining data members, such as the size, text, and handle of the contained child window, with the necessary information.  
  
4.  Insert the new band (with the image) with a call to [CReBarCtrl::InsertBand](../mfc/reference/crebarctrl-class.md#crebarctrl__insertband), passing the **REBARBANDINFO** structure.  
  
 The following example assumes that an existing image list object with two images was attached to the rebar control object (`m_wndReBar`). A new rebar band (defined by `rbi`), containing the first image, is added with a call to `InsertBand`:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#28](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCControlLadenDialog/Cpp/MFCControlLadenDialogDlg.cpp#28)]  
  
## See Also  
 [Using CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controls](../mfc/controls-mfc.md)





