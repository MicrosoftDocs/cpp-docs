---
title: "Manipulating the Tool Tip Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CToolTipCtrl class [MFC], manipulating tool tip attributes", "tool tips [MFC], attributes"]
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
---
# Manipulating the Tool Tip Control

Class `CToolTipCtrl` provides a group of member functions that control the various attributes of the `CToolTipCtrl` object and the tool tip window.

The initial, pop-up, and reshow durations for the tool tip windows can be set and retrieved with calls to [GetDelayTime](../mfc/reference/ctooltipctrl-class.md#getdelaytime) and [SetDelayTime](../mfc/reference/ctooltipctrl-class.md#setdelaytime).

Change the appearance of the tool tip windows with the following functions:

- [GetMargin](../mfc/reference/ctooltipctrl-class.md#getmargin) and [SetMargin](../mfc/reference/ctooltipctrl-class.md#setmargin) Retrieves and sets the width between the tool tip border and the tool tip text.

- [GetMaxTipWidth](../mfc/reference/ctooltipctrl-class.md#getmaxtipwidth) and [SetMaxTipWidth](../mfc/reference/ctooltipctrl-class.md#setmaxtipwidth) Retrieves and sets the maximum width of the tool tip window.

- [GetTipBkColor](../mfc/reference/ctooltipctrl-class.md#gettipbkcolor) and [SetTipBkColor](../mfc/reference/ctooltipctrl-class.md#settipbkcolor) Retrieves and sets the background color of the tool tip window.

- [GetTipTextColor](../mfc/reference/ctooltipctrl-class.md#gettiptextcolor) and [SetTipTextColor](../mfc/reference/ctooltipctrl-class.md#settiptextcolor) Retrieves and sets the text color of the tool tip window.

In order for the tool tip control to be notified of important messages, such as WM_LBUTTONXXX messages, you must relay the messages to your tool tip control. The best method for this relay is to make a call to [CToolTipCtrl::RelayEvent](../mfc/reference/ctooltipctrl-class.md#relayevent), in the `PreTranslateMessage` function of the owner window. The following example illustrates one possible method (assuming the tool tip control is called `m_ToolTip`):

[!code-cpp[NVC_MFCControlLadenDialog#41](../mfc/codesnippet/cpp/manipulating-the-tool-tip-control_1.cpp)]

To immediately remove a tool tip window, call the [Pop](../mfc/reference/ctooltipctrl-class.md#pop) member function.

## See Also

[Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)

