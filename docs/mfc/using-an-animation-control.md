---
description: "Learn more about: Using an Animation Control"
title: "Using an Animation Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["controls [MFC], animation", "CAnimateCtrl class [MFC], animation controls", "animation controls [MFC]"]
ms.assetid: a009a464-e12d-4112-bf52-04a09b28dd88
---
# Using an Animation Control

Typical usage of an animation control follows the pattern below:

- The control is created. If the control is specified in a dialog box template, creation is automatic when the dialog box is created. (You should have a [CAnimateCtrl](../mfc/reference/canimatectrl-class.md) member in your dialog class that corresponds to the animation control.) Alternatively, you can use the [Create](../mfc/reference/canimatectrl-class.md#create) member function to create the control as a child window of any window.

- Load an AVI clip into the animation control by calling the [Open](../mfc/reference/canimatectrl-class.md#open) member function. If your animation control is in a dialog box, a good place to do this is in the dialog class's [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) function.

- Play the clip by calling the [Play](../mfc/reference/canimatectrl-class.md#play) member function. If your animation control is in a dialog box, a good place to do this is in the dialog class's `OnInitDialog` function. Calling `Play` is not necessary if the animation control has the ACS_AUTOPLAY style set.

- If you want to display portions of the clip or play it frame by frame, use the `Seek` member function. To stop a clip that is playing, use the `Stop` member function.

- If you are not going to destroy the control right away, remove the clip from memory by calling the `Close` member function.

- If the animation control is in a dialog box, it and the `CAnimateCtrl` object will be destroyed automatically. If not, you need to ensure that both the control and the `CAnimateCtrl` object are properly destroyed. Destroying the control automatically closes the AVI clip.

## See also

[Using CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
