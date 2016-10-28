---
title: "Settings for the Progress Control"
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
  - "CProgressCtrl class, settings"
  - "progress controls [C++], settings"
ms.assetid: f4616e91-74fa-4000-ba0d-d3ddc0ee075b
caps.latest.revision: 8
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
# Settings for the Progress Control
The basic settings for the progress control ([CProgressCtrl](../mfcref/cprogressctrl-class.md)) are the range and current position. The range represents the entire duration of the operation. The current position represents the progress that your application has made toward completing the operation. Any changes to the range or position cause the progress control to redraw itself.  
  
 By default, the range is set to 0 – 100, and the initial position is set to 0. To retrieve the current range settings for the progress control, use the [GetRange](../Topic/CProgressCtrl::GetRange.md) member function. To change the range, use the [SetRange](../Topic/CProgressCtrl::SetRange.md) member function.  
  
 To set the position, use [SetPos](../Topic/CProgressCtrl::SetPos.md). To retrieve the current position without specifying a new value, use [GetPos](../Topic/CProgressCtrl::GetPos.md). For example, you might want to simply query on the status of the current operation.  
  
 To step the current position of the progress control, use [StepIt](../Topic/CProgressCtrl::StepIt.md). To set the amount of each step, use [SetStep](../Topic/CProgressCtrl::SetStep.md)  
  
## See Also  
 [Using CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controls](../mfc/controls--mfc-.md)