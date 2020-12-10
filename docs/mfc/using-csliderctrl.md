---
description: "Learn more about: Using CSliderCtrl"
title: "Using CSliderCtrl"
ms.date: "11/04/2016"
helpviewer_keywords: ["CSliderCtrl class [MFC], using", "slider controls [MFC], using"]
ms.assetid: 242c7bcd-126e-4b9b-8f76-8082ad06fe73
---
# Using CSliderCtrl

The [CSliderCtrl](../mfc/reference/csliderctrl-class.md) class represents a slider control, which is also called a trackbar. A "slider control" is a window that contains a slider and optional tick marks. When the user moves the slider, using either the mouse or the arrow keys, the slider control sends notification messages to indicate the change.

Slider controls are useful when you want the user to select a discrete value or a set of consecutive values in a range. For example, you might use a slider control to allow the user to set the repeat rate of the keyboard by moving the slider to a given tick mark.

The slider in a slider control moves in increments that you specify when you create it. For example, if you specify that the slider control should have a range of five, the slider can only occupy six positions: a position at the left side of the slider control and one position for each increment in the range. Typically, each of these positions is identified by a tick mark.

## What do you want to know more about

- [Using Slider Controls](../mfc/using-slider-controls.md)

- [Slider Control Styles](../mfc/slider-control-styles.md)

- [Slider Control Member Functions](../mfc/slider-control-member-functions.md)

- [Slider Notification Messages](../mfc/slider-notification-messages.md)

## See also

[Controls](../mfc/controls-mfc.md)
