---
title: "Slider Control Member Functions | Microsoft Docs"
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
  - "CSliderCtrl class, methods"
  - "slider controls, member functions"
ms.assetid: dbde49ee-7306-4d14-a6ce-d09aa198178f
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
# Slider Control Member Functions
An application can call the slider control's member functions to retrieve information about the slider control ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) and to change its characteristics.  
  
 To retrieve the position of the slider (that is, the value the user has chosen), use the [GetPos](../mfc/reference/csliderctrl-class.md#csliderctrl__getpos) member function. To set the position of the slider, use the [SetPos](../mfc/reference/csliderctrl-class.md#csliderctrl__setpos) member function. At any time you can use the `VerifyPos` member function to make sure that the slider is between the minimum and maximum values.  
  
 The range of a slider control is the set of contiguous values that the slider control can represent. Most applications use the [SetRange](../mfc/reference/csliderctrl-class.md#csliderctrl__setrange) member function to set the range of a slider control when it is first created. Applications can dynamically alter the range after the slider control has been created by using the [SetRangeMax](../mfc/reference/csliderctrl-class.md#csliderctrl__setrangemax) and [SetRangeMin](../mfc/reference/csliderctrl-class.md#csliderctrl__setrangemin) member functions. An application that allows the range to be changed dynamically typically retrieves the final range settings when the user has finished working with the slider control. To retrieve these settings, use the [GetRange](../mfc/reference/csliderctrl-class.md#csliderctrl__getrange), [GetRangeMax](../mfc/reference/csliderctrl-class.md#csliderctrl__getrangemax), and [GetRangeMin](../mfc/reference/csliderctrl-class.md#csliderctrl__getrangemin) member functions.  
  
 An application can use the `TBS_AUTOTICKS` style to have a slider control's tick marks displayed automatically. If an application needs to control the position or frequency of the tick marks, however, a number of member functions can be used.  
  
 To set the position of a tick mark, an application can use the [SetTic](../mfc/reference/csliderctrl-class.md#csliderctrl__settic) member function. The [SetTicFreq](../mfc/reference/csliderctrl-class.md#csliderctrl__setticfreq) member function allows an application to set tick marks that appear at regular intervals in the slider control's range. For example, the application can use this member function to display only 10 tick marks in a range of 1 through 100.  
  
 To retrieve the index in the range corresponding to a tick mark, use the [GetTic](../mfc/reference/csliderctrl-class.md#csliderctrl__gettic) member function. The [GetTicArray](../mfc/reference/csliderctrl-class.md#csliderctrl__getticarray) member function retrieves an array of these indices. To retrieve the position of a tick mark, in client coordinates, use the [GetTicPos](../mfc/reference/csliderctrl-class.md#csliderctrl__getticpos) member function. An application can retrieve the number of tick marks by using the [GetNumTics](../mfc/reference/csliderctrl-class.md#csliderctrl__getnumtics) member function.  
  
 The [ClearTics](../mfc/reference/csliderctrl-class.md#csliderctrl__cleartics) member function removes all of a slider control's tick marks.  
  
 A slider control's line size determines how far the slider moves when an application receives a **TB_LINEDOWN** or **TB_LINEUP** notification message. Similarly, the page size determines the response to the **TB_PAGEDOWN** and **TB_PAGEUP** notification messages. Applications can retrieve and set the line and page size values by using the [GetLineSize](../mfc/reference/csliderctrl-class.md#csliderctrl__getlinesize), [SetLineSize](../mfc/reference/csliderctrl-class.md#csliderctrl__setlinesize), [GetPageSize](../mfc/reference/csliderctrl-class.md#csliderctrl__getpagesize), and [SetPageSize](../mfc/reference/csliderctrl-class.md#csliderctrl__setpagesize) member functions.  
  
 An application can use member functions to retrieve the dimensions of a slider control. The [GetThumbRect](../mfc/reference/csliderctrl-class.md#csliderctrl__getthumbrect) member function retrieves the bounding rectangle for the slider. The [GetChannelRect](../mfc/reference/csliderctrl-class.md#csliderctrl__getchannelrect) member function retrieves the bounding rectangle for the slider control's channel. (The channel is the area over which the slider moves and which contains the highlight when a range is selected.)  
  
 If a slider control has the `TBS_ENABLESELRANGE` style, the user can select a range of contiguous values from it. A number of member functions allow the selection range to be adjusted dynamically. The [SetSelection](../mfc/reference/csliderctrl-class.md#csliderctrl__setselection) member function sets the starting and ending positions of a selection. When the user has finished setting a selection range, an application can retrieve the settings by using the [GetSelection](../mfc/reference/csliderctrl-class.md#csliderctrl__getselection) member function. To clear a user's selection, use the [ClearSel](../mfc/reference/csliderctrl-class.md#csliderctrl__clearsel) member function.  
  
## See Also  
 [Using CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controls](../mfc/controls-mfc.md)

