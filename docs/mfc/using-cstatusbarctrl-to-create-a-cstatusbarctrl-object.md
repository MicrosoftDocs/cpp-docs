---
title: "Using CStatusBarCtrl to Create a CStatusBarCtrl Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CStatusBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "status bar controls, creating"
  - "CStatusBarCtrl class, creating"
ms.assetid: 365c2b65-12de-49e6-9a2e-416c6ee10d60
caps.latest.revision: 10
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
# Using CStatusBarCtrl to Create a CStatusBarCtrl Object
Here is an example of a typical use of [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md):  
  
### To use a status bar control with parts  
  
1.  Construct the `CStatusBarCtrl` object.  
  
2.  Call [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__setminheight) if you want to set the minimum height of the status bar control's drawing area.  
  
3.  Call [SetBkColor](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__setbkcolor) to set the background color of the status bar control.  
  
4.  Call [SetParts](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__setparts) to set the number of parts in a status bar control and the coordinate of the right edge of each part.  
  
5.  Call [SetText](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__settext) to set the text in a given part of the status bar control. The message invalidates the portion of the control that has changed, causing it to display the new text when the control next receives the `WM_PAINT` message.  
  
 In some cases, the status bar only needs to display a line of text. In this case, make a call to [SetSimple](../mfc/reference/cstatusbarctrl-class.md#cstatusbarctrl__setsimple). This puts the status bar control into "simple" mode, which displays a single line of text.  
  
## See Also  
 [Using CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

