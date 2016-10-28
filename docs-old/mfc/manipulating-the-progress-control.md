---
title: "Manipulating the Progress Control"
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
  - "CProgressCtrl class, working with"
  - "progress controls [C++], manipulating"
  - "CProgressCtrl class, manipulating"
  - "controlling progress controls"
  - "CProgressCtrl class, using"
ms.assetid: 9af561d1-980b-4003-a6da-ff79be15bf23
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
# Manipulating the Progress Control
There are three ways to change the current position of a progress control ([CProgressCtrl](../mfcref/cprogressctrl-class.md)).  
  
-   The position can be changed by a preset increment amount.  
  
-   The position can be changed by an arbitrary amount.  
  
-   The position can be changed to a specific value.  
  
### To change the position by a preset amount  
  
1.  Use the [SetStep](../Topic/CProgressCtrl::SetStep.md) member function to set the increment amount. By default, this value is 10. This value is typically set as one of the initial settings for the control. The step value can be negative.  
  
2.  Use the [StepIt](../Topic/CProgressCtrl::StepIt.md) member function to increment the position. This causes the control to redraw itself.  
  
    > [!NOTE]
    >  `StepIt` will cause the position to wrap. For example, given a range of 1 –100, a step of 20, and a position of 90, `StepIt` will set the position to 10.  
  
### To change the position by an arbitrary amount  
  
1.  Use the [OffsetPos](../Topic/CProgressCtrl::OffsetPos.md) member function to change the position. `OffsetPos` will accept negative values.  
  
    > [!NOTE]
    >  `OffsetPos`, unlike `StepIt`, will not wrap the position. The new position is adjusted to remain within the range.  
  
### To change the position to a specific value  
  
1.  Use the [SetPos](../Topic/CProgressCtrl::SetPos.md) member function to set the position to a specific value. If necessary, the new position is adjusted to be within the range.  
  
 Typically, the progress control is used solely for output. To get the current position without specifying a new value, use [GetPos](../Topic/CProgressCtrl::GetPos.md).  
  
## See Also  
 [Using CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controls](../mfc/controls--mfc-.md)