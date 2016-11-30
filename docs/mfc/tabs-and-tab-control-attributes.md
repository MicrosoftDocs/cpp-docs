---
title: "Tabs and Tab Control Attributes | Microsoft Docs"
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
  - "attributes [C++], reference topics"
  - "tab controls, attributes"
  - "tabs"
  - "tabs, attributes"
  - "CTabCtrl class, tab control attributes"
ms.assetid: ecf190cb-f323-4751-bfdb-766dbe6bb553
caps.latest.revision: 12
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
# Tabs and Tab Control Attributes
You have considerable control over the appearance and behavior of tabs that make up a tab control ([CTabCtrl](../mfc/reference/ctabctrl-class.md)). Each tab can have a label, an icon, an item state, and an application-defined 32-bit value associated with it. For each tab, you can display the icon, the label, or both.  
  
 In addition, each tab item can have three possible states: pressed, unpressed, or highlighted. This state can only be set by modifying an existing tab item. To modify an existing tab item, retrieve it with a call to [GetItem](../mfc/reference/ctabctrl-class.md#ctabctrl__getitem), modify the `TCITEM` structure (specifically the **dwState** and **dwStateMask** data members), and then return the modified `TCITEM` structure with a call to [SetItem](../mfc/reference/ctabctrl-class.md#ctabctrl__setitem). If you need to clear the item states of all the tab items in a `CTabCtrl` object, make a call to [DeselectAll](../mfc/reference/ctabctrl-class.md#ctabctrl__deselectall). This function resets the state of all tab items or all items except the one currently selected.  
  
 The following code clears the state of all tab items and then modifies the state of the third item:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#32](../mfc/codesnippet/cpp/tabs-and-tab-control-attributes_1.cpp)]  
  
 For more information about tab attributes, see [Tabs and Tab Attributes](http://msdn.microsoft.com/library/windows/desktop/bb760550) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)]. For more information about adding tabs to a tab control, see [Adding Tabs to a Tab Control](../mfc/adding-tabs-to-a-tab-control.md) later in this topic.  
  
## See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)

