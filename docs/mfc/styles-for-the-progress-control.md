---
description: "Learn more about: Styles for the Progress Control"
title: "Styles for the Progress Control"
ms.date: "11/19/2018"
helpviewer_keywords: ["PBS_SMOOTH style", "progress controls [MFC], styles", "PBS_VERTICAL style", "CProgressCtrl class [MFC], styles"]
ms.assetid: 39eb8081-bc20-4552-91b9-e7cdd1b7d8ae
---
# Styles for the Progress Control

When you initially create the progress control ([CProgressCtrl::Create](../mfc/reference/cprogressctrl-class.md#create)), use the *dwStyle* parameter to specify the desired window styles for your progress control. The following list details the applicable window styles. The control ignores any window style other than the ones listed here. You should always create the control as a child window, usually of a dialog box parent.

|Window style|Effect|
|------------------|------------|
|WS_BORDER|Creates a border around the window.|
|WS_CHILD|Creates a child window (should always be used for `CProgressCtrl`).|
|WS_CLIPCHILDREN|Excludes the area occupied by child windows when you draw within the parent window. Used when you create the parent window.|
|WS_CLIPSIBLINGS|Clips child windows relative to each other.|
|WS_DISABLED|Creates a window that is initially disabled.|
|WS_VISIBLE|Creates a window that is initially visible.|
|WS_TABSTOP|Specifies that the control can receive focus when the user presses the TAB key to move to it.|

In addition, you can specify two styles that apply only to the progress control, PBS_VERTICAL and PBS_SMOOTH.

Use PBS_VERTICAL to orient the control vertically, rather than horizontally. Use PBS_SMOOTH to fill the control completely, rather than displaying small delineated squares that fill the control incrementally.

Without PBS_SMOOTH style:

![Standard progress bar style](../mfc/media/vc4ruw1.gif "Standard progress bar style")

With PBS_SMOOTH and PBS_VERTICAL styles:

![Progress bar style, smooth and vertical](../mfc/media/vc4ruw2.gif "Progress bar style, smooth and vertical")

For more information, see [Window Styles](../mfc/reference/styles-used-by-mfc.md#frame-window-styles-mfc) in the *MFC Reference*.

## See also

[Using CProgressCtrl](../mfc/using-cprogressctrl.md)
