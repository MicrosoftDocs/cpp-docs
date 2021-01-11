---
description: "Learn more about: Using Custom Format Strings in a Date and Time Picker Control"
title: "Using Custom Format Strings in a Date and Time Picker Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CDateTimeCtrl class [MFC], display styles", "DateTimePicker control [MFC], display styles", "DateTimePicker control [MFC]"]
ms.assetid: 7d577f03-6ca0-4597-9093-50b78f304719
---
# Using Custom Format Strings in a Date and Time Picker Control

By default, date and time picker controls provide three format types (each format corresponding to a unique style) for displaying the current date or time:

- **DTS_LONGDATEFORMAT** Displays the date in long format, producing output like "Wednesday, January 3, 2000".

- **DTS_SHORTDATEFORMAT** Displays the date in short format, producing output like "1/3/00".

- **DTS_TIMEFORMAT** Displays the time in long format, producing output like "5:31:42 PM".

However, you can customize the appearance of the date or time by using a custom format string. This custom string is made up of either existing format characters, nonformat characters, or a combination of both. Once the custom string is built, make a call to [CDateTimeCtrl::SetFormat](../mfc/reference/cdatetimectrl-class.md#setformat) passing in your custom string. The date and time picker control will then display the current value using your custom format string.

The following example code (where *m_dtPicker* is the `CDateTimeCtrl` object) demonstrates one possible solution:

[!code-cpp[NVC_MFCControlLadenDialog#7](../mfc/codesnippet/cpp/using-custom-format-strings-in-a-date-and-time-picker-control_1.cpp)]

In addition to custom format strings, date and time picker controls also support [callback fields](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).

## See also

[Using CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
