---
title: "Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tool tips [C++], creating"
  - "CToolTipCtrl class, using"
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
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
# Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object
Here is an example of [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) usage:  
  
### To create and manipulate a CToolTipCtrl  
  
1.  Construct the `CToolTipCtrl` object.  
  
2.  Call [Create](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__create) to create the Windows tool tip common control and attach it to the `CToolTipCtrl` object.  
  
3.  Call [AddTool](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__addtool) to register a tool with the tool tip control, so that the information stored in the tool tip is displayed when the cursor is on the tool.  
  
4.  Call [SetToolInfo](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__settoolinfo) to set the information that a tool tip maintains for a tool.  
  
5.  Call [SetToolRect](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__settoolrect) to set a new bounding rectangle for a tool.  
  
6.  Call [HitTest](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__hittest) to test a point to determine whether it is within the bounding rectangle of the given tool and, if so, retrieve information about the tool.  
  
7.  Call [GetToolCount](../mfc/reference/ctooltipctrl-class.md#ctooltipctrl__gettoolcount) to retrieve a count of the tools registered with the tool tip control.  
  
## See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls-mfc.md)

