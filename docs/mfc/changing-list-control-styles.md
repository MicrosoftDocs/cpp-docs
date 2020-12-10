---
description: "Learn more about: Changing List Control Styles"
title: "Changing List Control Styles"
ms.date: "11/04/2016"
helpviewer_keywords: ["styles [MFC], CListCtrl", "CListCtrl class [MFC], styles", "CListCtrl class [MFC], changing styles"]
ms.assetid: be74a005-0795-417c-9056-f6342aa74b26
---
# Changing List Control Styles

You can change the window style of a list control ([CListCtrl](reference/clistctrl-class.md)) at any time after you create it. By changing the window style, you change the kind of view the control uses. For example, to emulate the Explorer, you might supply menu items or toolbar buttons for switching the control between different views: icon view, list view, and so on.

For example, when the user selects your menu item, you could make a call to [GetWindowLong](/windows/win32/api/winuser/nf-winuser-getwindowlongw) to retrieve the current style of the control and then call [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) to reset the style. For more information, see [Using List View Controls](/windows/win32/Controls/using-list-view-controls) in the Windows SDK.

Available styles are listed in [Create](reference/clistctrl-class.md#create). The styles **LVS_ICON**, **LVS_SMALLICON**, **LVS_LIST**, and **LVS_REPORT** designate the four list control views.

## Extended Styles

In addition to the standard styles for a list control, there is another set, referred to as extended styles. These styles, discussed in [Extended List View Styles](/windows/win32/Controls/extended-list-view-styles) in the Windows SDK, provide a variety of useful features that customize the behavior of your list control. To implement the behavior of a certain style (such as hover selection), make a call to [CListCtrl::SetExtendedStyle](reference/clistctrl-class.md#setextendedstyle), passing the needed style. The following example demonstrates the function call:

[!code-cpp[NVC_MFCControlLadenDialog#22](codesnippet/cpp/changing-list-control-styles_1.cpp)]

> [!NOTE]
> For hover selection to work, you must also have either **LVS_EX_ONECLICKACTIVATE** or **LVS_EX_TWOCLICKACTIVATE** turned on.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
