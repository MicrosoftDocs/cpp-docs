---
description: "Learn more about: Accessing the Embedded Month Calendar Control"
title: "Accessing the Embedded Month Calendar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["DateTimePicker control [MFC], accessing month calendar", "CDateTimeCtrl class [MFC], accessing embedded control", "month calendar controls [MFC], embedded in date/time picker", "CMonthCalCtrl class [MFC], changing the font", "month calendar controls [MFC], changing the font", "DateTimePicker control [MFC]"]
ms.assetid: 355e97ed-cf81-4df3-a2f8-9ddbbde93227
---
# Accessing the Embedded Month Calendar Control

The embedded month calendar control object can be accessed from the `CDateTimeCtrl` object with a call to the [GetMonthCalCtrl](reference/cdatetimectrl-class.md#getmonthcalctrl) member function.

> [!NOTE]
> The embedded month calendar control is used only when the date and time picker control does not have the **DTS_UPDOWN** style set.

This is useful if you want to modify certain attributes before the embedded control is displayed. To accomplish this, handle the **DTN_DROPDOWN** notification, retrieve the month calendar control (using [CDateTimeCtrl::GetMonthCalCtrl](reference/cdatetimectrl-class.md#getmonthcalctrl)), and make your modifications. Unfortunately, the month calendar control is not persistent.

In other words, when the user requests the display of the month calendar control, a new month calendar control is created (before the **DTN_DROPDOWN** notification). The control is destroyed (after the **DTN_CLOSEUP** notification) when dismissed by the user. This means that any attributes you modify, before the embedded control is displayed, are lost when the embedded control is dismissed.

The following example demonstrates this procedure, using a handler for the **DTN_DROPDOWN** notification. The code changes the background color of the month calendar control, with a call to [SetMonthCalColor](reference/cdatetimectrl-class.md#setmonthcalcolor), to gray. The code is as follows:

[!code-cpp[NVC_MFCControlLadenDialog#5](codesnippet/cpp/accessing-the-embedded-month-calendar-control_1.cpp)]

As stated previously, all modifications to properties of the month calendar control are lost, with two exceptions, when the embedded control is dismissed. The first exception, the colors of the month calendar control, has already been discussed. The second exception is the font used by the month calendar control. You can modify the default font by making a call to [CDateTimeCtrl::SetMonthCalFont](reference/cdatetimectrl-class.md#setmonthcalfont), passing the handle of an existing font. The following example (where `m_dtPicker` is the date and time control object) demonstrates one possible method:

[!code-cpp[NVC_MFCControlLadenDialog#6](codesnippet/cpp/accessing-the-embedded-month-calendar-control_2.cpp)]

Once the font has been changed, with a call to `CDateTimeCtrl::SetMonthCalFont`, the new font is stored and used the next time a month calendar is to be displayed.

## See also

[Using CDateTimeCtrl](using-cdatetimectrl.md)<br/>
[Controls](controls-mfc.md)
