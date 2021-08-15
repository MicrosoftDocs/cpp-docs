---
description: "Learn more about: Setting the Day State of a Month Calendar Control"
title: "Setting the Day State of a Month Calendar Control"
ms.date: "11/04/2016"
f1_keywords: ["MCN_GETDAYSTATE"]
helpviewer_keywords: ["CMonthCalCtrl class [MFC], setting day state info", "MCN_GETDAYSTATE notification [MFC]", "month calendar controls [MFC], day state info"]
ms.assetid: 435d1b11-ec0e-4121-9e25-aaa6af812a3c
---
# Setting the Day State of a Month Calendar Control

One of the attributes of a month calendar control is the ability to store information, referred to as the day state of the control, for each day of the month. This information is used to emphasize certain dates for the month currently displayed.

> [!NOTE]
> The `CMonthCalCtrl` object must have the MCS_DAYSTATE style to display day state information.

Day state information is expressed as a 32-bit data type, **MONTHDAYSTATE**. Each bit in a **MONTHDAYSTATE** bit field (1 through 31) represents the state of a day in a month. If a bit is on, the corresponding day will be displayed in bold; otherwise it will be displayed with no emphasis.

There are two methods for setting the day state of the month calendar control: explicitly with a call to [CMonthCalCtrl::SetDayState](../mfc/reference/cmonthcalctrl-class.md#setdaystate) or by handling the MCN_GETDAYSTATE notification message.

## Handling the MCN_GETDAYSTATE Notification Message

The MCN_GETDAYSTATE message is sent by the control to determine how the days within the visible months should be displayed.

> [!NOTE]
> Because the control caches the previous and following months, in respect to the visible month, you will receive this notification every time a new month is chosen.

To properly handle this message, you must determine how many months day state information is being requested for, initialize an array of **MONTHDAYSTATE** structures with the proper values, and initialize the related structure member with the new information. The following procedure, detailing the necessary steps, assumes that you have a `CMonthCalCtrl` object called *m_monthcal* and an array of **MONTHDAYSTATE** objects, *mdState*.

#### To handle the MCN_GETDAYSTATE notification message

1. Using the [Class Wizard](reference/mfc-class-wizard.md), add a notification handler for the MCN_GETDAYSTATE message to the *m_monthcal* object (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).

1. In the body of the handler, add the following code:

   [!code-cpp[NVC_MFCControlLadenDialog#26](../mfc/codesnippet/cpp/setting-the-day-state-of-a-month-calendar-control_1.cpp)]

   The example converts the *pNMHDR* pointer to the proper type, then determines how many months of information are being requested (`pDayState->cDayState`). For each month, the current bitfield (`pDayState->prgDayState[i]`) is initialized to zero and then the needed dates are set (in this case, the 15th of each month).

## See also

[Using CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
