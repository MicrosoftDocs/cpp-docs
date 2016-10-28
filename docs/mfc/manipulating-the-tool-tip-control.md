---
title: "Manipulating the Tool Tip Control"
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
  - "CToolTipCtrl class, manipulating tool tip attributes"
  - "tool tips [C++], attributes"
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
caps.latest.revision: 9
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
# Manipulating the Tool Tip Control
Class `CToolTipCtrl` provides a group of member functions that control the various attributes of the `CToolTipCtrl` object and the tool tip window.  
  
 The initial, pop-up, and reshow durations for the tool tip windows can be set and retrieved with calls to [GetDelayTime](../Topic/CToolTipCtrl::GetDelayTime.md) and [SetDelayTime](../Topic/CToolTipCtrl::SetDelayTime.md).  
  
 Change the appearance of the tool tip windows with the following functions:  
  
-   [GetMargin](../Topic/CToolTipCtrl::GetMargin.md) and [SetMargin](../Topic/CToolTipCtrl::SetMargin.md) Retrieves and sets the width between the tool tip border and the tool tip text.  
  
-   [GetMaxTipWidth](../Topic/CToolTipCtrl::GetMaxTipWidth.md) and [SetMaxTipWidth](../Topic/CToolTipCtrl::SetMaxTipWidth.md) Retrieves and sets the maximum width of the tool tip window.  
  
-   [GetTipBkColor](../Topic/CToolTipCtrl::GetTipBkColor.md) and [SetTipBkColor](../Topic/CToolTipCtrl::SetTipBkColor.md) Retrieves and sets the background color of the tool tip window.  
  
-   [GetTipTextColor](../Topic/CToolTipCtrl::GetTipTextColor.md) and [SetTipTextColor](../Topic/CToolTipCtrl::SetTipTextColor.md) Retrieves and sets the text color of the tool tip window.  
  
 In order for the tool tip control to be notified of important messages, such as **WM_LBUTTONXXX** messages, you must relay the messages to your tool tip control. The best method for this relay is to make a call to [CToolTipCtrl::RelayEvent](../Topic/CToolTipCtrl::RelayEvent.md), in the `PreTranslateMessage` function of the owner window. The following example illustrates one possible method (assuming the tool tip control is called `m_ToolTip`):  
  
 [!code[NVC_MFCControlLadenDialog#41](../mfc/codesnippet/CPP/manipulating-the-tool-tip-control_1.cpp)]  
  
 To immediately remove a tool tip window, call the [Pop](../Topic/CToolTipCtrl::Pop.md) member function.  
  
## See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls--mfc-.md)