---
title: "Setting the Day State of a Month Calendar Control"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 435d1b11-ec0e-4121-9e25-aaa6af812a3c
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Setting the Day State of a Month Calendar Control
One of the attributes of a month calendar control is the ability to store information, referred to as the day state of the control, for each day of the month. This information is used to emphasize certain dates for the month currently displayed.  
  
> [!NOTE]
>  The `CMonthCalCtrl` object must have the **MCS_DAYSTATE** style to display day state information.  
  
 Day state information is expressed as a 32-bit data type, **MONTHDAYSTATE**. Each bit in a **MONTHDAYSTATE** bit field (1 through 31) represents the state of a day in a month. If a bit is on, the corresponding day will be displayed in bold; otherwise it will be displayed with no emphasis.  
  
 There are two methods for setting the day state of the month calendar control: explicitly with a call to [CMonthCalCtrl::SetDayState](../Topic/CMonthCalCtrl::SetDayState.md) or by handling the **MCN_GETDAYSTATE** notification message.  
  
## Handling the MCN_GETDAYSTATE Notification Message  
 The **MCN_GETDAYSTATE** message is sent by the control to determine how the days within the visible months should be displayed.  
  
> [!NOTE]
>  Because the control caches the previous and following months, in respect to the visible month, you will receive this notification every time a new month is chosen.  
  
 To properly handle this message, you must determine how many months day state information is being requested for, initialize an array of **MONTHDAYSTATE** structures with the proper values, and initialize the related structure member with the new information. The following procedure, detailing the necessary steps, assumes that you have a `CMonthCalCtrl` object called `m_monthcal` and an array of **MONTHDAYSTATE** objects, `mdState`.  
  
#### To handle the MCN_GETDAYSTATE notification message  
  
1.  Using the Properties window, add a notification handler for the **MCN_GETDAYSTATE** message to the `m_monthcal` object (see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)).  
  
2.  In the body of the handler, add the following code:  
  
     [!CODE [NVC_MFCControlLadenDialog#26](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#26)]  
  
     The example converts the `pNMHDR` pointer to the proper type, then determines how many months of information are being requested (`pDayState->cDayState`). For each month, the current bitfield (`pDayState->prgDayState[i]`) is initialized to zero and then the needed dates are set (in this case, the 15th of each month).  
  
## See Also  
 [Using CMonthCalCtrl](../VS_visualcpp/Using-CMonthCalCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)