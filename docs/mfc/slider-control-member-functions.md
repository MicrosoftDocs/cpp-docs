---
title: "Slider Control Member Functions"
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
  - "CSliderCtrl class, methods"
  - "slider controls, member functions"
ms.assetid: dbde49ee-7306-4d14-a6ce-d09aa198178f
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
# Slider Control Member Functions
An application can call the slider control's member functions to retrieve information about the slider control ([CSliderCtrl](../mfcref/csliderctrl-class.md)) and to change its characteristics.  
  
 To retrieve the position of the slider (that is, the value the user has chosen), use the [GetPos](../Topic/CSliderCtrl::GetPos.md) member function. To set the position of the slider, use the [SetPos](../Topic/CSliderCtrl::SetPos.md) member function. At any time you can use the `VerifyPos` member function to make sure that the slider is between the minimum and maximum values.  
  
 The range of a slider control is the set of contiguous values that the slider control can represent. Most applications use the [SetRange](../Topic/CSliderCtrl::SetRange.md) member function to set the range of a slider control when it is first created. Applications can dynamically alter the range after the slider control has been created by using the [SetRangeMax](../Topic/CSliderCtrl::SetRangeMax.md) and [SetRangeMin](../Topic/CSliderCtrl::SetRangeMin.md) member functions. An application that allows the range to be changed dynamically typically retrieves the final range settings when the user has finished working with the slider control. To retrieve these settings, use the [GetRange](../Topic/CSliderCtrl::GetRange.md), [GetRangeMax](../Topic/CSliderCtrl::GetRangeMax.md), and [GetRangeMin](../Topic/CSliderCtrl::GetRangeMin.md) member functions.  
  
 An application can use the `TBS_AUTOTICKS` style to have a slider control's tick marks displayed automatically. If an application needs to control the position or frequency of the tick marks, however, a number of member functions can be used.  
  
 To set the position of a tick mark, an application can use the [SetTic](../Topic/CSliderCtrl::SetTic.md) member function. The [SetTicFreq](../Topic/CSliderCtrl::SetTicFreq.md) member function allows an application to set tick marks that appear at regular intervals in the slider control's range. For example, the application can use this member function to display only 10 tick marks in a range of 1 through 100.  
  
 To retrieve the index in the range corresponding to a tick mark, use the [GetTic](../Topic/CSliderCtrl::GetTic.md) member function. The [GetTicArray](../Topic/CSliderCtrl::GetTicArray.md) member function retrieves an array of these indices. To retrieve the position of a tick mark, in client coordinates, use the [GetTicPos](../Topic/CSliderCtrl::GetTicPos.md) member function. An application can retrieve the number of tick marks by using the [GetNumTics](../Topic/CSliderCtrl::GetNumTics.md) member function.  
  
 The [ClearTics](../Topic/CSliderCtrl::ClearTics.md) member function removes all of a slider control's tick marks.  
  
 A slider control's line size determines how far the slider moves when an application receives a **TB_LINEDOWN** or **TB_LINEUP** notification message. Similarly, the page size determines the response to the **TB_PAGEDOWN** and **TB_PAGEUP** notification messages. Applications can retrieve and set the line and page size values by using the [GetLineSize](../Topic/CSliderCtrl::GetLineSize.md), [SetLineSize](../Topic/CSliderCtrl::SetLineSize.md), [GetPageSize](../Topic/CSliderCtrl::GetPageSize.md), and [SetPageSize](../Topic/CSliderCtrl::SetPageSize.md) member functions.  
  
 An application can use member functions to retrieve the dimensions of a slider control. The [GetThumbRect](../Topic/CSliderCtrl::GetThumbRect.md) member function retrieves the bounding rectangle for the slider. The [GetChannelRect](../Topic/CSliderCtrl::GetChannelRect.md) member function retrieves the bounding rectangle for the slider control's channel. (The channel is the area over which the slider moves and which contains the highlight when a range is selected.)  
  
 If a slider control has the `TBS_ENABLESELRANGE` style, the user can select a range of contiguous values from it. A number of member functions allow the selection range to be adjusted dynamically. The [SetSelection](../Topic/CSliderCtrl::SetSelection.md) member function sets the starting and ending positions of a selection. When the user has finished setting a selection range, an application can retrieve the settings by using the [GetSelection](../Topic/CSliderCtrl::GetSelection.md) member function. To clear a user's selection, use the [ClearSel](../Topic/CSliderCtrl::ClearSel.md) member function.  
  
## See Also  
 [Using CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controls](../mfc/controls--mfc-.md)