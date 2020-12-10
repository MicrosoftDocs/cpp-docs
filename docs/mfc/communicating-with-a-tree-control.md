---
description: "Learn more about: Communicating with a Tree Control"
title: "Communicating with a Tree Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["tree controls [MFC], communicating with", "CTreeCtrl class [MFC], calling member functions", "communications, tree controls", "tree controls"]
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
---
# Communicating with a Tree Control

You use different methods for calling member functions in a [CTreeCtrl](reference/ctreectrl-class.md) object depending on how the object was created:

- If the tree control is in a dialog box, use a member variable of type `CTreeCtrl` that you create in the dialog box class.

- If the tree control is a child window, use the `CTreeCtrl` object (or pointer) you used to construct the object.

- If you're using a `CTreeView` object, use the function [CTreeView::GetTreeCtrl](reference/ctreeview-class.md#gettreectrl) to get a reference to the tree control. You can initialize another reference with this value or assign the address of the reference to a `CTreeCtrl` pointer.

## See also

[Using CTreeCtrl](using-ctreectrl.md)<br/>
[Controls](controls-mfc.md)
