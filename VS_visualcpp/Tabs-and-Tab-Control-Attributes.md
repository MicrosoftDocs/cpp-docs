---
title: "Tabs and Tab Control Attributes"
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
ms.assetid: ecf190cb-f323-4751-bfdb-766dbe6bb553
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
# Tabs and Tab Control Attributes
You have considerable control over the appearance and behavior of tabs that make up a tab control ([CTabCtrl](../VS_visualcpp/CTabCtrl-Class.md)). Each tab can have a label, an icon, an item state, and an application-defined 32-bit value associated with it. For each tab, you can display the icon, the label, or both.  
  
 In addition, each tab item can have three possible states: pressed, unpressed, or highlighted. This state can only be set by modifying an existing tab item. To modify an existing tab item, retrieve it with a call to [GetItem](../Topic/CTabCtrl::GetItem.md), modify the `TCITEM` structure (specifically the **dwState** and **dwStateMask** data members), and then return the modified `TCITEM` structure with a call to [SetItem](../Topic/CTabCtrl::SetItem.md). If you need to clear the item states of all the tab items in a `CTabCtrl` object, make a call to [DeselectAll](../Topic/CTabCtrl::DeselectAll.md). This function resets the state of all tab items or all items except the one currently selected.  
  
 The following code clears the state of all tab items and then modifies the state of the third item:  
  
 [!CODE [NVC_MFCControlLadenDialog#32](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#32)]  
  
 For more information about tab attributes, see [Tabs and Tab Attributes](http://msdn.microsoft.com/library/windows/desktop/bb760550) in the Windows SDK. For more information about adding tabs to a tab control, see [Adding Tabs to a Tab Control](../VS_visualcpp/Adding-Tabs-to-a-Tab-Control.md) later in this topic.  
  
## See Also  
 [Using CTabCtrl](../VS_visualcpp/Using-CTabCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)