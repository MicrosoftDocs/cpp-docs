---
description: "Learn more about: Manipulating the Tool Tip Control"
title: "Manipulating the Tool Tip Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CToolTipCtrl class [MFC], manipulating tool tip attributes", "tool tips [MFC], attributes"]
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
---
# Manipulating the Tool Tip Control

Class `CToolTipCtrl` provides a group of member functions that control the various attributes of the `CToolTipCtrl` object and the tool tip window.

The initial, pop-up, and reshow durations for the tool tip windows can be set and retrieved with calls to [GetDelayTime](reference/ctooltipctrl-class.md#getdelaytime) and [SetDelayTime](reference/ctooltipctrl-class.md#setdelaytime).

Change the appearance of the tool tip windows with the following functions:

- [GetMargin](reference/ctooltipctrl-class.md#getmargin) and [SetMargin](reference/ctooltipctrl-class.md#setmargin) Retrieves and sets the width between the tool tip border and the tool tip text.

- [GetMaxTipWidth](reference/ctooltipctrl-class.md#getmaxtipwidth) and [SetMaxTipWidth](reference/ctooltipctrl-class.md#setmaxtipwidth) Retrieves and sets the maximum width of the tool tip window.

- [GetTipBkColor](reference/ctooltipctrl-class.md#gettipbkcolor) and [SetTipBkColor](reference/ctooltipctrl-class.md#settipbkcolor) Retrieves and sets the background color of the tool tip window.

- [GetTipTextColor](reference/ctooltipctrl-class.md#gettiptextcolor) and [SetTipTextColor](reference/ctooltipctrl-class.md#settiptextcolor) Retrieves and sets the text color of the tool tip window.

In order for the tool tip control to be notified of important messages, such as WM_LBUTTONXXX messages, you must relay the messages to your tool tip control. The best method for this relay is to make a call to [CToolTipCtrl::RelayEvent](reference/ctooltipctrl-class.md#relayevent), in the `PreTranslateMessage` function of the owner window. The following example illustrates one possible method (assuming the tool tip control is called `m_ToolTip`):

[!code-cpp[NVC_MFCControlLadenDialog#41](codesnippet/cpp/manipulating-the-tool-tip-control_1.cpp)]

To immediately remove a tool tip window, call the [Pop](reference/ctooltipctrl-class.md#pop) member function.

## See also

[Using CToolTipCtrl](using-ctooltipctrl.md)<br/>
[Controls](controls-mfc.md)
