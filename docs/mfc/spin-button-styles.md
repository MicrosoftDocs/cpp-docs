---
description: "Learn more about: Spin Button Styles"
title: "Spin Button Styles"
ms.date: "09/09/2019"
helpviewer_keywords: ["styles [MFC], CSpinButtonCtrl", "CSpinButtonCtrl class [MFC], styles", "styles [MFC], spin button control", "spin button control, styles"]
ms.assetid: fb4a7f6f-9182-47be-bccf-0728fdc5332f
---
# Spin Button Styles

Many of the settings for a spin button ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)) are controlled by styles. You can set the following styles using the [Class Wizard](reference/mfc-class-wizard.md).

- **Orientation** Either Vertical or Horizontal. Controls the orientation of the arrow buttons. Associated with the UDS_HORZ style.

- **Alignment** One of Unattached, Left, or Right. Controls the location of the spin button. Left and Right position the spin button next to the buddy window. The width of the buddy window is decreased to accommodate the spin button. Associated with the UDS_ALIGNLEFT and UDS_ALIGNRIGHT styles.

- **Auto Buddy** Automatically selects the previous window in Z-order as buddy window to the spin button. In a dialog template, this is the control which precedes the spin button in the tab order. Associated with the UDS_AUTOBUDDY style.

- **Set Buddy Integer** Causes the spin control to increment and decrement the caption of the buddy window as the current position changes. Associated with the UDS_SETBUDDYINT style.

- **No Thousands** Does not insert the thousands separator in the value in the caption of the buddy window. Associated with the UDS_NOTHOUSANDS style.

    > [!NOTE]
    >  Set this style if you want to use dialog data exchange (DDX) to get the integer value from the buddy control. `DDX_Text` does not accept embedded thousand separators.

- **Wrap** Causes the position to "wrap" as the value is incremented or decremented beyond the range of the control. Associated with the UDS_WRAP style.

- **Arrow Keys** Causes the spin button to increment or decrement the position when the UP ARROW and DOWN ARROW keys are pressed. Associated with the UDS_ARROWKEYS style.

## See also

[Using CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
