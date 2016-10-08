---
title: "Initializing the Parts of a CStatusBarCtrl Object"
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
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
caps.latest.revision: 10
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
# Initializing the Parts of a CStatusBarCtrl Object
By default, a status bar displays status information using separate panes. These panes (also referred to as parts) can contain either a text string, an icon, or both.  
  
 Use [SetParts](../Topic/CStatusBarCtrl::SetParts.md) to define how many parts, and the length, the status bar will have. After you have created the parts of the status bar, make calls to [SetText](../Topic/CStatusBarCtrl::SetText.md) and [SetIcon](../Topic/CStatusBarCtrl::SetIcon.md) to set the text or icon for a specific part of the status bar. Once the part has been successfully set, the control is automatically redrawn.  
  
 The following example initializes an existing `CStatusBarCtrl` object (`m_StatusBarCtrl`) with four panes and then sets an icon (IDI_ICON1) and some text in the second part.  
  
 [!CODE [NVC_MFCControlLadenDialog#31](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#31)]  
  
 For more information on setting the mode of a `CStatusBarCtrl` object to simple, see [Setting the Mode of a CStatusBarCtrl Object](../VS_visualcpp/Setting-the-Mode-of-a-CStatusBarCtrl-Object.md).  
  
## See Also  
 [Using CStatusBarCtrl](../VS_visualcpp/Using-CStatusBarCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)