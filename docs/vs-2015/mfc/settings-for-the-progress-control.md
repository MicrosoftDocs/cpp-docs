---
title: "Settings for the Progress Control | Microsoft Docs"
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
  - "CProgressCtrl class, settings"
  - "progress controls [C++], settings"
ms.assetid: f4616e91-74fa-4000-ba0d-d3ddc0ee075b
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Settings for the Progress Control
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Settings for the Progress Control](https://docs.microsoft.com/cpp/mfc/settings-for-the-progress-control).  
  
  
The basic settings for the progress control ([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)) are the range and current position. The range represents the entire duration of the operation. The current position represents the progress that your application has made toward completing the operation. Any changes to the range or position cause the progress control to redraw itself.  
  
 By default, the range is set to 0 – 100, and the initial position is set to 0. To retrieve the current range settings for the progress control, use the [GetRange](../mfc/reference/cprogressctrl-class.md#getrange) member function. To change the range, use the [SetRange](../mfc/reference/cprogressctrl-class.md#setrange) member function.  
  
 To set the position, use [SetPos](../mfc/reference/cprogressctrl-class.md#setpos). To retrieve the current position without specifying a new value, use [GetPos](../mfc/reference/cprogressctrl-class.md#getpos). For example, you might want to simply query on the status of the current operation.  
  
 To step the current position of the progress control, use [StepIt](../mfc/reference/cprogressctrl-class.md#stepit). To set the amount of each step, use [SetStep](../mfc/reference/cprogressctrl-class.md#setstep)  
  
## See Also  
 [Using CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controls](../mfc/controls-mfc.md)





