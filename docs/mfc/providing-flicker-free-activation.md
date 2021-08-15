---
description: "Learn more about: Providing Flicker-Free Activation"
title: "Providing Flicker-Free Activation"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC ActiveX controls [MFC], flicker-free", "flicker, MFC ActiveX controls", "activation [MFC], flicker-free"]
ms.assetid: bcb24b77-31d8-44a0-8c58-2ea6213b4c43
---
# Providing Flicker-Free Activation

If your control draws itself identically in the inactive and active states (and does not use windowless activation), you can eliminate the drawing operations and the accompanying visual flicker that normally occur when making the transition between the inactive and active states. To do this, include the **noFlickerActivate** flag in the set of flags returned by [COleControl::GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). For example:

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-flicker-free-activation_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#13](../mfc/codesnippet/cpp/providing-flicker-free-activation_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-flicker-free-activation_3.cpp)]

The code to include this flag is automatically generated if you select the **Flicker-Free activation** option on the [Control Settings](../mfc/reference/control-settings-mfc-activex-control-wizard.md) page when creating your control with the MFC ActiveX Control Wizard.

If you are using windowless activation, this optimization has no effect.

## See also

[MFC ActiveX Controls: Optimization](../mfc/mfc-activex-controls-optimization.md)
