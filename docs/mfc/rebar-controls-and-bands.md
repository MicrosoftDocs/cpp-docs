---
description: "Learn more about: Rebar Controls and Bands"
title: "Rebar Controls and Bands"
ms.date: "11/04/2016"
helpviewer_keywords: ["rebar controls [MFC], working with bands in", "bands, in rebar controls"]
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
---
# Rebar Controls and Bands

The main purpose of a rebar control is to act as a container for child windows, common dialog controls, menus, toolbars, and so on. This containment is supported by the concept of a "band." Each rebar band can contain any combination of a gripper bar, a bitmap, a text label, and a child window.

Class `CReBarCtrl` has many member functions that you can use to retrieve, and manipulate, information for a specific rebar band:

- [GetBandCount](../mfc/reference/crebarctrl-class.md#getbandcount) Retrieves the number of current bands in the rebar control.

- [GetBandInfo](../mfc/reference/crebarctrl-class.md#getbandinfo) Initializes a **REBARBANDINFO** structure with information from the specified band. There is a corresponding [SetBandInfo](../mfc/reference/crebarctrl-class.md#setbandinfo) member function.

- [GetRect](../mfc/reference/crebarctrl-class.md#getrect) Retrieves the bounding rectangle of a specified band.

- [GetRowCount](../mfc/reference/crebarctrl-class.md#getrowcount) Retrieves the number of band rows in a rebar control.

- [IDToIndex](../mfc/reference/crebarctrl-class.md#idtoindex) Retrieves the index of a specified band.

- [GetBandBorders](../mfc/reference/crebarctrl-class.md#getbandborders) Retrieves the borders of a band.

In addition to manipulation, several member functions are provided that allow you to operate on specific rebar bands.

[InsertBand](../mfc/reference/crebarctrl-class.md#insertband) and [DeleteBand](../mfc/reference/crebarctrl-class.md#deleteband) add and remove rebar bands. [MinimizeBand](../mfc/reference/crebarctrl-class.md#minimizeband) and [MaximizeBand](../mfc/reference/crebarctrl-class.md#maximizeband) affect the current size of a specific rebar band. [MoveBand](../mfc/reference/crebarctrl-class.md#moveband) changes the index of a specific rebar band. [ShowBand](../mfc/reference/crebarctrl-class.md#showband) shows or hides a rebar band from the user.

The following example demonstrates adding a toolbar band (*m_wndToolBar*) to an existing rebar control (*m_wndReBar*). The band is described by initializing the `rbi` structure and then calling the `InsertBand` member function:

[!code-cpp[NVC_MFCControlLadenDialog#27](../mfc/codesnippet/cpp/rebar-controls-and-bands_1.cpp)]

## See also

[Using CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
