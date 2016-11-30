---
title: "Manipulating the Tool Tip Control | Microsoft Docs"
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
  - "CToolTipCtrl class, manipulating tool tip attributes"
  - "tool tips [C++], attributes"
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
caps.latest.revision: 11
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
# Manipulating the Tool Tip Control
Class `CToolTipCtrl` provides a group of member functions that control the various attributes of the `CToolTipCtrl` object and the tool tip window.  
  
 The initial, pop-up, and reshow durations for the tool tip windows can be set and retrieved with calls to [GetDelayTime](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__getdelaytime) and [SetDelayTime](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__setdelaytime).  
  
 Change the appearance of the tool tip windows with the following functions:  
  
-   [GetMargin](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__getmargin) and [SetMargin](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__setmargin) Retrieves and sets the width between the tool tip border and the tool tip text.  
  
-   [GetMaxTipWidth](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__getmaxtipwidth) and [SetMaxTipWidth](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__setmaxtipwidth) Retrieves and sets the maximum width of the tool tip window.  
  
-   [GetTipBkColor](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__gettipbkcolor) and [SetTipBkColor](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__settipbkcolor) Retrieves and sets the background color of the tool tip window.  
  
-   [GetTipTextColor](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__gettiptextcolor) and [SetTipTextColor](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__settiptextcolor) Retrieves and sets the text color of the tool tip window.  
  
 In order for the tool tip control to be notified of important messages, such as **WM_LBUTTONXXX** messages, you must relay the messages to your tool tip control. The best method for this relay is to make a call to [CToolTipCtrl::RelayEvent](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__relayevent), in the `PreTranslateMessage` function of the owner window. The following example illustrates one possible method (assuming the tool tip control is called `m_ToolTip`):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#41](../mfc/codesnippet/cpp/manipulating-the-tool-tip-control_1.cpp)]  
  
 To immediately remove a tool tip window, call the [Pop](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__pop) member function.  
  
## See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls-mfc.md)

